# Dual Button LED Controller (Arduino)

This Arduino sketch demonstrates how to control an LED using **two pushbuttons**. The LED turns **ON only when both buttons are pressed simultaneously**.

---

## 🧠 Features

- Uses **two digital input pins** for pushbuttons.
- Turns **ON an LED** only when **both buttons are pressed**.
- Simple digital read logic with no external libraries.

---

## 🧰 Hardware Required

- 1 x Arduino Board (UNO, Nano, etc.)
- 2 x Pushbuttons
- 1 x LED
- 1 x Resistor (220Ω for LED)
- Jumper wires
- Breadboard

---

## 🔌 Circuit Diagram

| Component    | Pin            |
|--------------|----------------|
| Pushbutton 1 | Digital Pin 8  |
| Pushbutton 2 | Digital Pin 9  |
| LED (+)      | Digital Pin 10 |
| LED (-)      | GND (via 220Ω) |

> Note: Buttons are assumed to be active LOW (pressed = LOW)

---

## 🧾 Code Highlights

### 🟢 Pin Configuration
```cpp
const int buttonPin_1 = 8;
const int buttonPin_2 = 9;
const int ledPin = 10;
