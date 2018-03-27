#define LS 4 // left sensor
#define RS 2 // center sensor
#define CS 3 // right sensor
#define LM1 7 // left motor M1a
#define LM2 8 // left motor M2a
#define RM1 5 // right motor M2a
#define RM2 6 // right motor M2b
void setup()
{
pinMode(LS, INPUT);
pinMode(RS, INPUT);
pinMode(CS, INPUT);
pinMode(LM1, OUTPUT);
pinMode(LM2, OUTPUT);
pinMode(RM1, OUTPUT);
pinMode(RM2, OUTPUT);
}
// COMMAND ORDER- LEFT RIGHT CENTER
void loop()
{
if(!(digitalRead(LS)) && !(digitalRead(RS)) && !(digitalRead(CS))) // Move Forward on line 111
{
digitalWrite(LM1, HIGH);
digitalWrite(LM2, LOW);
digitalWrite(RM1, HIGH);
digitalWrite(RM2, LOW);
}
if(!(digitalRead(LS)) && !(digitalRead(RS)) && digitalRead(CS)) // Move Forward on line 110
{
digitalWrite(LM1, HIGH);
digitalWrite(LM2, LOW);
digitalWrite(RM1, HIGH);
digitalWrite(RM2, LOW);
}
if(digitalRead(LS) && digitalRead(RS) && !(digitalRead(CS))) // Move Forward on line 001
{
digitalWrite(LM1, HIGH);
digitalWrite(LM2, LOW);
digitalWrite(RM1, HIGH);
digitalWrite(RM2, LOW);
}
if(!(digitalRead(LS)) && digitalRead(RS) && !(digitalRead(CS))) // turn left by rotationg left motors in forward 010
{
digitalWrite(LM1, HIGH);
digitalWrite(LM2, LOW);
digitalWrite(RM1, LOW);
digitalWrite(RM2, LOW);
}
if(!(digitalRead(LS)) && digitalRead(RS) && digitalRead(CS)) // Turn LEFT by rotating LEFT motors in forward and RIGHT ones in backward direction 011
{
digitalWrite(LM1, HIGH);
digitalWrite(LM2, LOW);
digitalWrite(RM1, LOW);
digitalWrite(RM2, HIGH);
}
if(digitalRead(LS) && !(digitalRead(RS)) && !(digitalRead(CS))) // Turn right by rotating right motors in forward 100
{
digitalWrite(LM1, LOW);
digitalWrite(LM2, LOW);
digitalWrite(RM1, HIGH);
digitalWrite(RM2, LOW);
}
if(digitalRead(LS) && !(digitalRead(RS)) && digitalRead(CS)) // Turn right by rotating right motors in forward and left ones in backward direction 101
{
digitalWrite(LM1, LOW);
digitalWrite(LM2, HIGH);
digitalWrite(RM1, HIGH);
digitalWrite(RM2, LOW);
}

if( digitalRead(LS) && digitalRead(RS) && digitalRead(CS)) // BACK IF IT GOES OUT OF RANGE 000
{
digitalWrite(LM1, LOW);
digitalWrite(LM2, HIGH);
digitalWrite(RM1, LOW);
digitalWrite(RM2, HIGH);
}
}

