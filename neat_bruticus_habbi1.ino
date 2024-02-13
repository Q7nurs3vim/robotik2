// C++ code
//
void setup()
{
  Serial.begin(9600);
  pinMode(3, OUTPUT);
}

void loop()
{
  int pot = analogRead (A0);
  int LED = map (pot,0,1023,0,255);
  analogWrite(3,LED);
  Serial.print("Pot değeri = ");
  Serial.print(pot);
  Serial.print(" / LED Değeri =");
  Serial.print(LED);
  delay(2);
}