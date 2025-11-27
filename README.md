

IR Proximity Servo Actuation System

1. System Overview
This project implements a digital control loop that interfaces an infrared (IR) obstacle avoidance sensor with a PWM-controlled servo motor. The system utilizes GPIO polling to detect logic level changes at the sensor output and drives the actuator to predefined angular positions based on the presence of an object.

Hardware Architecture
MCU: Arduino Nano 3
Sensor Type: Active IR Reflection (Transmitter/Receiver pair with Comparator).
Actuator: Position-rotation servo (Standard 50Hz PWM).
Operating Voltage: 5V DC (Arduino) / 3.3V DC.
