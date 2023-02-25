
#include "Arduino.h"
#include "shiftRegister4094SevenSeg.h"

const uint8_t bitMap[] = {
    // 0bGFEDCBA
    0b00111111,  // 0   "0"          AAAA
    0b00000110,  // 1   "1"         F    B
    0b01011011,  // 2   "2"         F    B
    0b01001111,  // 3   "3"          GGGG
    0b01100110,  // 4   "4"         E    C
    0b01101101,  // 5   "5"         E    C
    0b01111101,  // 6   "6"          DDDD
    0b00000111,  // 7   "7"
    0b01111111,  // 8   "8"
    0b01101111,  // 9   "9"
    0b01110111,  // 65  'A'
    0b01111100,  // 66  'b'
    0b00111001,  // 67  'C'
    0b01011110,  // 68  'd'
    0b01111001,  // 69  'E'
    0b01110001,  // 70  'F'
    0b00111101,  // 71  'G'
    0b01110110,  // 72  'H'
    0b00000110,  // 73  'I'
    0b00001110,  // 74  'J'
    0b01110110,  // 75  'K'  Same as 'H'
    0b00111000,  // 76  'L'
    0b00000000,  // 77  'M'  NO DISPLAY
    0b01010100,  // 78  'n'
    0b00111111,  // 79  'O'
    0b01110011,  // 80  'P'
    0b01100111,  // 81  'q'
    0b01010000,  // 82  'r'
    0b01101101,  // 83  'S'
    0b01111000,  // 84  't'
    0b00111110,  // 85  'U'
    0b00111110,  // 86  'V'  Same as 'U'
    0b00000000,  // 87  'W'  NO DISPLAY
    0b01110110,  // 88  'X'  Same as 'H'
    0b01101110,  // 89  'y'
    0b01011011,  // 90  'Z'  Same as '2'
    0b00000000,  // 32  ' '  BLANK
    0b01000000,  // 45  '-'  DASH
    0b010000000, // 46  '.'  PERIOD
    0b01100011,  // 42  '*'  DEGREE ..
};

shiftRegister4094SevenSeg::shiftRegister4094SevenSeg(bool type, uint8_t digit_num) : _seg_type(type), _digit_num(digit_num)
{
    // Default Constructor of EmSevenSegment class
}