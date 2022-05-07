//ENG ARB BUTTON pin
const int button1 = 7;
const int button2 = 8;
String txt1;


void Set2()
{
  pinMode(button1, INPUT);
  pinMode(button2, INPUT);
}
void Button()
{
  buttonState1 = digitalRead(button1);
  buttonState2 = digitalRead(button2);
}
void Print_Button()
 {
  Serial.print(txt1 + buttonState1 + "   " + buttonState2);
}

