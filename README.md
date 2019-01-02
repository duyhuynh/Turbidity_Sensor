# Arduino DTH_Turbidity_Sensor library
DTH_Turbidity_Sensor is a library that provides functions to measure turbidity of water for Arduino.
This library uses turbidity sensor SEN0189 to detect water quality.
It uses light to detect suspended particles in water by measuring the light transmittance and scattering rate, which changes with the amount of total suspended solids (TSS) in water.
As the TTS increases, the liquid turbidity level increases.
## Functionality
The functions available in the library include
```c
begin(sensorPin)	// start turbidiry sensor with a pin number.
readTurbidity()		// read Nephelometric Turbidity Units of water (NTU).
getVoltage()		// read the voltage from the turbidity sensor.
setSampe(sample)	// Set the sample number to read the voltage from the turbidity sensor.
```
## Examples
The DTH_Turbidity_Sensor directory contains the DTH_Turbidity_Sensor library and a example sketche
illustrating how to use the library:
- `read_ntu.ino`- example of using turbidity library.  
