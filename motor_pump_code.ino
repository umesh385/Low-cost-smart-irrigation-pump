
// === Pin Configuration ===
const int soilMoisturePin = A0;     // Analog pin for soil moisture
const int relayPin = 7;             // Digital pin for relay module
const int flowSensorPin = 2;        // Interrupt pin for flow sensor (must be digital interrupt-capable)

// === Thresholds ===
const int moistureThreshold = 500;  // Adjust based on your soil (0=dry, 1023=wet)
volatile int flowPulseCount = 0;

unsigned long previousMillis = 0;
const long interval = 1000;         // Flow sensor reading interval (1 second)
float flowRate = 0.0;

void setup() {
  pinMode(relayPin, OUTPUT);
  digitalWrite(relayPin, LOW);     // Keep motor OFF initially

  pinMode(flowSensorPin, INPUT_PULLUP);
  attachInterrupt(digitalPinToInterrupt(flowSensorPin), countFlowPulse, RISING);

  Serial.begin(9600);
}

void loop() {
  int soilMoisture = analogRead(soilMoisturePin);
  Serial.print("Soil Moisture: ");
  Serial.println(soilMoisture);

  if (soilMoisture < moistureThreshold) {
    Serial.println("Soil is dry. Turning ON motor...");
    digitalWrite(relayPin, HIGH);  // Turn ON motor

    // Measure flow for 1 second
    flowPulseCount = 0;
    unsigned long startTime = millis();
    while (millis() - startTime < interval) {
      // Wait while pulses are counted by interrupt
    }

    flowRate = flowPulseCount / 7.5; // Approximate calibration for YF-S201
    Serial.print("Flow Rate: ");
    Serial.print(flowRate);
    Serial.println(" L/min");

    // Safety check: If no flow detected, stop motor
    if (flowRate < 0.5) {
      Serial.println("⚠️ No water flow detected! Stopping motor.");
      digitalWrite(relayPin, LOW);
    }

  } else {
    Serial.println("Soil is wet. Motor remains OFF.");
    digitalWrite(relayPin, LOW);  // Turn OFF motor
  }

  delay(3000);  // Wait before next cycle
}

void countFlowPulse() {
  flowPulseCount++;
}
