#define LED 7

char data;

void setup() {
  pinMode(LED, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  if (Serial.available()) {
    data = Serial.read();

    if (data == '1') {
      digitalWrite(LED, HIGH);
      Serial.println("LED ON");
    }
    else if (data == '0') {
      digitalWrite(LED, LOW);
      Serial.println("LED OFF");
    }
  }
}
