# Temperature-Based LED Alert System (Arduino)

## 📌 Overview
This project implements a temperature-based alert system using an **Arduino Uno**, a **temperature sensor**, and a **potentiometer** to simulate real-time temperature variation. LEDs are used as visual indicators to represent different temperature ranges.

The project was designed and tested using **Tinkercad Circuits**, focusing on sensor interfacing and conditional control logic.

---

## 🛠 Components Used
- Arduino Uno
- Temperature Sensor
- Potentiometer (to simulate temperature changes)
- LEDs (3)
- Resistors
- Breadboard
- Jumper Wires

---

## ⚙️ Working Logic
The system continuously monitors temperature values and activates LEDs based on the following conditions:

| Temperature Range (°C) | Condition | LED Status |
|-----------------------|----------|-----------|
| > 45 | Extremely Hot | 3 LEDs ON |
| 35 – 44 | Hot | 2 LEDs ON |
| 30 – 34 | Warm | 1 LED ON |
| < 30 | Normal | All LEDs OFF |

---

## 🧪 Simulation Note
In the Tinkercad simulation, a potentiometer was used to emulate varying temperature values due to sensor limitations. The control logic and LED behavior remain identical to a real-world temperature sensor implementation.

---

## 📂 Files
- `code.ino` – Arduino program
- `circuit.png` – Circuit design screenshot from Tinkercad

---

## 🚀 Learning Outcomes
- Arduino programming and embedded systems basics
- Analog input handling using sensors and potentiometer
- Threshold-based decision making
- Circuit simulation and testing using Tinkercad
