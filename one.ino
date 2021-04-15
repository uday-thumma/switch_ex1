#include<Switch.h>
#include"one.h"

in obj3;
String inn;
int oon;
one obj;
second obj2;
void setup() 
{
Serial.begin(115200);
int b=obj.wifi_con();
obj2.printing(b);
}

void loop() 
{
  while(Serial.available())
  {
    inn=Serial.readString();
    oon=inn.toInt();
    obj3.take(oon);
    
  }
}
