const int buttonPin1 = 2;     // the number of the pushbutton pin
const int buttonPin2 = 3;     // the number of the pushbutton pin

int buttonState1 = 0;         // variable for reading the pushbutton status
int buttonState2 = 0; 

void setup()                    // run once, when the sketch starts
{
  Serial.begin(9600);           // set up Serial library at 9600 bps
  pinMode(buttonPin1, INPUT_PULLUP);
  pinMode(buttonPin2, INPUT_PULLUP);
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
  if(digitalRead(buttonPin1)==LOW){
    button="LEFT"; 
  }
  if(digitalRead(buttonPin2)==LOW){
    button= "B"; 
  } 
  if(digitalRead(buttonPin1)==LOW){
    button="A"; 
  }
  if(digitalRead(buttonPin2)==LOW){
    button= "B"; 
  } 
  if(digitalRead(buttonPin1)==LOW){
    button="A"; 
  }
  if(digitalRead(buttonPin2)==LOW){
    button= "B"; 
  }  
  return button;
}

