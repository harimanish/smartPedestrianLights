#define r1 1
#define r2 4
#define g1 3
#define g2 12
#define pr 13
#define pg 14
#define hi HIGH
#define lo LOW


int val = 0 ;

void setup()
{
Serial.begin(9600);
pinMode(2,INPUT);
pinMode(1,OUTPUT);
pinMode(3,OUTPUT);
pinMode(4,OUTPUT);
pinMode(12,OUTPUT);//6
pinMode(13,OUTPUT);//7
pinMode(14,OUTPUT);//8
}

// Signal 1 : pin 1(r),2(y),3(g)
// Signal 2 : pin 4(r),5(y),12(g)
// p crossing siganl 13(r),14(g)
void loop()
{
  val = digitalRead(2);
  Serial.println(val);
  leftCycle();
  delay(5000);
  rightCycle();
  val = digitalRead(2);
  Serial.println(val);
  if(val==0)
  {delay(5000);
  peds();}
  delay(5000);
  
 } 
void leftCycle()
  {
    digitalWrite(r1,hi);
    digitalWrite(r2,lo);
    digitalWrite(g1,lo);
    digitalWrite(g2,hi);
    digitalWrite(pr,hi);
    digitalWrite(pg,lo);
  }
void rightCycle()
  {
    digitalWrite(r1,lo);
    digitalWrite(r2,hi);
    digitalWrite(g1,hi);
    digitalWrite(g2,lo);
    digitalWrite(pr,hi);
    digitalWrite(pg,lo);
   
    }  
void peds()
  {
    digitalWrite(r1,hi);
    digitalWrite(r2,hi);
    digitalWrite(g1,lo);
    digitalWrite(g2,lo);
    digitalWrite(pr,lo);
    digitalWrite(pg,hi);
    }
