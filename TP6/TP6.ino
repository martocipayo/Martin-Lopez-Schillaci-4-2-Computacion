#define rojo 11
#define verde 9
#define azul 10
  
void setup()
{
  
  Serial.begin(9600);


}
void loop()
{
  
  for(int x=0 ; x<255 ; x++ )
  {  
    for(int  i=0 ; i<255 ; i++)
  {
      for(int e=0 ; e<255 ; e++)
      {
    analogWrite(rojo   ,  x);
    analogWrite(verde  ,  i);
    analogWrite(azul   ,  e);
      
      Serial.print(x);
    Serial.print(";");
      Serial.print(i);
    Serial.print(";");
      Serial.print(e);
      Serial.print(";");
      Serial.println();
      }
    }
  }
       
}      
      
