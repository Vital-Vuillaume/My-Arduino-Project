int ledRed = 3;
int ledOrange = 4;
int ledYellow = 6;
int ledGreen = 8;
int comp = 7;
int blink = 100;
int light = 1000;
long time1 = 0;

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(ledRed, OUTPUT);
  pinMode(ledOrange, OUTPUT);
  pinMode(ledYellow, OUTPUT);
  pinMode(ledGreen, OUTPUT);
  pinMode(comp, INPUT);
}

void loop() {
  digitalWrite(ledRed, HIGH);
  digitalWrite(ledYellow, LOW);
  digitalWrite(ledGreen, LOW);
  delay(blink);
  digitalWrite(ledRed, LOW);
  digitalWrite(ledYellow, HIGH);
  digitalWrite(ledGreen, LOW);
  delay(blink);
  digitalWrite(ledRed, LOW);
  digitalWrite(ledYellow, LOW);
  digitalWrite(ledGreen, HIGH);
  delay(blink);
  if(digitalRead(comp) == HIGH) {
    while(digitalRead(comp) == HIGH) {
      digitalWrite(LED_BUILTIN, HIGH);
    }
    digitalWrite(LED_BUILTIN, LOW);
    time1 = millis();
    digitalWrite(ledOrange, HIGH);
  }
  if(millis() > time1 + light) {
    digitalWrite(ledOrange, LOW);
  }
}
