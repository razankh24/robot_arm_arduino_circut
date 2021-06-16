#include <Servo.h>

Servo srv1;
Servo srv2;
Servo srv3;
Servo srv4;
Servo srv5;

//set initial position
int i =0;

void setup() {
  srv1.attach(3);
  srv2.attach(5); 
  srv3.attach(6); 
  srv4.attach(9); 
  srv5.attach(10);
}

void loop() {
  for (i = 0; i <90; i++) { 
    srv1.write(i);             
    srv2.write(i); 
    srv3.write(i);
    srv4.write(i);
    srv5.write(i);
    delay(20);                   
  }
  for (i = 90;i > 0; i--) { 
    srv1.write(i);                
    srv2.write(i);     
    srv3.write(i);
    srv4.write(i);
    srv5.write(i);
    delay(20);               
  }

}