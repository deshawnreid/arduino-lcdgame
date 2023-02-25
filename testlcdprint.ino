#include <Wire.h> // Library for I2C communication
#include <LiquidCrystal_I2C.h> // Library for LCD

// Wiring: SDA pin is connected to 20 and SCL pin to 21.
// Connect to LCD via I2C, default address 0x27
LiquidCrystal_I2C lcd = LiquidCrystal_I2C(0x27, 16, 2); // 0x27,16,2 - address of adapter, display length, display height

void setup() {
  // Initiate the LCD:
  lcd.init();
  lcd.backlight();
    //setCursor values start at 0!
  lcd.setCursor(2, 0); // Set the cursor on the third column and first row.
  lcd.print("Hello!");
  lcd.setCursor(2, 1); //Set the cursor on the third column and the second row.
  lcd.print("LCD testing");
}

void loop() {

}