#include <Arduino.h>
#include <iostream>
using namespace std;

// Define the pin connections
const int trigPin = 9; // Trigger pin of the ultrasonic sensor
const int echoPin = 10; // Echo pin of the ultrasonic sensor

void setup() {
    // Initialize serial communication
    Serial.begin(9600);

    // Define the trigger pin as an output
    pinMode(trigPin, OUTPUT);

    // Define the echo pin as an input
    pinMode(echoPin, INPUT);
}

void loop() {
    // Send a pulse to the trigger pin to start the ranging
    digitalWrite(trigPin, LOW);
    delayMicroseconds(2);
    digitalWrite(trigPin, HIGH);
    delayMicroseconds(10);
    digitalWrite(trigPin, LOW);

    // Measure the duration of the pulse on the echo pin
    long duration = pulseIn(echoPin, HIGH);

    // Calculate distance in centimeters
    // Speed of sound is 343 m/s = 0.0343 cm/microsecond
    // Distance = (duration * speed of sound) / 2 (because sound travels forth and back)
    float distance_cm = (duration * 0.0343) / 2;

    // Print the distance to the serial monitor
    Serial.print("Distance: ");
    Serial.print(distance_cm);
    Serial.println(" cm");

    // Wait for a short delay before taking the next measurement
    delay(1000);
}
