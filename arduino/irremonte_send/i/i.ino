/*
  Emission infrarouge
*/

#include <IRremote.h>
int broche_emission = 11; // broche 11 utilisée
IRsend emission_ir; // crée une instance

void setup()
{
    Serial.begin(9600);
  Serial.println("TEST UP");
}

void loop()
{
   emission_ir.sendNEC(0x61D6F807, 32); // code télécommande CGV on/off
   delay(1000);
   Serial.println("send");
}
