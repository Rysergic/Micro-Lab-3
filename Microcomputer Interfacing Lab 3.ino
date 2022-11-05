#include <Servo.h>

Servo myservo;  

int val = 0;   
int b1 = 4;
int b2 = 5;
int b3 = 6;
int b4 = 7;

jkljkljkljkljl
void gotoZero(){
   myservo.write(val = 0);
};

void gotoNinety(){
   myservo.write(val = 90);
};

void gotoOneEighty(){
   myservo.write(val = 180);
};


struct button{
  bool button1; 
  bool button2; 
  bool button3;
  bool button4;
};

struct button checkButton(){
  struct button but1 = {false, false , false, false};

    if (digitalRead(b1) == HIGH) {
    but1.button1 = true;

  };


  if (digitalRead(b2) == HIGH) {
    but1.button2 = true;

  };
 if (digitalRead(b3) == HIGH) {
    but1.button3 = true;

  };

   if (digitalRead(b4) == HIGH) {
    but1.button4 = true;

  };
  return but1;
};

void setup() {
pinMode(b1, INPUT);
pinMode(b2, INPUT);
pinMode(b3, INPUT);
pinMode(b4, INPUT);

myservo.attach(3);  // attaches the servo on pin 3 to the servo object

}

void loop() {

button buttonState = checkButton();

if (buttonState.button2 == true){
gotoZero();
};

if (buttonState.button3 == true){
gotoNinety();
};

if (buttonState.button4 == true){
gotoOneEighty();
};
}