#include <Servo.h>

Servo S1;
Servo S2;
Servo S3;
Servo S4;
  
int pos1;
int pos2;
int pos3;
int pos4;  
void setup() {
  S1.attach(9);     //Leg 1
  S2.attach(10);    //Leg 2 
  S3.attach(11);    //Leg 3
  S4.attach(12);    //Leg 4
  pos1 = 135+15;
  S1.write(pos1);S3.write(pos1);
  pos2 = 180-70;
  delay(1000);
  S2.write(pos2);S4.write(pos2);
  delay(1000);
}

void loop() {
  S1.write(135+15-40);S3.write(70+15-40);
  delay(500);
  S2.write(180-70+40);S4.write(180-50+40);
  delay(500);
  S1.write(50+15-40);S3.write(135-15);
  delay(500);
  S2.write(180-135+40);S4.write(180-70+40);
  delay(500);
  S1.write(70+15-40);S3.write(50+15-40);
  delay(500);
  S2.write(180-50+40);S4.write(180-135+40);
  delay(500);
  
}
