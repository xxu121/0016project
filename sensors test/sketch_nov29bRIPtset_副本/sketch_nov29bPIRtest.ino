/// Define the pin where the PIR sensor is connected
const int pirSensorPin = 10;
// The built-in LED on most Arduino boards is on pin 13
const int ledPin = 13;

void setup() {
  // Start serial communication at 9600 baud rate
  Serial.begin(9600);
  
  // Declare the PIR sensor pin as an INPUT
  pinMode(pirSensorPin, INPUT);
  
  // Declare the LED pin as an OUTPUT
  pinMode(ledPin, OUTPUT);
  
  Serial.println("PIR sensor test initialized.");
  Serial.println("Waiting for PIR to stabilize.");
  // Give the sensor some time to calibrate
  delay(2000);
  Serial.println("PIR sensor ready.");
}

void loop() {
  // Read the value from the PIR sensor
  int sensorValue = digitalRead(pirSensorPin);

  // If motion is detected (sensor pin goes HIGH), turn on the LED
  if (sensorValue == HIGH) {
    digitalWrite(ledPin, HIGH); // Turn on the LED
    Serial.println("Motion detected!");
  } else {
    digitalWrite(ledPin, LOW); // Turn off the LED
    // If you want to print a message when no motion is detected, uncomment the next line:
    // Serial.println("No motion.");
  }


  delay(1000);
}
