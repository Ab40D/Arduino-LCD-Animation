# Arduino LCD Animation 💡

This project displays animated text and icons on a 16x2 LCD using Arduino’s LiquidCrystal library.  
Includes:
- Typing effect
- Marquee scrolling
- Contrast pulse animation
- Custom characters (❤️ + 🙂)

## 🧰 Hardware
- Arduino Uno
- 16x2 LCD (16 pins)
- 10kΩ potentiometer (for contrast)
- Optional: PWM contrast control on pin 6

## ⚙️ Wiring
| LCD Pin | Arduino Pin |
|----------|--------------|
| RS       | 12 |
| E        | 11 |
| D4       | 5 |
| D5       | 4 |
| D6       | 3 |
| D7       | 2 |
| V0 (contrast) | PWM pin 6 (via resistor) |
| VSS | GND |
| VDD | 5V |
| A | 5V |
| K | GND |

## 🚀 Demo
![LCD Demo](media/lcd-demo.gif)

## 📜 Code
Check the `.ino` file in this repo for full source.
