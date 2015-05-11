

char data ;

int line1 = 2;
int line2 = 4;

void setup()
{
 Serial.begin(9600);
 pinMode(line1, OUTPUT);
 pinMode(line2, OUTPUT);
 
}

void loop()
{
if(Serial.available() > 0) // if data is available 
{
    data = Serial.read();
  if (data == '1')
  {
digitalWrite(line1, HIGH);
digitalWrite(line2, LOW);
  }
if(data == '2')
{
digitalWrite(line2, HIGH);
digitalWrite(line1, LOW);
}
  
}

  
}
