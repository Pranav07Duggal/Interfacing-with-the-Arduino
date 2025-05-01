#include <EEPROM.h>

int address = 0;   // EEPROM address to read/write
int value = 0;     // Value to write to EEPROM

void setup() {
    Serial.begin(9600);  // Start serial communication
}

void loop() {
    // Read input string from the Serial Monitor
    String s = Serial.readString();

    // If the command is to read data from EEPROM
    if (s.startsWith("read")) {
        // Extract address from the input string
        address = s.substring(s.indexOf(' ') + 1).toInt();

        Serial.print("Reading from address ");
        Serial.print(address);
        Serial.print(": ");
        Serial.println(EEPROM.read(address));
    }
    // If the command is to write data to EEPROM
    else if (s.startsWith("write")) {
        // Extract address and value from the input string
        address = s.substring(6, s.indexOf(' ', 6)).toInt();
        value = s.substring(s.indexOf(' ', 6) + 1).toInt();

        Serial.print("Writing value ");
        Serial.print(value);
        Serial.print(" to address ");
        Serial.println(address);

        EEPROM.write(address, value);
    }
}
