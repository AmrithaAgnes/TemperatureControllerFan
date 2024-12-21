# TemperatureControllerFan
Explanation:
Initialization:

wiringPiSetup() initializes the WiringPi library, which is used for GPIO control on Raspberry Pi.
pinMode(TEMP_SENSOR_PIN, INPUT) sets the temperature sensor pin as an input.
pinMode(FAN_PIN, OUTPUT) sets the fan control pin as an output.
Reading Temperature:

readTemperature() function is a placeholder for reading the actual temperature from a sensor. It returns a random temperature between 0 and 100 for demonstration purposes. Replace this with actual sensor reading code.
Controlling the Fan:

controlFan(int temperature) function turns on the fan if the temperature is greater than 30 degrees and turns it off otherwise.
Main Loop:

In the main loop, the temperature is read every second, printed to the console, and the fan is controlled based on the current temperature.
Note:
This example uses the WiringPi library for GPIO control, which is specific to the Raspberry Pi. If you are using a different platform, you will need to use the appropriate library or API for GPIO control.
Replace the readTemperature() function with actual code to read data from your temperature sensor. This might involve reading from an ADC or using a specific sensor library.
This example should help you get started with implementing a temperature-controlled fan in C. Adjust the code as needed for your specific hardware and requirements.
