int red =2;
int yellow=3;
int green=4;
int button = 7;

unsigned long startTime;
unsigned long reactionTime;

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
  digitalWrite(red, HIGH);
  digitalWrite(yellow, LOW);
  digitalWrite(green, LOW);
  delay(random(2000, 5001));
  digitalWrite(red, LOW);
digitalWrite(green, HIGH);

startTime = millis();

while (digitalRead(button) == HIGH) {
    // ждём нажатия
}

reactionTime = millis() - startTime;
Serial.println(reactionTime);
 digitalWrite(green, HIGH);

  }


