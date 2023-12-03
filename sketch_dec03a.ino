const int led1 = 3;
const int time = 2000;

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(led1, OUTPUT);
}

void loop() {
  digitalWrite(LED_BUILTIN, HIGH);
  digitalWrite(led1, HIGH);
  delay(time);
  digitalWrite(LED_BUILTIN, LOW);
  digitalWrite(led1, LOW);
  delay(time * 10);
}
