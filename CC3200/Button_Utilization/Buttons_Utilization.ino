/*********
 By Alexandros Panagiotakopoulos
*********/
/*
 Based on the original work by DojoDave <http://www.0j0.org>, which is also the File>Examples>Digital>Button, example
 that was already provided
 modified 30 Aug 2011
 by Tom Igoe
 modified Apr 27 2012
 by Robert Wessels
 
 This example code is in the public domain.
 
 http://www.arduino.cc/en/Tutorial/Button
 */

// constants won't change. They're used here to 
// set pin numbers:
//if you want, you can modify one of the LEDs to light YELLOW_LED by adjusting the lines
const int leftButton = PUSH1;
const int rightButton = PUSH2;     // the number of the pushbutton pin

// variables will change:
int rightbuttonState = 0;         // variable for reading the pushbutton status
int leftbuttonState = 0;         // variable for reading the pushbutton status
void setup() {
  // initialize the LED pin as an output:
  pinMode(RED_LED, OUTPUT);
  pinMode(GREEN_LED, OUTPUT);      
  // initialize the pushbutton pin as an input:
  pinMode(rightButton, INPUT_PULLUP);
  pinMode(leftButton, INPUT_PULLUP);     
}

void loop(){
  // read the state of the pushbutton value:
  rightbuttonState = digitalRead(rightButton);
  leftbuttonState = digitalRead(leftButton);
  // check if the pushbutton is pressed.
  // if it is, the buttonState is HIGH:
  if (rightbuttonState == HIGH) {     
    // turn LED on:    
    digitalWrite(RED_LED, HIGH);  
  } 
  else {
    // turn LED off:
    digitalWrite(RED_LED, LOW); 
  }
  if (leftbuttonState == HIGH) {     
    // turn LED on:    
    digitalWrite(GREEN_LED, HIGH);  
  } 
  else {
    // turn LED off:
    digitalWrite(GREEN_LED, LOW); 
  }
}
