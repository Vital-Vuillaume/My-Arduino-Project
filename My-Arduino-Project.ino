int ledRed = 3, ledYellow = 6, ledGreen = 8, comp = 7, time1 = 500;

void setup() {
  pinMode(ledRed, OUTPUT);
  pinMode(ledYellow, OUTPUT);
  pinMode(ledGreen, OUTPUT);
  pinMode(comp, INPUT);
}

void loop() {
  if(digitalRead(comp) == HIGH) {
    digitalWrite(ledRed, HIGH);
    digitalWrite(ledYellow, LOW);
    digitalWrite(ledGreen, LOW);
    delay(time1);
    digitalWrite(ledYellow, HIGH);
    delay(time1);
    digitalWrite(ledRed, LOW);
    digitalWrite(ledYellow, LOW);
    digitalWrite(ledGreen, HIGH);
    delay(time1*4);
    digitalWrite(ledYellow, HIGH);
    digitalWrite(ledGreen, LOW);
    delay(time1);
    digitalWrite(ledRed, HIGH);
    digitalWrite(ledYellow, LOW);
    delay(time1*4);
  }
}
