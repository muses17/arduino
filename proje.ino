#include <LiquidCrystal_I2C_AvrI2C.h>

LiquidCrystal_I2C_AvrI2C lcd(0x27,16,2); // 0x27, 16 karakter, 2 satırlık LCD
//LiquidCrystal_I2C_AvrI2C lcd(0x27,20,4); // 0x27, 20 karakter, 4 satırlık LCD

void setup()
{
  lcd.begin();   // LCD yi aktif edelim
  lcd.backlight(); // LCD ışığını aktif yapalım
  
  
  
}

void loop()
{
  
  for (int i=500; i >= 0; i--){
  lcd.print("Zaman Daraliyor");  // İlk satıra yazalım
  lcd.setCursor(0,1);  // İkinci satırın en başına geç
  lcd.print(i);  // İkinci satıra yazalım
  delay(1000);
  lcd.clear();
  
   } 

 
}
