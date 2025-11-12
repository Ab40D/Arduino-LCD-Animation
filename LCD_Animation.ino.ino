#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
int ContrastPin = 6; // PWM pin for contrast

// Custom characters (heart & smiley)
byte heart[8] = {
  0b00000,
  0b01010,
  0b11111,
  0b11111,
  0b11111,
  0b01110,
  0b00100,
  0b00000
};

byte smiley[8] = {
  0b00000,
  0b00000,
  0b01010,
  0b00000,
  0b00000,
  0b10001,
  0b01110,
  0b00000
};

void setup() {
  lcd.begin(16, 2);
  lcd.createChar(0, heart);
  lcd.createChar(1, smiley);
}

void loop() {
  String line1 = "This is INRXX";
  String line2 = "Follow me :";

  // Typing animation
  lcd.clear();
  for (int i = 0; i <= line1.length(); i++) {
    lcd.setCursor(0, 0);
    lcd.print(line1.substring(0, i));
    lcd.setCursor(0, 1);
    lcd.print(line2);
    lcd.write(byte(1)); // smiley at the end
    delay(200);
  }

  delay(800);

  // Marquee scroll
  for (int pos = 0; pos < line1.length() + 16; pos++) {
    lcd.clear();
    lcd.setCursor(16 - pos, 0);
    lcd.print(line1);
    lcd.setCursor(16 - pos, 1);
    lcd.print(line2);
    lcd.write(byte(0)); // heart at the end
    delay(250);
  }

  // Contrast pulse effect
  for (int c = 50; c < 200; c += 5) {
    analogWrite(ContrastPin, c);
    delay(50);
  }
  for (int c = 200; c > 50; c -= 5) {
    analogWrite(ContrastPin, c);
    delay(50);
  }
}