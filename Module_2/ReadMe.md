# 🔆 LED Blinker Based on Light Intensity (Arduino)

This Arduino sketch reads ambient light using a **photoresistor (LDR)** and makes an **LED blink** at different speeds based on the brightness level. If the surroundings are completely dark, the LED blinks **rapidly**; otherwise, it blinks **slowly**.

---

## 🧠 Features

- Reads light level using a **photoresistor**.
- Adjusts **LED blink speed** dynamically.
- Demonstrates **analog input + digital output** in Arduino.

---

## 🧰 Hardware Required

- 1 x Arduino Board (UNO, Nano, etc.)
- 1 x Photoresistor (LDR)
- 1 x LED
- 1 x Resistor (220Ω for LED)
- 1 x Resistor (10kΩ recommended for LDR voltage divider)
- Breadboard
- Jumper wires

---

## 🔌 Circuit Diagram

| Component     | Connection             |
|---------------|------------------------|
| Photoresistor | One end to 5V          |
|               | Other end to A0 & 10kΩ to GND |
| LED (+)       | Digital Pin 9 (PWM)    |
| LED (–)       | GND via 220Ω resistor  |

> Note: The photoresistor forms a **voltage divider** with the 10kΩ resistor.

---

## 🧾 Code Highlights

### 🟢 Pin Configuration

const int led = 9;          // LED connected to pin 9 (PWM)
const int pResistor = A0;   // Photoresistor connected to analog pin A0

## 🟡 Setup
cpp
Copy
Edit
void setup() {
    pinMode(pResistor, INPUT);
    pinMode(led, OUTPUT);
}
🔁 Loop
cpp
Copy
Edit
void loop() {
    brightness = analogRead(pResistor);

    if (brightness == 0) {
        digitalWrite(led, HIGH);
        delay(10);
        digitalWrite(led, LOW);
        delay(10);
    } else {
        digitalWrite(led, HIGH);
        delay(500);
        digitalWrite(led, LOW);
        delay(500);
    }
}
## 📌 Behavior Summary
Light Condition	Brightness Value	LED Behavior
Very Dark	0	Fast Blinking
Bright/Normal	>0	Slow Blinking

## 🚀 Getting Started
Connect the components as per the circuit.

Upload the sketch to your Arduino board using the Arduino IDE.

Observe the LED behavior as you change ambient light.

## 🧩 Optional Enhancements
Use analogWrite() to fade LED based on brightness level.

Add thresholds for more nuanced blink speeds.

Print light levels to Serial Monitor for debugging.

## 📜 License
This project is open-source and free to use for learning and experimentation.

vbnet
Copy
Edit

Let me know if you'd like a Fritzing-style wiring diagram or a version using `analogWrite()` for fading instead of blinking!
```cpp
