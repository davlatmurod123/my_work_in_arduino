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
  digitalWrite(red, LOW);
  delay(500);
  digitalWrite(red, HIGH);
  delay(500);
  digitalWrite(red, LOW);
  delay(500);
  digitalWrite(red, HIGH);
  delay(500);
  digitalWrite(red, LOW);
  delay(500);
  digitalWrite(red, HIGH);
  delay(500);

    digitalWrite(red, LOW);
  delay(1000);
  digitalWrite(red, HIGH);
  delay(1000);
  digitalWrite(red, LOW);
  delay(1000);
  digitalWrite(red, HIGH);
  delay(1000);
  digitalWrite(red, LOW);
  delay(1000);
  digitalWrite(red, HIGH);
  delay(1000);

    digitalWrite(red, LOW);
  delay(500);
  digitalWrite(red, HIGH);
  delay(500);
  digitalWrite(red, LOW);
  delay(500);
  digitalWrite(red, HIGH);
  delay(500);
  digitalWrite(red, LOW);
  delay(500);
  digitalWrite(red, HIGH);
  delay(500);


while (digitalRead(button) == LOW) {
}
}

 digitalWrite(green, HIGH);

}