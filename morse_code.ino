const int ledPin = 11;
const int switchPin = 6;
int val;
int dotDelay = 250;
int dashDelay = dotDelay * 3;
int wordDelay = dotDelay * 7;

void dot(int x) {
  for(int i = 0; i < x; i++) {
    digitalWrite(ledPin,HIGH);
    delay(dotDelay);
    digitalWrite(ledPin,LOW);
    delay(dotDelay);
  }
  delay(dotDelay);
  delay(dotDelay);
}
  
void dash(int x) {
  for(int i = 0; i < x; i++) {
    digitalWrite(ledPin,HIGH);
    delay(dotDelay);
    digitalWrite(ledPin,LOW);
    delay(dotDelay);
  }
  delay(dotDelay);
  delay(dotDelay);
}

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin,OUTPUT);
  pinMode(switchPin,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead(switchPin) == HIGH) { 
    n();
    o();
    a();
    h();  
    
  }
  else {
    digitalWrite(ledPin,LOW);
  }
}

void n() {
  dash(1);
  dot(1);
  delay(dashDelay);
}

void o() {
  dash(3); //0
  delay(dashDelay);
}

void a() {
  dot(1);//a
  dash(1);
  delay(dashDelay);
}

void h() {
  dot(4); //h
  delay(dashDelay);
}
