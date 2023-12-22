int red = 11;
int green = 10;
int blue = 9;
int comp = 7;
int time1 = 5;
int i = 0;
bool r = false;

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(blue, OUTPUT);
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
    digitalWrite(red, HIGH);
    digitalWrite(blue, LOW);
    for(i=0; i <= 255; i++) {
      analogWrite(green, i);
      delay(time1);
    }
    digitalWrite(green, HIGH);
    for(i=255; i >= 0; i--) {
      analogWrite(red, i);
      delay(time1);
    }
    digitalWrite(red, LOW);
    for(i=0; i <= 255; i++) {
      analogWrite(blue, i);
      delay(time1);
    }
    digitalWrite(green, HIGH);
    for(i=255; i >= 0; i--) {
      analogWrite(green, i);
      delay(time1);
    }
    digitalWrite(green, LOW);
    for(i=0; i <= 255; i++) {
      analogWrite(red, i);
      delay(time1);
    }
    digitalWrite(red, HIGH);
    for(i=255; i >= 0; i--) {
      analogWrite(blue, i);
      delay(time1);
    }
  } 
}
