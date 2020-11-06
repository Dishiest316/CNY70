#include  <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
void setup()

{
 
pinMode(A0,INPUT);

}

void loop()
{
  
  int i;
  float y, x, v, w;

 
  
 
    v =analogRead(A0);
    
    lcd.begin(16, 2);
 
  lcd.home();
    y = 0.4612*v + 11.8189;
   w = y/100;
  lcd.print("El Voltaje = ");
  lcd.print(w);
lcd.setCursor ( 0, 1 );
  lcd.print("La d en mm = ");
 
  x = (3.8189- w )/.4612;
    lcd.print(x);

  

  delay(1000);
    
  

  
 
  }
