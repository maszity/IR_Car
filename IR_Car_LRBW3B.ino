//sensor pin
int Sensor1 = 8;
int Sensor2 = 9;

//motor pin
int in1 = 1;
int in2 = 2;
int in3 = 4;
int in4 = 5;

//motor speed
//#define ENASpeed 120
//#define ENBSpeed 120

//analog speed
int ENA = 6;
int ENB = 3;

void setup() {
  // put your setup code here, to run once:
//sensor pin
pinMode(Sensor1, INPUT);
pinMode(Sensor2, INPUT);
//motor pin
pinMode(in1, OUTPUT); //bal elore
pinMode(in2, OUTPUT); //bal hatra
pinMode(in3, OUTPUT); //jobb hatra
pinMode(in4, OUTPUT); //jobb elore
//motor speed
pinMode(ENA, OUTPUT);
pinMode(ENB, OUTPUT);
}

void loop() {
//ena/b speed
//analogWrite(ENA, ENASpeed);
//analogWrite(ENB, ENBSpeed);
//sensor read
Sensor1 = digitalRead(8);
Sensor2 = digitalRead(9);
         
//-------------------------------FőProgram-----------------------------------

//elore 
if(Sensor1 == LOW && Sensor2 == LOW){
  digitalWrite(in1, HIGH);
  digitalWrite(in4, HIGH);
}

//balra
if (Sensor1 == HIGH){
  digitalWrite(in1, HIGH);
  digitalWrite(in4, LOW);
  }
 //jobbra
if (Sensor2 == HIGH){
  digitalWrite(in1, LOW);
  digitalWrite(in4, HIGH);
  }
}
