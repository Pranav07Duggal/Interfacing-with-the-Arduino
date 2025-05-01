# 📝 EEPROM Read/Write via Serial (Arduino)

This Arduino sketch allows you to **read from and write to EEPROM** using simple commands entered in the **Serial Monitor**.

---

## 🧠 Features

- Read data from a specified EEPROM address.
- Write data to a specified EEPROM address.
- Interact with EEPROM using simple `read` and `write` commands over Serial.
- Helpful for debugging or persistent storage of values like settings or scores.

---

## 🧰 Hardware Required

- 1 x Arduino Board (UNO, Nano, etc.)
- USB cable for Serial Monitor access

---

## 🔌 EEPROM Basics

- EEPROM memory allows storing **non-volatile** data (it remains even after power off).
- On most Arduino boards, EEPROM has **1024 bytes** (0–1023 addressable).

---

## 💻 Serial Commands

Use the **Serial Monitor** (set to 9600 baud rate) to send commands in the following format:

### ✅ Read from EEPROM

## 🚀 How to Use
Upload the code to your Arduino.

Open the Serial Monitor (Ctrl+Shift+M).

Set the baud rate to 9600.

Send read or write commands as described above.

## 📜 License
This project is open-source and available for educational and non-commercial use.
