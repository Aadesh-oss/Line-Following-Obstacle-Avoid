int motor1_in1 = 4;
int motor1_in2 = 5;
int motor1_in3 = 6;
int motor1_in4 = 7;

int mSensor = 9;
int lSensor = 10;
int rSensor = 8;
int l2Sensor = 3;
int r2Sensor = 2;

int mRead;
int lRead;
int rRead;
int l2Read;
int r2Read;

#include <Servo.h>
Servo servo1;
Servo servo2;
Servo servo3;
int trigPin = 53;
int echoPin = 51;
long distance;
long duration;

#define S0 4
#define S1 5
#define S2 6
#define S3 7
#define sensorOut 8
int frequency = 0;
boolean armDown=false;

void setup() {
  Serial.begin(9600);
  pinMode(mSensor, INPUT);
  pinMode(lSensor, INPUT);
  pinMode(rSensor, INPUT);
  pinMode(l2Sensor, INPUT);
  pinMode(r2Sensor, INPUT);

  pinMode(motor1_in1, OUTPUT);
  pinMode(motor1_in2, OUTPUT);
  pinMode(motor1_in3, OUTPUT);
  pinMode(motor1_in4, OUTPUT);

  servo1.attach(49);
   servo2.attach(47);
    servo3.attach(45);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);

  pinMode(S0, OUTPUT);
  pinMode(S1, OUTPUT);
  pinMode(S2, OUTPUT);
  pinMode(S3, OUTPUT);
  pinMode(sensorOut, INPUT);
  // Setting frequency-scaling to 20%
  digitalWrite(S0, HIGH);
  digitalWrite(S1, LOW);
  Serial.begin(9600);

 servo1.write(30);//up



}

void loop() {
  mRead = digitalRead(mSensor);
  lRead = digitalRead(lSensor);
  rRead = digitalRead(rSensor);
  l2Read = digitalRead(l2Sensor);
  r2Read = digitalRead(r2Sensor);
  
  Serial.print(l2Read);
  Serial.print(lRead);
  Serial.print(mRead);
  Serial.print(rRead);
  Serial.print(r2Read);
  
  Serial.println();
  


conditions();

 ultra();
//servoMotor();
servoMotorArm();
//color();
//
//  servo1.write(30);//up
//  delay(1000);
//  servo1.write(120);//down
//  delay(1000);
//

}

void servoMotor(){

    
  servo1.write(0);
   servo2.write(0);
    servo3.write(0);
  if(distance >= 11 && distance >0){
  servo1.write(45);
   servo2.write(45);
    servo3.write(90);
  }}

  void servoMotorArm(){

   
  if(distance <= 11 && distance >0 && armDown==false){
   servo1.write(150);//down
  delay(1000);
  armDown=true;
  }
  
  }
void ultra(){
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distance = duration*0.034/2;
  //Serial.println(distance);
}

void color(){
  
  

 // Setting red filtered photodiodes to be read
  digitalWrite(S2,LOW);
  digitalWrite(S3,LOW);
  // Reading the output frequency
  frequency = pulseIn(sensorOut, LOW);
  //Remaping the value of the frequency to the RGB Model of 0 to 255
  frequency = map(frequency, 390,42,0,255);
  // Printing the value on the serial monitor
  //Serial.print("R= ");//printing name
  Serial.print(frequency);//printing RED color frequency
  Serial.print(" ");
  delay(1);
  // Setting Green filtered photodiodes to be read
  digitalWrite(S2,HIGH);
  digitalWrite(S3,HIGH);
  // Reading the output frequency
  frequency = pulseIn(sensorOut, LOW);
  //Remaping the value of the frequency to the RGB Model of 0 to 255
  frequency = map(frequency, 306,48,0,255);
  // Printing the value on the serial monitor
 // Serial.print("G= ");//printing name
  Serial.print(frequency);//printing RED color frequency
  Serial.print(" ");
  delay(1);
  // Setting Blue filtered photodiodes to be read
  digitalWrite(S2,LOW);
  digitalWrite(S3,HIGH);
  // Reading the output frequency
  frequency = pulseIn(sensorOut, LOW);
  //Remaping the value of the frequency to the RGB Model of 0 to 255
  frequency = map(frequency, 339,39,0,255);
  // Printing the value on the serial monitor
  //Serial.print("B= ");//printing name
  Serial.print(frequency);//printing RED color frequency
  Serial.println(" ");
  }
