
int mq9 = A0;
int buzzer = 8;

void setup() {
  pinMode(mq9,INPUT);
  pinMode(buzzer,OUTPUT);
  pinMode(13,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(10,OUTPUT);
  
  Serial.begin(9600);  
}

void loop() 
{
  int gd = analogRead(mq9);
  delay(100);
  Serial.println(gd);

  if(gd<=350)
  {
    noTone(buzzer);
    digitalWrite(13,LOW);
    digitalWrite(12,LOW);
    digitalWrite(11,LOW);
    digitalWrite(10,LOW);
  }
  
  if(gd>350)
  {
    tone(buzzer,1000);
      
    digitalWrite(13,HIGH);
    digitalWrite(12,LOW);
    digitalWrite(11,LOW);
    digitalWrite(10,LOW);
  }

  if(gd>400)
  {
    tone(buzzer,1500);

    digitalWrite(13,HIGH);
    digitalWrite(12,HIGH);
    digitalWrite(11,LOW);
    digitalWrite(10,LOW);
  }
  
  if(gd>450)
  {
    tone(buzzer,2000);

    digitalWrite(13,HIGH);
    digitalWrite(12,HIGH);
    digitalWrite(11,HIGH);
    digitalWrite(10,LOW);
  }
  
  if(gd>500)
  {
    tone(buzzer,3000);

    digitalWrite(13,HIGH);
    digitalWrite(12,HIGH);
    digitalWrite(11,HIGH);
    digitalWrite(10,HIGH);
  }



  
}
