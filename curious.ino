#include <Servo.h>
Servo servoMotor;
int IN3 = 5;
int IN4 = 6; 
int ENB = 3;
int servoOn = 13; 
 
void setup() {
  Serial.begin(9600);
  servoMotor.attach(9);
  pinMode (ENB, OUTPUT); 
  pinMode (IN3, OUTPUT);
  pinMode (IN4, OUTPUT);
  pinMode (servoOn, OUTPUT);
}
 
void loop() {
  servoMotor.write(0);
  delay(100);
  digitalWrite (IN3, HIGH);
  digitalWrite (IN4, LOW);
  analogWrite(ENB,55);
  delay(200);
  analogWrite(ENB,105);
  delay(200);
  analogWrite(ENB,255);
  delay(5000);
  analogWrite(ENB,0);
  delay(500);
  servoMotor.write(90);
  delay(100);
  digitalWrite (IN3, LOW);
  digitalWrite (IN4, HIGH);
  analogWrite(ENB,55);
  delay(200);
  analogWrite(ENB,105);
  delay(200);
  analogWrite(ENB,255);
  delay(5000);
  analogWrite(ENB,0);
  delay(500);
  servoMotor.write(180);
  delay(100);
  digitalWrite (IN3, HIGH);
  digitalWrite (IN4, LOW);
  analogWrite(ENB,55);
  delay(200);
  analogWrite(ENB,105);
  delay(200);
  analogWrite(ENB,255);
  delay(5000);
  analogWrite(ENB,0);
  delay(500);
    servoMotor.write(90);
  delay(100);
  digitalWrite (IN3, LOW);
  digitalWrite (IN4, HIGH);
  analogWrite(ENB,55);
  delay(200);
  analogWrite(ENB,105);
  delay(200);
  analogWrite(ENB,255);
  delay(5000);
  analogWrite(ENB,0);
  delay(500);
}
