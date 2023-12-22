int ledRed = 3;
int ledOrange = 4;
int ledYellow = 6;
int ledGreen = 8;
int red = 11;
int green = 10;
int comp = 7;
int time1 = 500;
int time2 = 2000;

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(ledRed, OUTPUT);
  pinMode(ledOrange, OUTPUT);
  pinMode(ledYellow, OUTPUT);
  pinMode(ledGreen, OUTPUT);
  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(comp, INPUT);
}

void loop() {
    digitalWrite(ledRed, LOW);
    digitalWrite(ledOrange, HIGH);
    digitalWrite(ledYellow, LOW);
    digitalWrite(ledGreen, HIGH);
    digitalWrite(red, HIGH);
    digitalWrite(green, LOW);
    if(digitalRead(comp) == HIGH) {
      while(digitalRead(comp) == HIGH) {
        digitalWrite(LED_BUILTIN, HIGH);
    }
    digitalWrite(LED_BUILTIN, LOW);
    delay(time1);
    digitalWrite(ledYellow, HIGH);
    digitalWrite(ledGreen, LOW);
    delay(time1);
    digitalWrite(ledRed, HIGH);
    digitalWrite(ledYellow, LOW);
    delay(time1);
    digitalWrite(red, LOW);
    digitalWrite(green, HIGH);
    delay(time1);
    digitalWrite(red, HIGH);
    digitalWrite(green, LOW);
    delay(time1);
    digitalWrite(ledYellow, HIGH);
    delay(time1);
  }
}
