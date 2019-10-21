
int choiceLED;
void setup()
{
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  Serial.print("enter the number you want to enter");
  while(Serial.available()==0)
        {}
        
  choiceLED=Serial.parseInt();
  if(choiceLED==6)
        {
         Serial.print("you have entered the number 6 coressponding to which the red LED glows");
         analogWrite(11,255);
         analogWrite(10,0);
         analogWrite(9,0);  
        }
   if(choiceLED==4)
        {
         Serial.print("you have entered the number 4 corresponding to which the green LED glows");
         analogWrite(10,255);
         analogWrite(11,0);
         analogWrite(9,0); 
          }
   if(choiceLED==2)
          {
     
          Serial.print("you have entered the number 2 corresponding to which the blue LED glows");
          analogWrite(9,255);
          analogWrite(10,0);
          analogWrite(11,0); 
          }   
   }
   

  