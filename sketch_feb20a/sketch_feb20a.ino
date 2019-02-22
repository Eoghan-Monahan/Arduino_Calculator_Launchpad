int i;
String inputs;
#define input;
#define button1;
#define button2;
#define button3;
#define button4;
#define button5;
#define button6;
#define button7;
#define button8;
#define button9;
#define button10;
#define button11;
#define button12;
#define button13;
#define button14;
#define button15;
#define button16;
#define button17;
#define button18;
#define button19;
#define button20;
#define button21;
#define button22;
#define button23;
#define button24;
#define button25;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(31250);
  for (i = 2; i < 14; i++) {
    pinMode(i, INPUT);
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  for (i = 2; i < 14; i++) {
    inputs.concat( digitalRead(i));
  }
  
  input = inputs.toInt();
  switch (inputInt) {
    case(button1):
      break;
    case(button2):
      break;  
    case(button3):
      break;
    case(button4):
      break;
    case(button5):
      break;
    case(button6):
      break;
    case(button7):
      break;
    case(button8):
      break;
    case(button9):
      break;
    case(button10):
      break;
    case(button11):
      break;
    case(button12):
      break;
    case(button13):
      break;
    case(button14):
      break;
    case(button15):
      break;
    case(button16):
      break;
    case(button17):
      break;
    case(button18):
      break;
    case(button19):
      break;
    case(button20):
      break;
    case(button21):
      break;
    case(button22):
      break;
    case(button23):
      break;
    case(button24):
      break;
    case(button25):
      break;
    default:
      delay(20ms);
      breal;
  }
}
