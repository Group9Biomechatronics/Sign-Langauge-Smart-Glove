
//created library
#include <SD.h>
#include <TMRpcm.h>
#include "Sensors.h"
#include "ArbVoice.h"
#include "EngVoice.h"
#include "Buttons.h"

//led green
const int greenled = 10;

//pin for SDcard

#define SD_ChipSelectPin 4

void setup()
{
  // pinMode(greenled,OUTPUT);
   Serial.begin(9600);
   tmrpcm.speakerPin = 9;
  
   if(!SD.begin(SD_ChipSelectPin))
  {
   return;
  }
   tmrpcm.setVolume(6);
   tmrpcm.quality(1);
   //for gyroscope pin output
   Set1();
   //for buttons pin output
   Set2(); 
}
String str;
void loop()
  {
    analogWrite(greenled,255);
    ReadSensor_Eng();
    ReadSensor_Arb();
    Read_Serial_Monitor();
    Button();
    Print_Flex_Gyro();
    Print_Button();
    Serial.println();
    
  }




 
