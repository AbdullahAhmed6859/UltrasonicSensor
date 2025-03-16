/*
  BasicDistanceMeasurement

  Demonstrates the basic distance measurement capabilities of the
  UltrasonicSensor library. This example shows how to create an UltrasonicSensor
  object and use the getDistance function.

  Circuit:
  - Ultrasonic sensor connected to pins as specified
  - Adjust the pin numbers to match your setup

  Created by Your Abdullah Ahmed, 16 March 2025
  Released into the public domain.
*/

#include <UltrasonicSensor.h>

// Pin definitions - adjust to match your setup
const int TRIG_PIN = 7;  // Trigger pin
const int ECHO_PIN = 8;  // Echo pin

// Create an UltrasonicSensor instance
UltrasonicSensor mySensor(TRIG_PIN, ECHO_PIN);

void setup() {
  Serial.begin(9600);
  Serial.println("Ultrasonic Sensor Basic Distance Measurement Example");

  // Initialize the sensor
  mySensor.begin();

  // Wait a moment before starting
  delay(2000);
}

void loop() {
  // Get the distance measurement
  float distance = mySensor.getDistanceCm();

  // Print the distance to the Serial Monitor
  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");

  // Wait a moment before the next measurement
  delay(1000);
}
