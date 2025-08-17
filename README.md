Vibration Detection using Arduino

This project demonstrates how to interface a vibration sensor with Arduino to detect vibrations and control an LED. It shows how to use the digital output (DO pin) of the sensor for simple vibration detection.

Components

Arduino Uno

Vibration Sensor (Digital Output)

LED

Resistor (220Ω recommended)

Jumper wires

Breadboard

Features

Detects vibrations using the sensor’s digital output pin.

Displays detection status (YES / NO) on the Serial Monitor.

Turns LED ON when vibration is detected and OFF otherwise.

How It Works

The vibration sensor outputs a digital HIGH or LOW signal depending on vibration activity.

Arduino reads the signal using digitalRead().

If the sensor outputs LOW, it indicates vibration is detected.

The LED turns ON when vibration is detected, and OFF otherwise.

Detection status is printed to the Serial Monitor every 500 ms.

Wiring diagram

Sensor DO pin → Arduino Pin 2

LED → Arduino Pin 8 (with resistor)

VCC & GND → Arduino 5V & GND

![SW 420 circuit diagram](SW%20420%Sensor.png)

Code

The Arduino sketch continuously checks the sensor’s digital output and toggles the LED based on vibration detection.
