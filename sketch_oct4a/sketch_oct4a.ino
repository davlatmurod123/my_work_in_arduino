int red =2;
int yellow=3;
int green=4;
int button = 7;

void setup()
{
  pinMode(red,  OUTPUT);
  pinMode(yellow,  OUTPUT);
  pinMode(green,  OUTPUT);
  pinMode(button, INPUT_PULLUP);


}


void loop()
{
  digitalWrite(red, LOW);
  digitalWrite(yellow, LOW);
  digitalWrite(green, HIGH);

  if (digitalRead(button) == LOW)
  {
     digitalWrite(green, LOW);
     digitalWrite(yellow, HIGH);
     delay(2000);
     digitalWrite(yellow, LOW);
     digitalWrite(red, HIGH);
     delay(5000);
     digitalWrite(red, LOW);
     digitalWrite(green, HIGH);
  };




}