#include <Servo.h> // servo library
Servo s1 , s2, s3, s4, s5;
int key;
void setup()
{
  Serial.begin(9600);
  s1.attach(D1);  // servo attach D3 pin of arduino
  s2.attach(D2);
  s3.attach(D4);
  s4.attach(D7);
  s5.attach(D5);
}
void loop()
{
  if(Serial.available()>0)
  {
    int key = Serial.read();
  switch (key) {
    case 'a':
      s1.write(90);
      delay(1000);
      s2.write(90);
      delay(1000);
      s3.write(90);
      delay(1000);
      s4.write(90);
      delay(1000);
      s5.write(90);
      delay(1000);
      Serial.println("on");
      break;
    case 'b':
      s1.write(0);
      delay(1000);
      s2.write(0);
      delay(1000);
      s3.write(0);
      delay(1000);
      s4.write(0);
      delay(1000);
      s5.write(0);
      delay(1000);
      Serial.println("off");
      break;
    case 'p':
      s1.write(0);
      delay(1000);
      s2.write(90);
      delay(1000);
      s3.write(90);
      delay(1000);
      s4.write(0);
      delay(1000);
      s5.write(0);
      delay(1000);
      Serial.println("peace");
    case 'd':
      s1.write(90);
      delay(1000);
      s2.write(0);
      delay(1000);
      s3.write(0);
      delay(1000);
      s4.write(0);
      delay(1000);
      s5.write(0);
      delay(1000);
      Serial.println("All the Best");
      
    default:
      Serial.println("nothing");
  }}
  }
