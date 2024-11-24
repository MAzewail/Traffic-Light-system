byte sequ[7][3]={
  {1,0,0},
  {1,1,0},
  {1,0,0},
  {1,1,0},
  {1,0,0},
  {1,1,0},
  {0,0,1}};
byte i=2;
void setup()
{
  for(;i<5;i++)
  pinMode(i, OUTPUT);
}

void loop()
{
  digitalWrite(i%3+2,*(*sequ+i%21));
  delay(400*!(2-i++%3));
}
  
  
  
  /*
    digitalWrite(green, HIGH);
  delay(400); 
  digitalWrite(yellow, HIGH);
  delay(400);
  digitalWrite(yellow, LOW);
  delay(400);
  digitalWrite(yellow, HIGH);
  delay(400);
  digitalWrite(yellow, LOW);
  delay(400);
  digitalWrite(yellow, HIGH);
  delay(400);
  digitalWrite(yellow, LOW);
  digitalWrite(green, LOW);
  digitalWrite(red, HIGH);
  delay(400); 
  digitalWrite(red, LOW);
}*/