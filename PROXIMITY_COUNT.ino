#include <LiquidCrystal.h> 
LiquidCrystal lcd(7,6,5,4,3,2);

const int SW=9;
int count;

int val=0;
int once=0;

void setup()
{
  lcd.begin(16, 2);
    
  lcd.setCursor(0,0); 
  lcd.print("SRI ELECTRONIC & EMBEDDED SOLUTIONS");
  lcd.setCursor(0,1); 
  lcd.print("count:");
      
  pinMode(SW,INPUT);
}

void loop()
{
  val=digitalRead(SW);
  
  if(val==HIGH)
  {
    if(once==0)
    {
      lcd.setCursor(6,1); 
      lcd.print(count);
      count++;
      if(count>9)
      {
        count=0;
      }
      once=1;
    } 
  }
  else
  {
    once=0;
  }
}
