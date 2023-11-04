int flameSensorPin = 7; // Replace with the GPIO pin you connected the flame sensor OUT pin to.
void setup() {
  Serial.begin(115200);
  pinMode(flameSensorPin, INPUT);
}
void loop() {
  int flameDetected = digitalRead(flameSensorPin);
  if (flameDetected == 1) {
    Serial.println("Flame detected!");
  } else {
    Serial.println("No flame detected.");
  }
  delay(1000); // You can adjust the delay to control how often the sensor is checked.
}
