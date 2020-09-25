/*
   Funktion:        Taster gedrückt LED ein
   Programierer:    Eric Junker
   letzte Änderung: 25.09.2020
   Version:         1.0
   Hardware:        Taster, LED grün
*/

#define LED 2         //Grüne LED Pin 2
#define Taster 10     //Taster auf Pin 10

boolean eingabe = 0;  //Taster ist nicht gedrückt

void setup()
{
  Serial.begin(9600);
  pinMode(LED, OUTPUT);
  pinMode(Taster, INPUT);

}

void loop()
{
  eingabe = digitalRead(Taster);
  digitalWrite(LED, eingabe);

  if (eingabe == 1)
  {
    Serial.println("LED an");
  }
  else
  {
    Serial.println("LED aus");
  }
}
