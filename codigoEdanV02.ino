#define ledRedA 8
#define ledYelA 9
#define ledGreA 10
#define ledRedB 5
#define ledYelB 6
#define ledGreB 7 

#define time1 5000
#define time2 2500
#define time3 250

void setup() 
{}

void modeOne(float tmp);
void modeTwo(float tmp);
void modeThree(float tmp);
void modeFour(float tmp);
void modeFive(float tmp);
void modeSix(float tmp);
void modeSeven(float tmp);

void loop() 
{
  modeOne();
  delay(time1); 
  
  modeTwo();
  delay(time3);
  
  modeThree();
  delay(time2);
  
  modeFour();
  delay(time3);
  
  modeFive();
  delay(time1);
  
  modeSix();
  delay(time3);
  
  modeSeven(); 
  delay(time2);
}

void modeOne()
{
  digitalWrite(ledRedA, HIGH);
  digitalWrite(ledYelA, LOW);
  digitalWrite(ledGreA, LOW);
  digitalWrite(ledGreB, HIGH);
  digitalWrite(ledYelB, LOW);
  digitalWrite(ledRedB, LOW); 
}

void modeTwo()
{
  digitalWrite(ledGreB, LOW);
}

void modeThree()
{
  digitalWrite(ledRedA, HIGH);
  digitalWrite(ledYelA, LOW);
  digitalWrite(ledGreA, LOW);
  digitalWrite(ledGreB, LOW);
  digitalWrite(ledYelB, HIGH);
  digitalWrite(ledRedB, LOW);
}

void modeFour()
{
  digitalWrite(ledYelB, LOW);
}

void modeFive()
{
  digitalWrite(ledRedA, LOW);
  digitalWrite(ledYelA, LOW);
  digitalWrite(ledGreA, HIGH);
  digitalWrite(ledGreB, LOW);
  digitalWrite(ledYelB, LOW);
  digitalWrite(ledRedB, HIGH);
}

void modeSix()
{
  digitalWrite(ledGreA, LOW);
}

void modeSeven()
{
  digitalWrite(ledRedA, LOW);
  digitalWrite(ledYelA, HIGH);
  digitalWrite(ledGreA, LOW);
  digitalWrite(ledGreB, LOW);
  digitalWrite(ledYelB, LOW);
  digitalWrite(ledRedB, HIGH);
}
