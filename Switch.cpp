#include "Switch.h"
#include<Arduino.h>
int arr[5]={33,34,35,36};
void in::pinn(int j)
{
    switch (j)
    {
    case 1:
        pinMode(arr[0], OUTPUT);
        Serial.print(arr[0]);
        Serial.println("pin configured as output");
        break;
    case 2:
        pinMode(arr[0], OUTPUT);
        Serial.print(arr[0]);
        Serial.println("pin configured as output");
        pinMode(arr[1], OUTPUT);
        Serial.print(arr[1]);
        Serial.println("pin configured as output");
        break;
    case 3:
        pinMode(arr[0], OUTPUT);
        Serial.print(arr[0]);
        Serial.println("pin configured as output");
        pinMode(arr[1], OUTPUT);
        Serial.print(arr[1]);
        Serial.println("pin configured as output");
        pinMode(arr[2], OUTPUT);
        Serial.print(arr[2]);
        Serial.println("pin configured as output");
        break;
    case 4:
        pinMode(arr[0], OUTPUT);
        Serial.print(arr[0]);
        Serial.println("pin configured as output");
        pinMode(arr[1], OUTPUT);
        Serial.print(arr[1]);
        Serial.println("pin configured as output");
        pinMode(arr[2], OUTPUT);
        Serial.print(arr[2]);
        Serial.println("pin configured as output");
        pinMode(arr[3], OUTPUT);
        Serial.print(arr[3]);
        Serial.println("pin configured as output");
        break;
    default:
        break;
    }

}
// void in:: switch1(int f)
// {
//     switch(f)
//     case 0:
//     Serial.println("Wrong input");
//     break;
//     case 1:
//     pinn(1);
//     break;
//     case 2:
//     pinn(2);
//     break;
//     case 3:
//     pinn(3);
//     break;
//     case 4:
//     pinn(4);
//     break;
//     default:
//     Serial.println("wrong input");
// }
void in::take(int g)
{
    // while(Serial.available())
    // String c = Serial.readString();
    // int g = c.toInt();
    // return g;
    switch (g)
    {
    case 0:
        Serial.println("Wrong input");
        break;
    case 1:
        pinn(1);
        break;
    case 2:
        pinn(2);
        break;
    case 3:
        pinn(3);
        break;
    case 4:
        pinn(4);
        break;
    default:
        Serial.println("wrong input");
    }
}