#include <Servo.h>
Servo myServo;
int stateIR;

int trigPin = 5;
int echoPin = 4;
int irPin = 8;
int servoPin = 9;
int ledPin = 3;


void setup() {
Serial.begin(115200);
  // put your setup code here, to run once:
myServo.attach(servoPin);
pinMode(irPin, INPUT);
myServo.write(0);
pinMode(ledPin, OUTPUT);
pinMode(trigPin, OUTPUT);
pinMode(echoPin, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  // reading signals from the ultrasonic sensor:
//clearing the trigger pin

digitalWrite(trigPin, LOW);
delayMicroseconds(2);

// Sending a 10us trigger pulse
digitalWrite(trigPin, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin, LOW);

// Reading pulse duration
long duration = pulseIn(echoPin, HIGH);

// Convert to distance in cm
float distance = duration * 0.0343 / 2;

Serial.print("Distance: ");
Serial.println(distance);


stateIR = digitalRead(irPin);

if (stateIR == HIGH && distance > 0 && distance < 100) {
  myServo.write(180);
  digitalWrite(ledPin, LOW);
  delay(50);
}else{
  myServo.write(0);
  digitalWrite(ledPin, HIGH);
}
delay(10);
}
