/*
  ArrayOfSensors

  Demonstrates how to use multiple ultrasonic sensors with the
  UltrasonicSensor library. This example shows how to create an array
  of UltrasonicSensor objects and read distances from all sensors.

  Circuit:
  - Multiple ultrasonic sensors connected to different pins
  - Adjust the pin numbers to match your setup
  - Each sensor needs a trigger and echo pin

  Created by Abdullah Ahmed, 20 March 2025
  Released into the public domain.
*/

#include <UltrasonicSensor.h>

const int numSensors = 3;
UltrasonicSensor sensors[numSensors] = {
  {12, 11},  // Sensor 1: Trigger = 14, Echo = 13
  {14, 13},  // Sensor 2: Trigger = 18, Echo = 17
  {17, 15}     // Sensor 3: Trigger = 6, Echo = 5
};

void setup() {
  Serial.begin(9600);
  Serial.println("Ultrasonic Sensor Basic Distance Measurement Example");

  // Initialize the sensor
  for (int i = 0; i < numSensors; i++) sensors[i].begin();

  delay(1000);
}

void loop() {
  for (int i = 0; i < numSensors; i++) {
    Serial.print("Distance");
    Serial.print(i + 1);
    Serial.print(": ");
    Serial.print(sensors[i].getDistanceCm());
    Serial.print(" cm");
  }

  Serial.println();
  delay(200);
}
