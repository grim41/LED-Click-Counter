int count=0;
int newcount;
void setup()
{
Serial.begin(9600);
pinMode(5,INPUT);
pinMode(6,OUTPUT);
pinMode(7,OUTPUT);
pinMode(8,OUTPUT);
}
void loop()
{

if(digitalRead(5)==HIGH)
{
newcount=count+1;
if(newcount!=count)
{
Serial.println(newcount);
switch (newcount)
{
case 1: digitalWrite(6,HIGH);
break;
case 2: digitalWrite(7,HIGH);
break;
case 3: digitalWrite(8,HIGH);
break;
default:
digitalWrite(6,LOW);
digitalWrite(7,LOW);
digitalWrite(8,LOW);
newcount=0;
break;
}
count=newcount;
}
}
delay(170);
}