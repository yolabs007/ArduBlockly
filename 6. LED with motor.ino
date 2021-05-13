// C++ code
//
int counter;

void setup()
{
  pinMode(8, OUTPUT);
  pinMode(3, OUTPUT);
}

void loop()
{
  for (counter = 0; counter < 5; ++counter) {
    digitalWrite(8, HIGH);
    delay(2000); // Wait for 2000 millisecond(s)
    digitalWrite(8, LOW);
    delay(2000); // Wait for 2000 millisecond(s)
    digitalWrite(3, HIGH);
    delay(2000); // Wait for 2000 millisecond(s)
    digitalWrite(3, LOW);
    delay(2000); // Wait for 2000 millisecond(s)
  }
}
