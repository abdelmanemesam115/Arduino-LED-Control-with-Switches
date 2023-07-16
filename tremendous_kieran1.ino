void setup(){
Serial.begin(9600);
  pinMode(2,OUTPUT);
   pinMode(3,OUTPUT);
  pinMode(5,INPUT);
   pinMode(6,INPUT);
   pinMode(10,INPUT);
   pinMode(11,INPUT);
   pinMode(12,INPUT);
   pinMode(13,INPUT);
}
void loop(){
  if(digitalRead(2)==HIGH){
 analogWrite(5,510);
  analogWrite(6,510);
  }
  else if(digitalRead(2)==LOW){
  analogWrite(5,LOW);
  analogWrite(6,LOW);
  
  }
  if (digitalRead(3)==HIGH){
   digitalWrite(10,HIGH );
   digitalWrite(11,HIGH );
     digitalWrite(12,HIGH );
   digitalWrite(13,HIGH );
    }
  else if(digitalRead(3)==LOW){
  digitalWrite(10,LOW );
   digitalWrite(11,LOW );
     digitalWrite(12,LOW );
   digitalWrite(13,LOW );
    
  }
}
