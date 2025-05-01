// ----------------------------
// Pin Configuration
// ----------------------------

const int buttonPin_1 = 8;   // Pushbutton 1 connected to digital pin 8
const int buttonPin_2 = 9;   // Pushbutton 2 connected to digital pin 9
const int ledPin      = 10;  // LED connected to digital pin 10

// ----------------------------
// Variable Declarations
// ----------------------------

int buttonState_01 = 0;      // Stores the state of button 1 (HIGH/LOW)
int buttonState_02 = 0;      // Stores the state of button 2 (HIGH/LOW)

// ----------------------------
// Setup Function
// Runs once when the microcontroller starts
// ----------------------------

void setup() {
    // Set the LED pin as an OUTPUT
    pinMode(ledPin, OUTPUT);

    // Set the pushbutton pins as INPUT
    pinMode(buttonPin_1, INPUT);
    pinMode(buttonPin_2, INPUT);
}

// ----------------------------
// Main Loop
// Continuously checks button states and controls the LED
// ----------------------------

void loop() {
    // Read the current state of both pushbuttons
    buttonState_01 = digitalRead(buttonPin_1);
    buttonState_02 = digitalRead(buttonPin_2);

    // If BOTH buttons are NOT pressed (assumes LOW when pressed)
    if (buttonState_01 == LOW && buttonState_02 == LOW) {
        // Turn the LED ON
        digitalWrite(ledPin, HIGH);
    } else {
        // Otherwise, turn the LED OFF
        digitalWrite(ledPin, LOW);
    }
}
