// C++ code
//
int red=13;
int green=1;
int yellow=3;

int red2=4;
int green2=2;
int yellow2=12;

void setup()
{
  pinMode(red, OUTPUT);
  pinMode(red2, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(yellow2, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(green2, OUTPUT);
  
}

void loop()
{
  digitalWrite(red, HIGH);
  digitalWrite(green2, HIGH);
  delay(9000); 
  
  digitalWrite(yellow, LOW);
  digitalWrite(green,LOW);
  digitalWrite(red2, LOW);
  digitalWrite(yellow2, LOW);
  delay(9000); 
  
  
  digitalWrite(yellow, HIGH);
  digitalWrite(yellow2, HIGH);
  delay(9000);
  
  digitalWrite(red, LOW);
  digitalWrite(green,LOW);
  digitalWrite(red2, LOW);
  digitalWrite(green2, LOW);
  delay(9000);
  
  digitalWrite(green, HIGH);
  digitalWrite(red2, HIGH);
  delay(5000);
  
  digitalWrite(yellow, LOW);
  digitalWrite(red,LOW);
  digitalWrite(green2, LOW);
  digitalWrite(yellow2, LOW);
  delay(5000); 
  
  
  digitalWrite(yellow, HIGH);
  digitalWrite(yellow2, HIGH);
  delay(5000);
  
  digitalWrite(red, LOW);
  digitalWrite(red2,LOW);
  digitalWrite(green, LOW);
  digitalWrite(green2, LOW);
  delay(5000); 
 
  
  
  
  
  
  
  
  
  
}