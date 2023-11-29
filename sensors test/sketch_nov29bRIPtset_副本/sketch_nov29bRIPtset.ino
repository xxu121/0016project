// Define the pin where the RIP sensor is connected
const int ripSensorPin = 10;

void setup() {
  // Start serial communication at 9600 baud rate
  Serial.begin(9600);
}

void loop() {
  // Read the value from the RIP sensor
  int sensorValue = analogRead(ripSensorPin);

  // Print the value to the Serial Monitor
  Serial.println(sensorValue);

  // Wait for a short time before reading again
  delay(1000); // Delay in milliseconds (100ms = 0.1s)
}
