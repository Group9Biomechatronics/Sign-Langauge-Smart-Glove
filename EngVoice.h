
void eng(byte x)
{
  switch (x)
  {
    case 1:{
    tmrpcm.play("a.wav");
    delay(1000);
    break;
    
    } 
    case 2:{
    tmrpcm.play("b.wav");
    delay(1000);
    break;
    
    }
    case 3:{
    tmrpcm.play("c.wav");
    delay(1000);  
    break;
    }
    case 4:{
    tmrpcm.play("d.wav");
    delay(1000);  
    break;
    
    }
    case 5:{
    tmrpcm.play("e.wav");
    delay(1000);
    break;
    
    }
    case 6:{
    tmrpcm.play("f.wav");
    delay(1000);
    break;
    
    }
    case 7:{
    tmrpcm.play("g.wav");
    delay(1000);
    break;
    
    }
    case 8:{
    tmrpcm.play("h.wav");
    delay(1000);
    break;
    
    }
    case 9:{
    tmrpcm.play("i.wav");
    delay(1000);
    break;
    
    }
    case 10:{
    tmrpcm.play("j.wav");
    delay(1000);
    break;
    
    }
    case 11:{
    tmrpcm.play("k.wav");
    delay(1000);
    break;
    
    }
    case 12:{
    tmrpcm.play("l.wav");
    delay(1000);
    break;
    
    }
    case 13:{
    tmrpcm.play("m.wav");
    delay(1000);
    break;
    
    }
    case 14:{
    tmrpcm.play("p.wav");
    delay(1000);
    break;
    
    }
    case 15:{
    tmrpcm.play("q.wav");
    delay(1000);
    break;
    
    }
    case 16:{
    tmrpcm.play("r.wav");
    delay(1000);
    break;
    
    }
    case 17:{
    tmrpcm.play("s.wav");
    delay(1000);
    break;
    
    }
    case 18:{
    tmrpcm.play("t.wav");
    delay(1000);
    break;
    
    }
    case 19:{
    tmrpcm.play("u.wav");
    delay(1000);
    break;
    
    }
    case 20:{
    tmrpcm.play("v.wav");
    delay(1000);
    break;
    
    }
   }
  }
   
int buttonState1  = 0;
const int blueled = 3;
void ReadSensor_Eng()
{     
   if(buttonState1 == 1)
  {
      analogWrite(blueled, 255);
      if (val1<=90 && val2<=90 && ax<=-500 )
      {
        eng(15);
      }
      else if (val4<=80 && val5<=80 && ay<=-500)
      {
        eng(13);
      }
      else if (val4<=80 && val5<=80 && ay>=500)
      {
        eng(14);
      }
      else if (val4<=80 && val5<=80 && ax>=500)
      {
        eng(12);
      }
      else if (val1<=70 && val2<=70)
      {
        eng(10);
      }
      else if (val4<=70 && val5<=70)
      {
        eng(11);
      }
      else if (val1<=90 && ax>=500)
      {
        eng(16);
      }
      else if (val2<=90 && ax<=-500)
      {
        eng(17);
      }
      else if (val1<=90 && ax<=-500)
      {
        eng(18);
      }
      else if (val4<=90 && ay<=-500)
      {
        eng(19);
      }
      else if (val5<=90 && ax<=-500)
      {
        eng(20);
      }
      else if(val1 <= 60)
      {
        eng(1);
        delay(1500);
      }
      else if(val2 <= 60)
      {
        eng(2);
        delay(1500);
      }
      else if(val3<= 60)
      {
        eng(3);
        delay(1500);
      }
      
      else if(val4<=60)
      {
        eng(4);
        delay(1500);
      }
      
      else if(val5<=60)
      {
        eng(5);
        delay(1500);
      }
      else if(ax >= 500 )
      {
         eng(6);
         delay(1500);
      }
      else if(ay >= 500 )
      {
         eng(7);
         delay(1500);
      
      }
      else if(ax <= -500 )
      {
         eng(8);
         delay(1500);
      
      }
      else if(ay <=-500 )
      {
        eng(9);
        delay(1500); 
      }
  }
    else
    {
      analogWrite(blueled,0);
    }
}


