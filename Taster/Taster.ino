/*
   Funktion:        Taster gedrückt LED ein
   Programierer:    Eric Junker
   letzte Änderung: 25.09.2020
   Version:         1.0
   Hardware:        Taster, LED grün
*/

#define LED 2         //Grüne LED Pin 2
#define Taster 10     //Taster auf Pin 10

boolean statusLed = 0;  //Taster ist nicht gedrückt

void setup()
{
  Serial.begin(9600);
  pinMode(LED, OUTPUT);
  pinMode(Taster, INPUT);

}

void loop()
{
  if (digitalRead(Taster) == 1)
  {
    if (statusLed == 1)
    {
      digitalWrite(LED, LOW);
      statusLed = 0;
    }
    else
    {
      digitalWrite(LED, HIGH);
      statusLed = 1;
    }

  }
}
