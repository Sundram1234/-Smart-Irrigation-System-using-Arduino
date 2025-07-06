# 🌱 Smart Irrigation System using Arduino

This is an *automatic irrigation system* built using an Arduino UNO. It uses a *soil moisture sensor* to detect the dryness of the soil and turns a *DC water pump ON or OFF* using a relay module.

---

## 🔧 Components Used

| Component              | Quantity |
|------------------------|----------|
| Arduino UNO            | 1        |
| Soil Moisture Sensor   | 1        |
| 1-Channel Relay Module | 1        |
| DC Water Pump (6V-12V) | 1        |
| Power Supply (Battery/Adapter) | 1 |
| Jumper Wires           | As needed |

---

## 🔌 Circuit Diagram

(You can upload the circuit diagram image here later)  
For now, describe wiring like this:

- *Soil Sensor → A0, 5V, GND*
- *Relay IN → D8*, VCC → 5V, GND → GND
- *Pump → Connected via relay module (NO, COM)*

---

## 🧠 How It Works

- The soil moisture sensor measures moisture level.
- If the moisture is *below threshold, the **relay activates* and pump turns ON.
- If the soil is moist enough, pump turns OFF.
- The system repeats every second.

---

## 💻 Code File

The working code is available in this repository:
`smart_irrigation.ino`

---

## 👨‍💻 Made by

*Sundram Savre*  
Embedded Systems & Electronics Enthusiast  
📍 India
