int ledRed = 3, ledYellow = 6, ledGreen = 8, comp = 7, time1 = 200;
bool r = false;

void setup() {
  pinMode(ledRed, OUTPUT);
  pinMode(ledYellow, OUTPUT);
  pinMode(ledGreen, OUTPUT);
  pinMode(comp, INPUT);
}

void loop() {
  if(digitalRead(comp) == HIGH){
    r = !r;
  }
  if(r) {
    digitalWrite(ledRed, HIGH);
    digitalWrite(ledYellow, LOW);
    digitalWrite(ledGreen, LOW);
    delay(time1);
    digitalWrite(ledRed, LOW);
    delay(time1);
  }
  else {
    digitalWrite(ledRed, LOW);
    digitalWrite(ledYellow, HIGH);
    digitalWrite(ledGreen, HIGH);
    delay(time1);
  }
}
