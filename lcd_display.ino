#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup() {
  lcd.init();
  lcd.backlight();

  lcd.setCursor(0, 0);
  lcd.print("Hello LinkedIn!");

  lcd.setCursor(0, 1);
  lcd.print("Day 1 Project");

  delay(2000);

  lcd.clear();
}

void loop() {
  String text = "I2C LCD Display Demo ";

  lcd.setCursor(0, 0);
  lcd.print(text);

  for (int pos = 0; pos < text.length(); pos++) {
    lcd.scrollDisplayLeft();
    delay(300);
  }

  delay(1000);
  lcd.clear();

  lcd.setCursor(0, 0);
  lcd.print("Arduino + LCD");
  delay(2000);
}