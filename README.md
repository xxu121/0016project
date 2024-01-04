# 0016project
This Arduino code is designed for a motion detection and warning system. It uses a PIR sensor for motion detection, an ultrasonic sensor for distance measurement, a servo motor for physical response, a buzzer for audible alerts, and a NeoPixel LED strip for visual signal display. The system is ideal for security applications or interactive projects.

## Hardware Requirements
Arduino Board
PIR (Passive Infrared) Sensor
Ultrasonic Sensor (HC-SR04)
Servo Motor
Piezo Buzzer
Adafruit NeoPixel LED Strip
Respective Connecting Wires

## Libraries Required
'Servo.h' - For controlling the servo motor.
'Adafruit_NeoPixel.h' - For operating the NeoPixel LED strip.


**Sensor operation:**


The ultrasound range finder is given the task of identifying the presence or absence of any object within a range of 30 cm.
Meanwhile, the PIR sensor is responsible for motion detection and displays the results in real time on a serial monitor.
Both sensors are set to update their readings every 10 seconds.


**Alarm Trigger Criteria:**


The system is certified to activate an alarm if both of the following conditions are met: the ultrasonic sensor detects an object at a distance of more than 30cm, and the infrared sensor registers three movements in one minute.
Upon activation, the system sends out a buzzer audible signal and illuminates a warning-coloured LED strip to deter potential intruders.


## TESTING EVERY SINGLE SENSOR IS USEABLE

To ensure that each sensor is operational and free from any functional defects, it's advisable to run a diagnostic test using specific testing code. This process will also verify that all sensors are properly connected to the Arduino board, with no issues related to connectivity. Code for testing each sensor from [Sensors Test Folder](sensors%20test/)

## Pin Configuration
PIR Sensor: Pin 10
Buzzer: Pin 11
Servo Motor: Pin 9
Ultrasonic Sensor: Trigger Pin - 2, Echo Pin - 3
NeoPixel LED Strip: Pin 6

Using a breadboard for connecting sensors is a simple and effective way to prototype electronics projects. When connecting sensors: Attach the sensor's power (VCC) and ground (GND) pins to the breadboard's power rails. Then connect the sensor's data pin(s) to the Arduino Uno (in this project) using jumper wires.

![image](https://github.com/xxu121/0016project/assets/146341729/ebcf7ca0-1e7b-4f1a-af93-4c16fc0c06f5)

## Setup
Initialize the sensors and components in the 'setup()' function.
Set the baud rate for serial communication to 9600.
Attach the servo to its designated pin and set its initial position.
Initialize the NeoPixel strip.

## Main Loop
Checks for motion using the PIR sensor.
If motion is detected and the condition is met, it measures the distance using the ultrasonic sensor.
If the measured distance is less than 30 cm and the motion is detected more than three times, it activates the warning system.
The warning system includes moving the servo motor, producing a siren sound with the buzzer, and flashing the NeoPixel strip in a red and blue pattern.
After the warning sequence, the system resets the motion counter and returns the servo to its initial position.

## Functions
void 'setStripColor(uint8_t r, uint8_t g, uint8_t b)': Sets the color of the NeoPixel LED strip.
void 'clearStrip()': Turns off all LEDs on the strip.

![image](https://github.com/xxu121/0016project/assets/146341729/fdcc0ee5-af4b-4b15-aa42-16862c053166)



## Final code for the project
[code for the security system](/code%20for%20the%20project%20final)
