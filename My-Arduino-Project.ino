int ledRed = 3;
int ledOrange = 4;
int ledYellow = 6;
int ledGreen = 8;
int red = 11;
int green = 10;
int blue = 9;
int comp = 7;
int time1 = 200;
int time2 = 1;
int time3 = 1000;
int n = 0;

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(ledRed, OUTPUT);
  pinMode(ledOrange, OUTPUT);
  pinMode(ledYellow, OUTPUT);
  pinMode(ledGreen, OUTPUT);
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
    n++;
    if(n > 3) {
      n = 0;
    }
  }
  switch(n) {
    case(0):
      digitalWrite(ledRed, HIGH);
      delay(time1);
      digitalWrite(ledRed, LOW);
      digitalWrite(ledOrange, HIGH);
      delay(time1);
      digitalWrite(ledOrange, LOW);
      digitalWrite(ledYellow, HIGH); 
      delay(time1); 
      digitalWrite(ledYellow, LOW); 
      digitalWrite(ledGreen, HIGH); 
      delay(time1); 
      digitalWrite(ledGreen, LOW); 
      break; 
    case 1: 
      digitalWrite(ledRed, HIGH); 
      digitalWrite(ledOrange, HIGH); 
      digitalWrite(ledYellow, HIGH); 
      digitalWrite(ledGreen, HIGH); 
      delay(time1); 
      digitalWrite(ledRed, LOW); 
      digitalWrite(ledOrange, LOW); 
      digitalWrite(ledYellow, LOW); 
      digitalWrite(ledGreen, LOW); 
      delay(time1);
      break; 
    case 2: 
      digitalWrite(red, HIGH);
      delay(time1); 
      digitalWrite(red, LOW);
      digitalWrite(green, HIGH); 
      delay(time1);
      digitalWrite(green, LOW);
      digitalWrite(blue, HIGH);
      delay(time1);
      digitalWrite(blue, LOW);
      break;
    case 3:
      digitalWrite(red, HIGH);
      digitalWrite(green, HIGH);
      digitalWrite(blue, HIGH);
      delay(time2);
      digitalWrite(blue, LOW);
      digitalWrite(red, LOW);
      digitalWrite(green, LOW);
      delay(time3);
      break;
  }
}
