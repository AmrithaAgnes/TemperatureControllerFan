#include <stdio.h>
#include <stdlib.h>
#include <wiringPi.h>

// Define the GPIO pins for the temperature sensor and the fan
#define TEMP_SENSOR_PIN 0
#define FAN_PIN 1

// Function to read temperature from the sensor
int readTemperature() {
    // This is a mock function. Replace with actual sensor reading code
    // For example, reading from an ADC connected to a temperature sensor
    return rand() % 100; // Random temperature between 0 and 100 for demonstration
}

// Function to control the fan based on the temperature
void controlFan(int temperature) {
    if (temperature > 30) {
        // Turn on the fan if the temperature is greater than 30 degrees
        digitalWrite(FAN_PIN, HIGH);
    } else {
        // Turn off the fan if the temperature is less than or equal to 30 degrees
        digitalWrite(FAN_PIN, LOW);
    }
}

int main() {
    // Initialize wiringPi and set the GPIO pin modes
    if (wiringPiSetup() == -1) {
        printf("WiringPi setup failed!\n");
        return 1;
    }

    pinMode(TEMP_SENSOR_PIN, INPUT);
    pinMode(FAN_PIN, OUTPUT);

    while (1) {
        int temperature = readTemperature();
        printf("Current Temperature: %d\n", temperature);
        controlFan(temperature);
        delay(1000); // Wait for 1 second before reading the temperature again
    }

    return 0;
}
