
// Smart Low-Cost Irrigation Pump System
// Controls motor pump based on soil moisture and water flow

// Pin Definitions
const int moisturePin = A0;      // Soil moisture sensor (analog)
const int flowSensorPin = 2;     // Water flow sensor (digital, interrupt)
const int relayPin = 7;          // Relay module to control pump

// Soil Moisture Threshold (adjust as needed)
int drySoilThreshold = 500;      // Lower value = wetter soil

// Variables for Flow Sensor
volatile int flowPulseCount = 0;
unsigned long lastFlowCheckTime = 0;
float flowRate = 0.0;

void setup() {
  pinMode(relayPin, OUTPUT);
  digitalWrite(relayPin, LOW);  // Ensure pump is OFF at start

  pinMode(flowSensorPin, INPUT);
  attachInterrupt(digitalPinToInterrupt(flowSensorPin), countFlowPulse, RISING);

  Serial.begin(9600);
  Serial.println("Smart Irrigation System Initialized");
}

void loop() {
  int moistureValue = analogRead(moisturePin);
  Serial.print("Soil Moisture Value: ");
  Serial.println(moistureValue);

  // Calculate Flow Rate Every 1 Second
  if (millis() - lastFlowCheckTime >= 1000) {
    detachInterrupt(digitalPinToInterrupt(flowSensorPin));  // Temporarily stop counting
    flowRate = (flowPulseCount / 7.5); // Approximation: pulses per second to L/min (sensor-specific)
    flowPulseCount = 0;
    lastFlowCheckTime = millis();
    attachInterrupt(digitalPinToInterrupt(flowSensorPin), countFlowPulse, RISING);

    Serial.print("Flow Rate (L/min): ");
    Serial.println(flowRate);
  }

  // Decision Logic
  if (moistureValue > drySoilThreshold && flowRate > 0.5) {
    digitalWrite(relayPin, HIGH); // Pump ON
    Serial.println("Pump Status: ON (Soil is dry & water is flowing)");
  } else {
    digitalWrite(relayPin, LOW);  // Pump OFF
    Serial.println("Pump Status: OFF (Soil is wet or no water flow)");
  }

  delay(1000); // Delay between cycles
}

// Interrupt Service Routine for flow sensor
void countFlowPulse() {
  flowPulseCount++;
}
