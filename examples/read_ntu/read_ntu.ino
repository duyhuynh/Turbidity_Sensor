#include "DTH_Turbidity.h"

#define TURBIDITY_SENSOR_PIN A0

DTH_Turbidity turbSensor(TURBIDITY_SENSOR_PIN);
float ntu_val = 0;
float volt = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  Serial.println("Test Turbidity sensor by Duy Huynh");  
}

void loop() { 
  // put your main code here, to run repeatedly:
  ntu_val = turbSensor.readTurbidity();
  Serial.print("Nephelometric Turbidity Units: ");
  Serial.println(ntu_val);
  volt = turbSensor.getVoltage();
  Serial.print("Turbidity voltage: ");
  Serial.println(volt);
  delay(2000);
}
