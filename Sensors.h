//gyroscope sensor
#include <Wire.h>
#include<I2Cdev.h>
#include<MPU6050.h>
TMRpcm tmrpcm;
MPU6050 mpu;
//eng
int16_t ax, ay, az;
int16_t gx, gy, gz;
//arb
int16_t am, ar, at;
int16_t gm, gr, gt;

int pin2;


//flex sensor pin
const unsigned int flex1 = A7;
const unsigned int flex2 = A3;
const unsigned int flex3 = A2;
const unsigned int flex4 = A1;
const unsigned int flex5 = A6;

//eng flex
int val1;
int val2;
int val3;
int val4;
int val5;

//arb flex
int val6;
int val7;
int val8;
int val9;
int val10;

String txt;

void Set1()
{
//  Serial.println("Initialize MPU");
  mpu.initialize();
 //Serial.println(mpu.testConnection() ? "Connected" : "Connection failed"); pinMode(pin1,OUTPUT);
  pinMode(pin2,OUTPUT);
 
}

void Read_Serial_Monitor(){
  //data read for gyroscope eng
  mpu.getMotion6(&ax, &ay, &az, &gx, &gy, &gz);
 ax = map(ax, -17000, 17000, -1000, 1000);
 ay = map(ay, -17000, 17000, -1000, 1000);

 //data read for gyroscope arb
 mpu.getMotion6(&am, &ar, &at, &gm, &gr, &gt);
 am = map(am, -17000, 17000, -1000, 1000);
 ar = map(ar, -17000, 17000, -1000, 1000);

  //data read for flex eng
  val1 = analogRead(flex1);
  val2 = analogRead(flex2);
  val3 = analogRead(flex3);
  val4 = analogRead(flex4); 
  val5 = analogRead(flex5);
  val1=map(val1,80,300,0,250);
  val2=map(val2,80,300,0,200);
  val3=map(val3,80,300,0,190);
  val4=map(val4,80,300,0,200);
  val5=map(val5,80,300,0,200);

 //data read for flex arb 
  val6 = analogRead(flex1);
  val7 = analogRead(flex2);
  val8 = analogRead(flex3);
  val9 = analogRead(flex4);
  val10 = analogRead(flex5);
  val6=map(val6,80,300,0,250);
  val7=map(val7,80,300,0,200);
  val8=map(val8,80,300,0,190);
  val9=map(val9,80,300,0,200);
  val10=map(val10,80,300,0,200);

}
void Print_Flex_Gyro()
{ 
  Serial.print(txt + val1 + "    " + val2  + "    " + val3 + "   " + val4 + "    " + val5 + "     " + ax + "   " + ay + "     " + am + "     " + ar + "     " + val6 +"   " + val7 +"   "+ val8 +"   "+ val9 +"   "+ val10 +"   ");
}

