
int motrf =12;
int motrb = 11;
int motlf = 10;
int motlb = 9;
int en1 = 4;
int en2 = 5;  

void setup() {
  pinMode(en1,OUTPUT);
  pinMode(en2,OUTPUT);
  pinMode(motrf,OUTPUT);
  pinMode(motrb,OUTPUT);
  pinMode(motlf,OUTPUT);
  pinMode(motlb,OUTPUT);
  Serial.begin(9600);
  digitalWrite(en1,HIGH);
  digitalWrite(en2,HIGH);

  // put your setup code here, to run once:

}

void loop()
{
     // analogWrite(en2,100);
     // analogWrite(en1,255);
      
     digitalWrite(motrf,LOW);
     digitalWrite(motrb,HIGH);
      digitalWrite(motlf,LOW);
      digitalWrite(motlb,HIGH); 
 

}
