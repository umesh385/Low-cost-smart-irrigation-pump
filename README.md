
# # Smart low cost irrigation Motor Pump System with sensor Based control

A smart, low-cost, sensor-controlled irrigation system using an Arduino, built for small rural farms. This project uses soil moisture sensors and relay modules to automate water flow via a DC motor pump, saving water and energy while ensuring timely irrigation.

---

## Project Purpose

- Reduce manual labor for small farmers
- Save water by using moisture-based control
- Provide affordable tech-driven solutions in rural areas

---

##  Features
Automatically turns pump ON when soil is dry
- Shuts pump OFF when soil is wet or water flow is insufficient
- Relay-based motor control using Arduino
- Field-tested in actual rural conditions
- AI-generated images to visualize working and circuit for clarity
- Water Flow Sensor detects movement and amount of water 
- Soil sensor detects the moisture and need of water in soil
---

## How It Works

1. Soil moisture is constantly monitored.
2. If moisture is below a threshold, the motor turns ON.
3. The water flow sensor confirms that the water is 
   actually flowing and the amount of water used shows on 
   screen 
4. When the soil is wet enough, the motor turns OFF.
5. The full system runs on a low-power Arduino setup.
6. This ensure that water is only used when needed and
   prevents water wastage and system failure  

---

## Components Used

---

Components, Function, and Cost Table (for Smart Motor Pump System)

Component	Function / Working	Cost (₹)

Arduino Uno / Nano :
Acts as the brain — reads sensor data and controls relay to switch motor ON/OFF	
COST : ₹500

Soil Moisture Sensor :
Measures soil wetness level; sends analog/digital signal to Arduino
COST : ₹150

5V Relay Module	:
Acts like a switch — Arduino uses it to turn the motor pump ON or OFF safely
COST :₹ ₹150

DC Motor Pump (12V)	:
Pumps water from well/tank to the field when soil is dry
COST : ₹1,200

Power Supply / Battery :
Provides 9V or 12V power to Arduino and motor pump	
COST : ₹800

Jumper Wires & Breadboard	:
Connects all components safely for prototyping 
COST : ₹300

PVC Pipe / Hose	Carries water from the motor to the crop field (optional, but common)	
COST : ₹250
 
Water Flow Sensor :
Detects water movement and flow rate
COST : ₹400

---

 Total Cost Range: ₹3750

###  Circuit Diagram    

[Circuit Daigram](IMG_20250723_134800.jpg) :
Colored AI-generated replica of the actual circuit setup for clarity

###  Field Setup  
 
[Field setup](field-setup.png_ AI image of actual field setup.jpg) :

AI-illustrated image showing real-life prototype placement for clarity

## Field Testing Note

I have fully built and tested the Smart Motor Pump System using real components including a DC motor pump placed in a well, a soil moisture sensor embedded in the field, and relay-based control using an Arduino. After completion, I immediately ran to the field to test it in actual rural conditions.

Because of this, I could not take clean or presentable pictures — the soil moisture sensor was covered in dirt, the motor was submerged in the well, and the wiring was exposed and open, as typical in early-stage field prototypes.

Rather than share unclear or messy photos, I’ve used AI-generated illustrations that accurately replicate the physical model. Every component and connection shown in the visuals reflects the real setup. I chose this approach purely for clarity and ease of explanation, as the illustration makes the working of the system easier to understand than raw images and same with the circuit diagram of it as my drawing is not that good for post it professionally on GitHub 

---
##  Code Overview

This Arduino code controls the smart irrigation system. It:
- Reads soil moisture from analog pin A0
- Monitors water flow using a digital sensor on pin D2
- Controls motor ON/OFF using relay on pin D7
- Displays live status on Serial Monitor

Logic:
- IF soil is dry AND water is flowing → Pump ON
- ELSE → Pump OFF

##  How to Use

1. Upload the `.ino` code to Arduino using Arduino IDE.
2. Connect sensors and relay as per the circuit diagram.
3. Power the system.
4. Place soil sensor in the field and water flow sensor in the pipe.
5. Monitor Serial output or observe the motor behavior.


## Future Improvements

- Add a Light sensor 
- Mobile app-based control
- Solar power integration
- Use TinyML to predict water needs based on weather + soil
- temperature reader and sesor 
---

## Built By

**Umesh Kumar** 
Focused on building practical, low-cost solutions for rural India.

---
