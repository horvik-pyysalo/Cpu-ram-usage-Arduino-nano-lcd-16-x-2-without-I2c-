#include <Wire.h> 
#include <LiquidCrystal.h>
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(12, 11, 9, 8, 7, 6); //lcd Pin

void setup() {
 
  lcd.begin(16, 2);

 Serial.begin(9600);
}

void loop() {
  
 if (Serial.available()) {
    delay(100);
    lcd.setCursor(0, 0);
    while (Serial.available() > 0) {
      lcd.write(Serial.read());
    }
  }
}
