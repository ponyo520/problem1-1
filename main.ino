const int ledPin = 13;
int ledState = LOW;

unsigned long previousMillis = 0;
const long interval = 1000;

void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
  Serial.println("--- System Started ---");
}

void loop() {
  unsigned long currentMillis = millis();

  if (currentMillis - previousMillis >= interval) {
    previousMillis = currentMillis;

    if (ledState == LOW) {
      ledState = HIGH;
      Serial.println("LED Status: ON");
    } else {
      ledState = LOW;
      Serial.println("LED Status: OFF");
    }

    digitalWrite(ledPin, ledState);
  }
}
