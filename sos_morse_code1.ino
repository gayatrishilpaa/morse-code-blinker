int pin=13;
int dot=200;
int dah=750;
  
void setup()
{
pinMode(pin,OUTPUT);
}

void loop()
{
//S
digitalWrite(pin,HIGH);
delay(dot);
digitalWrite(pin,LOW);
delay(dot);
digitalWrite(pin,HIGH);
delay(dot);
digitalWrite(pin,LOW);
delay(dot);
digitalWrite(pin,HIGH);
delay(dot);
digitalWrite(pin,LOW);
delay(dot);
//O
digitalWrite(pin,HIGH);
delay(dah);
digitalWrite(pin,LOW);
delay(dah);
digitalWrite(pin,HIGH);
delay(dah);
digitalWrite(pin,LOW);
delay(dah);
digitalWrite(pin,HIGH);
delay(dah);
digitalWrite(pin,LOW);
delay(dah);  
//S  
digitalWrite(pin,HIGH);
delay(dot);
digitalWrite(pin,LOW);
delay(dot);
digitalWrite(pin,HIGH);
delay(dot);
digitalWrite(pin,LOW);
delay(dot);
digitalWrite(pin,HIGH);
delay(dot);
digitalWrite(pin,LOW);
delay(dot);
//end pause before new message 
delay(2000);
  }