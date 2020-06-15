#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(16, 2);


void setup() {
  // put your setup code here, to run once:
  lcd.autoAddress();
  lcd.begin();
  lcd.setCursor(0,0);
  lcd.print("TEST LCD");
}

void loop() {
  // put your main code here, to run repeatedly:
  lcd.setCursor(0,1);
  lcd.print(millis()/1000);
}
