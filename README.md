# 0016project
The project uses ultrasonic range finders and PIR (passive infrared) sensors to provide a security system for private homes. The main features are listed below:

**Sensor operation:**


The ultrasound range finder is given the task of identifying the presence or absence of any object within a range of 30 cm.
Meanwhile, the PIR sensor is responsible for motion detection and displays the results in real time on a serial monitor.
Both sensors are set to update their readings every 10 seconds.


**Alarm Trigger Criteria:**


The system is certified to activate an alarm if both of the following conditions are met: the ultrasonic sensor detects an object at a distance of more than 30cm, and the infrared sensor registers three movements in one minute.
Upon activation, the system sends out a buzzer audible signal and illuminates a warning-coloured LED strip to deter potential intruders.


## TESTING EVERY SINGLE SENSOR IS USEABLE

To ensure that each sensor is operational and free from any functional defects, it's advisable to run a diagnostic test using specific testing code. This process will also verify that all sensors are properly connected to the Arduino board, with no issues related to connectivity. Code for testing each sensor from [Sensors Test Folder](sensors%20test/)

![image](https://github.com/xxu121/0016project/assets/146341729/fdcc0ee5-af4b-4b15-aa42-16862c053166)

![image](https://github.com/xxu121/0016project/assets/146341729/ebcf7ca0-1e7b-4f1a-af93-4c16fc0c06f5)

Ultra sonic range finder --> pin2(trig)&3(echo)

LED strips --> pin 6


servo --> pin9 


PIR sensor --> pin 10


Buzzer --> pin11


Using a breadboard for connecting sensors is a simple and effective way to prototype electronics projects. When connecting sensors: Attach the sensor's power (VCC) and ground (GND) pins to the breadboard's power rails. Then connect the sensor's data pin(s) to the Arduino Uno (in this project) using jumper wires.

## Final code for the project
[code for the security system](/code%20for%20the%20project%20final)
