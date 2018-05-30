#include <Wire.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 2, 1, 0, 4, 5, 6, 7, 3, POSITIVE);

void setup() {
  lcd.begin(16,2);
  lcd.backlight();
  

}

void loop() {
  lcd.setCursor(0,0);
  lcd.print(" Amine Mokhtari ");
  delay(1000);
  lcd.setCursor(0,1);
  lcd.print(" Like | Share ");
  delay(8000);
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print(" Subscribe ");
  
  lcd.setCursor(0,1);
  lcd.print(" Amine Mokhtari ");
  delay(8000);

}
