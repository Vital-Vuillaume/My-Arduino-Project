int Red = 11;
int Green = 10;
int Blue = 9;
int comp = 7;
int time1 = 500;
bool r = false;

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(Red, OUTPUT);
  pinMode(Green, OUTPUT);
  pinMode(Blue, OUTPUT);
  pinMode(comp, INPUT);
}

void loop() {
  if(digitalRead(comp) == HIGH) {
    while(digitalRead(comp) == HIGH) {
      digitalWrite(LED_BUILTIN, HIGH);
    }
    digitalWrite(LED_BUILTIN, LOW);
    r = !r;
  }
  if(r) {
    digitalWrite(Red, HIGH);
    delay(time1);  
    digitalWrite(Green, HIGH);
    delay(time1);
    digitalWrite(Red, LOW);
    delay(time1);
    digitalWrite(Blue, HIGH);
    delay(time1);  
    digitalWrite(Green, LOW);
    delay(time1);
    digitalWrite(Red, HIGH);
    delay(time1);
    digitalWrite(Blue, LOW);
  } else {
    digitalWrite(Red, LOW);
    digitalWrite(Green, LOW);
    digitalWrite(Blue, LOW);
  }
}
