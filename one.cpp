#include"one.h"
void one :: funct()
{
  WiFi.begin(ssid,pass);
  delay(100);
  Serial.println("wifi connecteing...");
}
void one :: pro()
{
  pinMode(2,OUTPUT);
  digitalWrite(2,HIGH);
  delay(100);
  digitalWrite(2,LOW);
  delay(100);
}
int one::wifi_con()
{
  funct();
  while(WiFi.status()!=WL_CONNECTED)
  {
    pro();      
  }
  if(WiFi.status()==WL_CONNECTED)
  return 0;
  else
  return 1;
}
void second :: pin()
{
  digitalWrite(2,HIGH);
}
void second::printing(int a)
{
  if(a==0)
  {
    Serial.println("Sucessfully WiFi connected");
    pin();
  }
  else
  Serial.println("Wifi connection failed");
}
