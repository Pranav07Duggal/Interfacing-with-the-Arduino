/*
  LED Blink Based on Photoresistor Input

  This sketch reads the value from a photoresistor (light sensor) connected to analog pin A0,
  and blinks an LED connected to PWM pin 9 based on ambient light levels.

  If the photoresistor reads 0 (very dark), the LED blinks rapidly (short delay).
  Otherwise, it blinks slowly (longer delay).

  Note: Although originally based on the Fade example, this sketch does not use analogWrite().
*/

const int led = 9;          // PWM pin where LED is connected
const int pResistor = A0;   // Analog pin where photoresistor is connected

int brightness = 0;         // Variable to store light level from photoresistor

void setup() {
    // Initialize pin modes
    pinMode(pResistor, INPUT);   // Set photoresistor pin as INPUT
    pinMode(led, OUTPUT);        // Set LED pin as OUTPUT

    // Optional: enable serial monitor for debugging
    // Serial.begin(9600);
}

void loop() {
    // Read the analog value from the photoresistor (0–1023)
    brightness = analogRead(pResistor);

    // Optional: print brightness value to serial monitor for debugging
    // Serial.println(brightness);

    // If the sensor reads complete darkness (brightness == 0)
    if (brightness == 0) {
        // Blink LED quickly
        digitalWrite(led, HIGH);
        delay(10);
        digitalWrite(led, LOW);
        delay(10);
    } else {
        // Otherwise, blink LED more slowly
        digitalWrite(led, HIGH);
        delay(500);
        digitalWrite(led, LOW);
        delay(500);
    }

    // Note: You can adjust thresholds or add analogWrite() for fading effect
}
