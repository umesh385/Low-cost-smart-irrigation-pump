
# # Smart low cost irrigation motor pump system with sensor based control 

A smart, low cost, sensor controlled  irrigation system using an arduino, built for small rural farms. This  project uses soil moisture sensor and relay modules to automate water flow via a DC motor pump, saving water and energy while ensuring timely irrigation.

---

##. Project Purpose 

- Reduce manual labour for small farmers.
- Save water by using moisture-based control.
- Provide affordable tech-driven solution in rural areas.
 
---

##.  Features

- Automatically turns pump ON when soil is dry.
- Shuts pump OFF when soil is wet or water flow is  insufficient.
- Relay-based motor control using Arduino.
- Field tested in actual rural conditions.
- AI-generated images to visualise working and circuit for clarity.
- Water flow Sensor detects movement and amount of water 
- Soil sensor detects the moisture and need of water in soil.

---

##. How it works 

1. Soil moisture is constantly monitored.
2. If moisture is below a threshold,the motor turns ON.
3. The water flow sensor confirms that the water is  
   actually flowing and the amount of water used shows on 
   screen.
4. When the soil is wet enough, the motor turns OFF.
5. The Full syatem runs on a low power Arduino setup.
6. This ensure that water is only used when needed and
   prevents water wastage and system failure.

---

##. Components used

---

Components, Functions, and cost table ( for smart motor  Pump system)

Components Function / Working cost (₹)

Arduino Uno / Nano:
Acts as a brain - reads sensor data and controls relay to switch motor ON/OFF.
COST : ₹500

Soil Moisture Sensors:
Measures soil wetness level; sends analog/digital signal to Arduino.
COST : ₹150

5V Relay Module:
Acts like a switch - Arduino uses it to turn the motor Pump ON or OFF safely.
COST :₹ ₹150

DC Motor Pump (12V):
Pumps water from well/tank to the field when soil is dry.
COST : ₹1,200

Power Supply/ Battery:
Provides 9V or 12V Power to Arduino and motor pump.
COST : ₹800

Jumper Wires & Breadboard:
Connects all components safely for prototyping.
COST : ₹300

PVC Pipe/ Hose:
Carries water from the motor to the crop field.
COST : ₹250
 
Water flow sensors:
Detects water movement and flow rate.
COST : ₹400

---

 Total Cost Range = ₹3750

### Circuit Daigram

[Circuit Daigram](colored-circuit-diagram.png.jpg) :
Colored AI-generated replica of the actual circuit setup for clarity

###  Field Setup  
 
[Field setup](field-setup.png.jpg) :

AI-illustrated image showing real-life prototype placement for clarity

## Field Testing Note

I have fully built and tested the Smart motor Pump system using real components including a DC motor pump placed in  a well, a soil moisture sensor embedded in the field, and relay-based control using an Arduino. After completion, I immediately ran to the field to test it in actual rural conditions.

Because of this, I could not take clear or presentable  pictures - the soil moisture sensor was covered in dirt, the motor was submerged in the well, and the wiring was exposed and open, as typical in early-stage field prototypes.

Rather than share unclear or messy photos, I’ve used  AI-generated illustration that accuratley replicate the physical model. Every components and conmection shown in  the visuals reflects the real setup. I chose this approach purely for clarity and ease of explanation, as the  illustartion makes the working of the system easier to  understand than raw images and same with the circuit daigram of it as my drawing is not that good for post it professionally on GitHub.

---

###  Code Overview
## Code Explanation

This Arduino code controls a smart irrigation pump based on soil moisture and water flow readings. Here's how it works:

Soil Moisture Sensor (A0): Measures the dryness of the soil. If the moisture value is above a set threshold, it means the soil is dry.

Water Flow Sensor (D2): Measures water flow rate using pulse counting. It helps ensure the pump is only activated when water is actually flowing.

Relay Module (D7): Acts like a switch to turn the pump ON or OFF.

## Logic Flow:

1. The system constantly reads the soil moisture value.

2. Every 1 second, it calculates the water flow rate in liters per minute.

3. If:

Soil is dry (moistureValue > 500)

AND water is flowing (flowRate > 0.5 L/min) → The pump turns ON.

4. If the soil is already wet or no water is detected, the pump stays OFF.

 ## Features of code :

Uses interrupts for accurate flow rate counting.

Prevents pump from running if water isn't flowing (protects motor).

Energy efficient and suitable for rural low-power setups.


##  How to Use

1. Upload the `.ino` code to Arduino using Arduino IDE.
2. Connect sensors and relay as per the circuit diagram.
3. Power the system.
4. Place soil sensor in the field and water flow sensor in the pipe.
5. Monitor Serial output or observe the motor behavior.


##. Future Improvements 

- Add a light sensor.
- Mobile app- based control.
- Solar power integration.
- Use tinyML to predict water needs based on wheather +   soil and crop type.
- Temperature reader and sesor. 

---

##. Use of AI illustarions 

> All visuals used are AI generated replicas of the actual working model. 
> These were created to improve clarity because the real prototype was tested in muddy,wet rural condition where  clean photography wasn't possible.  
> Every connection shown in the illustration reflects the  actual, field tested setup.


##. Built By:

**UMESH KUMAR** 
Focused on building Practical, low cost solutions for rural India.

---
