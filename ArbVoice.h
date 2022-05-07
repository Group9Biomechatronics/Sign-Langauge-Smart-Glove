
void arb(byte y)
{
  switch (y)
  {
  case 1:{
  tmrpcm.play("1.wav");
  delay(1000);
  break;
  
  } 
  case 2:{
  tmrpcm.play("2.wav");
  delay(1000);
  break;
  
  }
  case 3:{
  tmrpcm.play("3.wav");
  delay(1000);
  break;
  
  }
  case 4:{
  tmrpcm.play("4.wav");
  delay(1000);
  break;  
  
  }
  case 5:{
  tmrpcm.play("5.wav");
  delay(1000);
  break;  
  
  }
  case 6:{
  tmrpcm.play("6.wav");
  delay(1000);
  break;  
  
  }
  case 7:{
  tmrpcm.play("7.wav");
  delay(1000);
  break;  
  
   }
   case 8:{
  tmrpcm.play("8.wav");
  delay(1000);
  break;  
  
   }
   case 9:{
  tmrpcm.play("9.wav");
  delay(1000);
  break;  
  
   }
   case 10:{
  tmrpcm.play("10.wav");
  delay(1000);
  break;  
  
   }
   case 11:{
   tmrpcm.play("11.wav");
   delay(1000);
   break;
   }
   case 12:{
   tmrpcm.play("12.wav");
   delay(1000);
   break;
   }
   case 13:{
   tmrpcm.play("13.wav");
   delay(1000);
   break;
   }
   case 14:{
   tmrpcm.play("14.wav");
   delay(1000);
   break;
   }
   case 15:{
   tmrpcm.play("15.wav");
   delay(1500);
   break;
   }
   case 16:{
   tmrpcm.play("16.wav");
   delay(1000);
   break;
   }
   case 17:{
   tmrpcm.play("17.wav");
   delay(1000);
   break;
   }
   case 18:{
   tmrpcm.play("18.wav");
   delay(1000);
   break;
   }
   case 19:{
   tmrpcm.play("19.wav");
   delay(1000);
   break;
   }
   case 20:{
   tmrpcm.play("20.wav");
   delay(1000);
   break;
   }
  }
}
 
int buttonState2  = 0;
const int yellowled  = 6;
void ReadSensor_Arb()
  {
  if(buttonState2 == 1)
  {
      analogWrite(yellowled, 255);
      if (val6<=90 && val7<=90 && am<=-500 )
      {
        arb(15);
      }
      else if (val9<=80 && val10<=80 && ar<=-500)
      {
        arb(13);
      }
      else if (val9<=80 && val10<=80 && ar>=500)
      {
        arb(14);
      }
      else if (val9<=80 && val10<=80 && am>=500)
      {
        arb(12);
      }
      else if (val6<=70 && val7<=70)
      {
        arb(10);
      }
      else if (val9<=70 && val10<=70)
      {
        arb(11);
      }
      else if (val6<=90 && am>=500)
      {
        arb(16);
      }
      else if (val7<=90 && am<=-500)
      {
        arb(17);
      }
      else if (val6<=90 && am<=-500)
      {
        arb(18);
      }
      else if (val9<=90 && ar<=-500)
      {
        arb(19);
      }
      else if (val10<=90 && am<=-500)
      {
        arb(20);
      }
      else if(val6 <= 60)
      {
        arb(1);
        delay(1500);
      }
      else if(val7 <= 60)
      {
         arb(2);
        delay(1500);
      }
      else if(val8<= 60)
      {
        arb(3);
        delay(1500);
      }
      
      else if(val9<=60)
      {
        arb(4);
        delay(1500);
      }
      
      else if(val10<=60)
      {
        arb(5);
        delay(1500);
      }
      else if(am >= 500 )
      {
         arb(6);
         delay(1500);
      }
      else if(ar >= 500 )
      {
         arb(7);
         delay(1500);
      
      }
      else if(am <= -500 )
      {
         arb(8);
         delay(1500);
      
      }
      else if(ar <=-500 )
      {
        arb(9);
        delay(1500); 
      }

 
  }
      
    else
    {
      analogWrite(yellowled,0);
    }
  }
