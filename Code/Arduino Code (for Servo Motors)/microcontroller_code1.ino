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
  
}

void loop() {

// Initial Positions for the legs
S1.write(100);      
S2.write(70);
S3.write(100);
S4.write(70);
delay(1000);



 for (pos2 = 70; pos2 >= 60; pos2 -= 1) {         //Leg2 goes back 
    S2.write(pos2);              
    delay(10);                       
  }
  for (pos3 = 100; pos3 <= 110; pos3 += 1) {      //Leg 3 moves forward 
    S3.write(pos3);              
    delay(10);                       
  }
  for (pos1 = 100; pos1 >= 90; pos1 -= 1) {       //Leg 1 goes back 
    S1.write(pos1);              
    delay(10);                       
  }

  for (pos4 = 70; pos4 <= 80; pos4 += 1) {        //Leg4 moves forward 
    S4.write(pos4);              
    delay(10);                       
  }



  for (pos2 = 60; pos2 <= 70; pos2 += 1) { 
    S2.write(pos2);              
    delay(10);                       
  }
  
  for (pos3 = 110; pos3>= 100; pos3 -= 1) { 
    S3.write(pos3);              
    delay(10);                       
  }
  
  for (pos1 = 90; pos1 <= 100; pos1 += 1) { 
    S1.write(pos1);              
    delay(10);                       
  }
  for (pos4 = 80; pos4 >= 70; pos4 -= 1) { 
    S4.write(pos4);              
    delay(10);                       
  }



  
  for (pos2 = 70; pos2 <= 80; pos2 += 1) { 
    S2.write(pos2);              
    delay(10);                       
  }

  for (pos3 = 100; pos3 >= 90; pos3 -= 1) { 
    S3.write(pos3);              
    delay(10);                       
  }
  for (pos1 = 100; pos1 <= 110; pos1 += 1) { 
    S1.write(pos1);              
    delay(10);                       
  }

  for (pos4 = 70; pos4 >=60; pos4 -=1) { 
    S4.write(pos4);              
    delay(10);                       
  }

   


 for (pos2 = 80; pos2 >= 70; pos2 -= 1) { 
    S2.write(pos2);              
    delay(10);                       
  }
  for (pos3 = 90; pos3 <= 100; pos3 += 1) { 
    S3.write(pos3);              
    delay(10);                       
  }
  for (pos1 = 110; pos1 >=100; pos1 -=1) { 
    S1.write(pos1);              
    delay(10);                       
  }
  for (pos4 = 60; pos4 <= 70; pos4 += 1) { 
    S4.write(pos4);              
    delay(10);                       
  }

  

}
