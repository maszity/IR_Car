//sensor pin
int IR_SensorL = 8;
int IR_SensorR = 9;

//motor pin
int driveLF = 1;  //Drive Left Forward
int deriveLB = 2;
//A hatra irany egyelore csak fejlesztesi lehetoseg
int driveRF = 4;
int driveRB = 5;

//motor speed
//#define ENASpeed 120
//#define ENBSpeed 120

//analog speed
//A sebessegvaltoztatas csak fejlesztesi lehetoseg.
//A jumperek helzs beallitasaval es a pin-re torteno analog kimenet adasaval a motoros sebessege allithato.
int ENA = 6;
int ENB = 3;

void setup() {
  // put your setup code here, to run once:
//sensor pin
pinMode(IR_SensorL, INPUT);
pinMode(IR_SensorR, INPUT);
//motor pin
pinMode(driveLF, OUTPUT); //bal elore
pinMode(deriveLB, OUTPUT); //bal hatra
pinMode(driveRF, OUTPUT); //jobb hatra
pinMode(driveRB, OUTPUT); //jobb elore
//motor speed
pinMode(ENA, OUTPUT);
pinMode(ENB, OUTPUT);
}

void loop() {
//ena/b speed
//analogWrite(ENA, ENASpeed);
//analogWrite(ENB, ENBSpeed);
  
//sensor read
IR_SensorL = digitalRead(8);
IR_SensorR = digitalRead(9);
         
//-------------------------------FőProgram-----------------------------------
//elore 
if(IR_SensorL == LOW && SenIR_SensorRsor2 == LOW){
  elore();
}

//balra
if (IR_SensorL == HIGH && IR_SensorR == LOW){
  balra();
}
  
 //jobbra
if (IR_SensorL == LOW && IR_SensorR == HIGH){
  jobbra();
} 
  
}

void elore(){
  digitalWrite(driveLF, HIGH);
  digitalWrite(driveRF, HIGH);    
}

void balra(){
  digitalWrite(driveLF, HIGH);
  digitalWrite(driveRF, LOW);
}

void jobbra(){
  digitalWrite(driveLF, LOW);
  digitalWrite(driveRF, HIGH);
}
