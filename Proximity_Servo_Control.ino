#include <Servo.h>
Servo myServo;
int state;

int irPin = 8;
int servoPin = 9;
int ledPin = 3;


void setup() {
  // put your setup code here, to run once:
myServo.attach(servoPin);
pinMode(irPin, INPUT);
myServo.write(0);
pinMode(ledPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
state = digitalRead(irPin);
if (state == HIGH) {
  myServo.write(180);
  digitalWrite(ledPin, LOW);
  delay(50);
}else{
  myServo.write(0);
  digitalWrite(ledPin, HIGH);
}
delay(10);
}
