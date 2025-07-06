int sensorPin = A0;     
int relayPin = 8;       
int threshold = 400;    // Moisture threshold

void setup() {
  pinMode(relayPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int moistureValue = analogRead(sensorPin);
  Serial.print("Moisture Level: ");
  Serial.println(moistureValue);

  if (moistureValue < threshold) {
    digitalWrite(relayPin, HIGH); // Turn ON pump
    Serial.println("Soil is dry – Pump ON");
  } else {
    digitalWrite(relayPin, LOW);  // Turn OFF pump
    Serial.println("Soil is moist – Pump OFF");
  }

  delay(1000);
}
