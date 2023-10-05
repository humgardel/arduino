const int buttonPin1 = 2;     // the number of the pushbutton pin
const int buttonPin2 = 3;     // the number of the pushbutton pin
const int buttonPin3 = 4;     // the number of the pushbutton pin
const int buttonPin4 = 5;     // the number of the pushbutton pin
const int buttonPin5 = 6;     // the number of the pushbutton pin
const int buttonPin6 = 7;     // the number of the pushbutton pin
const int buttonPin7 = 8;     // the number of the pushbutton pin
const int buttonPin8 = 9;     // the number of the pushbutton pin

int buttonState1 = 0;         // variable for reading the pushbutton status
int buttonState2 = 0;         // variable for reading the pushbutton status
int buttonState3 = 0;         // variable for reading the pushbutton status
int buttonState4 = 0;         // variable for reading the pushbutton status
int buttonState5 = 0;         // variable for reading the pushbutton status
int buttonState6 = 0;         // variable for reading the pushbutton status
int buttonState7 = 0;         // variable for reading the pushbutton status
int buttonState8 = 0;         // variable for reading the pushbutton status

void setup()                    // run once, when the sketch starts
{
  Serial.begin(9600);           // set up Serial library at 9600 bps
  pinMode(buttonPin1, INPUT_PULLUP);
  pinMode(buttonPin2, INPUT_PULLUP);
  pinMode(buttonPin3, INPUT_PULLUP);
  pinMode(buttonPin4, INPUT_PULLUP);
  pinMode(buttonPin5, INPUT_PULLUP);
  pinMode(buttonPin6, INPUT_PULLUP);
  pinMode(buttonPin7, INPUT_PULLUP);
  pinMode(buttonPin8, INPUT_PULLUP);
}

void loop()                       // run over and over again
{
  Serial.println(GetButton());
}

String GetButton(){
  String button;
  if(digitalRead(buttonPin1)==LOW){
    button="UP"; 
  }
  if(digitalRead(buttonPin2)==LOW){
    button= "DOWN"; 
  }
  if(digitalRead(buttonPin3)==LOW){
    button="LEFT"; 
  }
  if(digitalRead(buttonPin4)==LOW){
    button= "RIGHT"; 
  } 
  if(digitalRead(buttonPin5)==LOW){
    button="A"; 
  }
  if(digitalRead(buttonPin6)==LOW){
    button= "B"; 
  } 
  if(digitalRead(buttonPin7)==LOW){
    button="START"; 
  }
  if(digitalRead(buttonPin8)==LOW){
    button= "SELECT"; 
  }  
  return button;
}

