int red =2;
int yellow=3;
int green=4;
int button = 7;
int schetchik = 0;

void setup()
{
  pinMode(red,  OUTPUT);
  pinMode(yellow,  OUTPUT);
  pinMode(green,  OUTPUT);
  pinMode(button, INPUT_PULLUP);
  Serial.begin(9600);
}


void loop()
{
  digitalWrite(red, LOW);
  digitalWrite(yellow, LOW);
  digitalWrite(green, HIGH);

if (digitalRead(button) == LOW)
{
  digitalWrite(green, LOW);
  schetchik++;
  Serial.println(schetchik);

while (digitalRead(button) == LOW) {
}
}

if (schetchik == 3) {
  for (int i = 0; i < 5; i++) {
     digitalWrite(yellow, HIGH);
     delay(500);
     digitalWrite(yellow, LOW);
     delay(500);
  }
  schetchik = 0;

}

 digitalWrite(green, HIGH);

}