 
 int red = 1 ;
 int yellow = 5 ;
 int green = 10 ;

void setup()
{
  
  pinMode(red,OUTPUT);
  pinMode(yellow,OUTPUT);
  pinMode(green,OUTPUT);
  
}

void loop()
{
  
  digitalWrite(red,HIGH);
  delay (2000);
  digitalWrite(yellow,HIGH);
  delay (1000);
  digitalWrite(yellow,LOW);
  delay (1000);
  digitalWrite(yellow,HIGH);
  delay (1000);
  digitalWrite(yellow,LOW);
  delay (1000);
  digitalWrite(yellow,HIGH);
  delay (1000);
  digitalWrite(yellow,LOW);
  delay (1000);
  digitalWrite(yellow,HIGH);
  delay (1000);
  digitalWrite(red,LOW);
  digitalWrite(yellow,LOW);
  digitalWrite(green,HIGH);
  delay (2000);
  digitalWrite(yellow,HIGH);
  delay (1000);
  digitalWrite(yellow,LOW);
  delay (1000);
  digitalWrite(yellow,HIGH);
  delay (1000);
  digitalWrite(yellow,LOW);
  delay (1000);
  digitalWrite(yellow,HIGH);
  delay (1000);
  digitalWrite(yellow,LOW);
  digitalWrite(green,LOW);
  delay (1000);
  
}