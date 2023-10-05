int led=12;

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(led, OUTPUT);
}
int uTime=240;
// the loop function runs over and over again forever
void loop() {
  
  H(); //call functions
  G();
  Space();
                      
}

//called letter functions
void G(){
  Dash(); 
  Dash();
  LastDot(); 
}

void H(){
  Dot();
  Dot();
  Dot();
  LastDot();  
}

void Space(){
  digitalWrite(led, LOW);
  delay(4*uTime); //Add 4 to the 3 times of the last letter = 7uTime
}

//interpreter functions
void Dot(){
  digitalWrite(led, HIGH);
  delay(uTime); 
  digitalWrite(led, LOW);
  delay(uTime);
}

void Dash(){
  digitalWrite(led, HIGH);
  delay(3*uTime); 
  digitalWrite(led, LOW);
  delay(uTime);
}

void LastDot(){
  digitalWrite(led, HIGH);
  delay(uTime); 
  digitalWrite(led, LOW);
  delay(3*uTime);  
}

void LastDash(){
  digitalWrite(led, HIGH);
  delay(3*uTime); 
  digitalWrite(led, LOW);
  delay(3*uTime);
}

