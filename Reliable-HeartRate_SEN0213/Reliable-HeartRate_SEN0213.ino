#include "HeartSpeed.h"

HeartSpeed heartspeed(A1);

const int numReadings = 5;
int ignoredReadings = 0;
const int startingRate = 80;

int readings[numReadings];
int readIndex = 0;
int total = 0;
int average = 0;

void mycb(uint8_t rawData, int value) {
  if (ignoredReadings < numReadings) {
    value = startingRate;
    ignoredReadings++;
  }

  // Subtract the last reading and add the new reading to the total
  total = total - readings[readIndex] + value;

  // Store the new reading in the array
  readings[readIndex] = value;

  // Move to the next position in the array
  readIndex = (readIndex + 1) % numReadings;

  // Calculate the average of the last numReadings readings
  average = total / numReadings;

  // Print the raw HeartRate Value and the average value
  Serial.print("HeartRate Value = ");
  Serial.print(value);
  Serial.print(" | Average HeartRate Value = ");
  Serial.println(average);
}


void setup() {
  Serial.begin(115200);
  heartspeed.setCB(mycb);
  heartspeed.begin();

  // Initialize the readings array and total with an initial value of startingRate (default = 80)
  for (int i = 0; i < numReadings; i++) {
    readings[i] = startingRate;
    total += startingRate;
  }
}

void loop() {
}
