//Code to Glow LED When vibration Detected (Using DO pin):

const int vibrationSensorDigital = 2;  // DO pin of sensor
const int ledPin = 8;           // LED connected to pin 8

void setup() {
  pinMode(vibrationSensorDigital, INPUT);
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int vibrationDetected = digitalRead(vibrationSensorDigital);

  Serial.print("vibration Detected: ");
  Serial.println(vibrationDetected == LOW ? "YES" : "NO");

  if (vibrationDetected == LOW) { // LOW means vibration detected
    digitalWrite(ledPin, HIGH);  // Turn on LED
  } else {
    digitalWrite(ledPin, LOW);   // Turn off LED
  }

  delay(500);
}
