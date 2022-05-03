// C++ code
//
int v=0;
int i=0;
int j=0;
void setup()
{
  pinMode(A1,INPUT);
  pinMode(3,OUTPUT);
  pinMode(A2,INPUT);
  pinMode(6,OUTPUT);
  pinMode(A3,INPUT);
  pinMode(9,OUTPUT);
}
void loop()
{
  v=analogRead(A1);
  digitalWrite(3,v);
  i=analogRead(A2);
  digitalWrite(6,i);
  j=analogRead(A3);
  digitalWrite(9,j);
  
}
  







