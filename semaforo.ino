// C++ code
//
void setup()
{
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(7, OUTPUT);
}

void loop()
{
  digitalWrite(13, HIGH);
  digitalWrite(7, HIGH);
  delay(5000); // Wait for 1000 millisecond(s)
  digitalWrite(7, LOW);
  delay(500); // Wait for 1000 millisecond(s)
  digitalWrite(7, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(7, LOW);
  delay(500); // Wait for 1000 millisecond(s)
  digitalWrite(7, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(7, LOW);
  delay(500); // Wait for 1000 millisecond(s)
  digitalWrite(7, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(7, LOW);
  delay(10); // Wait for 1000 millisecond(s)
  digitalWrite(13, LOW);
  delay(10); // Wait for 1000 millisecond(s)
  digitalWrite(11, HIGH);
  digitalWrite(8, HIGH);
  delay(5000); // Wait for 1000 millisecond(s)
  digitalWrite(11, LOW);
  delay(10); // Wait for 1000 millisecond(s)
  digitalWrite(12, HIGH);
  delay(5000); // Wait for 1000 millisecond(s)
  digitalWrite(12, LOW);
  delay(10); // Wait for 1000 millisecond(s)
  digitalWrite(8, LOW);
  delay(10); // Wait for 1000 millisecond(s)
}
