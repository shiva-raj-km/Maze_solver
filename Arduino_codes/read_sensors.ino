#define leftFarSensor A0 //s1
#define leftNearSensor A1 //s2
#define leftfollowsensor A2//s3  
#define leftCenterSensor  A3 //s4    
#define rightCenterSensor A4 // s5
#define rightfollowsensor A5//s6
#define rightNearSensor   2 //s7
#define rightFarSensor   4 //s8


void setup() {
  // put your setup code here, to run once:
 pinMode(leftCenterSensor, INPUT);
  pinMode(leftNearSensor, INPUT);
  pinMode(leftFarSensor, INPUT);
  pinMode(rightCenterSensor, INPUT);
  pinMode(rightNearSensor, INPUT);
  pinMode(rightFarSensor, INPUT);
  pinMode(leftfollowsensor,INPUT);
    pinMode(rightfollowsensor,INPUT);  
 
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
Serial.println(digitalRead(leftFarSensor));
Serial.println(digitalRead(leftNearSensor));
Serial.println(digitalRead(leftfollowsensor));
Serial.println(digitalRead(leftCenterSensor));
Serial.println(digitalRead(rightCenterSensor));
Serial.println(digitalRead(rightfollowsensor));
Serial.println(digitalRead( rightNearSensor));
Serial.println(digitalRead(rightFarSensor));
delay(2000);
Serial.println("");
}
