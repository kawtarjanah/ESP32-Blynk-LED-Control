# ESP32 Blynk LED Control

## Overview

This project demonstrates a cloud-connected embedded system using the ESP32 WROOM-32D and the Blynk IoT platform. The system allows remote control of an LED through a web-based dashboard over WiFi.

The objective is to showcase basic IoT communication, secure configuration handling, and real-time GPIO control using a cloud interface.

---

## Hardware Requirements

- ESP32 WROOM-32D  
- LED  
- 220Ω current-limiting resistor  
- Breadboard  
- Jumper wires  
- USB cable  

---

## Software Requirements

- Arduino IDE  
- ESP32 Board Package  
- Blynk IoT Library  
- Blynk IoT account  

---

## System Functionality

- ESP32 connects to a local WiFi network.  
- The device establishes a connection with the Blynk Cloud.  
- A Switch widget (Virtual Pin V0) controls the LED state.  
- The LED turns ON or OFF in real time based on dashboard input.  

---

## Wiring

- LED anode → GPIO2  
- LED cathode → 220Ω resistor → GND  

---

## Setup Instructions

1. Install the ESP32 board package in Arduino IDE.  
2. Install the Blynk library.  
3. Copy `config.example.h` and rename it to `config.h`.  
4. Fill in:
   - `BLYNK_TEMPLATE_ID`
   - `BLYNK_AUTH_TOKEN`
   - WiFi SSID
   - WiFi password  
5. Upload the code to the ESP32.  
6. Open the Blynk dashboard and control the LED using the Switch widget.  

---



