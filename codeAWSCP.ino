#include <Servo.h>  

Servo srv1;
Servo srv2;
Servo srv3;
Servo srv4;
Servo srv5;


int potpin = 0;  
int potpin1= 1;
int potpin2= 2;
int potpin3= 3;
int potpin4= 4;

int val;    

void setup() {
  srv1.attach(3); 
  srv2.attach(5);
  srv3.attach(6);
  srv4.attach(9);
  srv5.attach(10);

}

void loop() {
 val = analogRead(potpin);
 val = map(val, 0, 1023, 0, 180); 
  srv1.write(val);
  delay(15);
  
  val= analogRead(potpin1);
  val = map(val, 0, 1023, 0, 180);
  srv2.write(val);
  delay(15);  
  
    val= analogRead(potpin2);
  val = map(val, 0, 1023, 0, 180);
  srv3.write(val);
  delay(15);
  
    val= analogRead(potpin3);
  val = map(val, 0, 1023, 0, 180);
  srv4.write(val);
  delay(15);
  
    val= analogRead(potpin4);
  val = map(val, 0, 1023, 0, 180);
  srv5.write(val);
  delay(15);
}
