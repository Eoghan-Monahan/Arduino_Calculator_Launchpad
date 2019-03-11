#include <Keypad.h>

const byte numRows= 4; //number of rows on the keypad
const byte numCols= 4; //number of columns on the keypad

//keymap defines the key pressed according to the row and columns just as appears on the keypad
char keymap[numRows][numCols]=
{
{'1', '2', '3', 'A'},
{'4', '5', '6', 'B'},
{'7', '8', '9', 'C'},
{'*', '0', '#', 'D'}
};

//Code that shows the the keypad connections to the arduino terminals
byte rowPins[numRows] = {9,8,7,6}; //Rows 0 to 3
byte colPins[numCols]= {5,4,3,2}; //Columns 0 to 3

//initializes an instance of the Keypad class
Keypad myKeypad= Keypad(makeKeymap(keymap), rowPins, colPins, numRows, numCols);

void setup()
{
Serial.begin(38400);
}

void loop() {
  // put your main code here, to run repeatedly:
  for (int i=0; i<9; i++) {
  char keypressed = myKeypad.getKey();
  }
  switch (keypressed) {
    case('1'):
      break;
    case('2'):
      break;
    case('3'):
      break;
    case('4'):
      break;
    case('5'):
      break;
    case('6'):
      break;
    case('7'):
      break;
    case('8'):
      break;
    case('9'):
      break;
    case('0'):
      break;
    case('A'):
      break;
    case('B'):
      break;
    case('C'):
      break;
    case('D'):
      break;
    case('*'):
      break;
    case('#'):
      break;
    default:
      delay(20ms);
      breal;
  }
}
