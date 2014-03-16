int button1=7,button2=8;
int pushbutton1,pushbutton2;
int led1=11,led2=12,led3=13;

int i=0;

void setup()
{
  Serial.begin(9600);
  pinMode(button1, INPUT); pinMode(button2, INPUT);
  pinMode(led1, OUTPUT); pinMode(led2, OUTPUT); pinMode(led3, OUTPUT);
}

void loop()
{
  pushbutton1 = digitalRead(button1);
  if(pushbutton1 = LOW)
  { delay(200);  Serial.println("MENU"); i=1; }
  
  while(i==1)
  {  
    Serial.println("Menu1");
    digitalWrite(led1, HIGH);delay(500);digitalWrite(led1, LOW);
    pushbutton2 = digitalRead(button2);
    if(pushbutton2 == LOW)
    {delay(200); i=2;}
  }
  while(i==2)
  {
    Serial.println("MENU2");
    digitalWrite(led2, HIGH);delay(500);digitalWrite(led2, LOW);
    pushbutton2 = digitalRead(button2);
    if(pushbutton2 == LOW)
    {delay(200); i=3;}
  }
  while(i==3)
  {
    Serial.println("MENU3");
    digitalWrite(led3, HIGH);delay(500);digitalWrite(led3, LOW);
    pushbutton1 = digitalRead(button1);
    if(pushbutton1 == LOW)
    {delay(200); i=0;}
    pushbutton2 = digitalRead(button2);
    if(pushbutton2 == LOW)
    {delay(200); i=1;}
  }
}
