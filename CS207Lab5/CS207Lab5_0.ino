const int motorPin = 9;
const int temp = A1;

float AnalogToVolts(int reading);
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(motorPin, OUTPUT);
  pinMode(temp, INPUT);
}

float temperaturec;
float temperaturef;

void loop()
{
  temperaturec = AnalogToTemp();      //Function call
  temperaturef = temperaturec * (1.8) + 32; //conversion from c to f degrees
  Serial.print(temperaturec);
  Serial.print("° C    ");
  Serial.print(temperaturef);
  Serial.println("° F    ");
  motorON(temperaturec);              //function call to verify if the fan should turn on
}

// Functions Definition
float AnalogToTemp()
{
  float volts;
  float temp;
  volts = analogRead(A1)/1023.0 *5.0;  //Read the volts and converts it
  temp=volts*100-50;                   //Conversion from volts to celsius
  return temp; //Return result
}

void motorON(float temp){
  if(temp>=27.0){                     //conditional of temperature
    digitalWrite(motorPin, HIGH);     //turns on
  }
  else{
    digitalWrite(motorPin, LOW);      //turns off
  }
}


