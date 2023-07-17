// C++ code
//
int switch1 = 0;
int switch2 = 1;
int led1 = 6;
int led2 = 3; 
int led4 = 11; 
int led6 = 10;
int x , y; 
void setup()
{
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led6, OUTPUT);
  pinMode(switch1, INPUT);
  pinMode(switch2, INPUT);
}

void loop()
{
  x = digitalRead(switch1);
  y = digitalRead(switch2);
  if (x ==1)
  { 
    
      analogWrite(led1, 255/2);
      analogWrite(led2, 255); 
  }  
  else 
    {
   analogWrite(led1, 0);
   analogWrite(led2, 0);
    }
  if (y ==1)
  { 
    
    analogWrite(led4,255 );
    analogWrite(led6, 255/2);  
  }
  else 
      {   
      analogWrite(led4, 0);
      analogWrite(led6, 0);
  
       }
  delay(250);
 
}