#include <Servo.h>
Servo myservo;

int potpin = A0;
int val;


void setup() {
   myservo.attach(9);
  Serial.begin(9600);
}

void loop() {
     val = analogRead(potpin);
  int sensorValue = analogRead(A0);
  val = map(val, 0, 1023, 0, 180);    
  myservo.write(val);
  Serial.print(val);
  Serial.print(" ");
  Serial.print(sensorValue);
  Serial.println(" ");
  delay(15);            
}
