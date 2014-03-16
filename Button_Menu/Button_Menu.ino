int button1=6,button2=7;
int pushbutton1=0,pushbutton2=0;
int led1=11,led2=12,led3=13;
int i=0;

void setup()
{
  pinMode(button1, INPUT); pinMode(button2, INPUT);
  pinMode(led1, OUTPUT); pinMode(led2, OUTPUT); pinMode(led3, OUTPUT);
}

void loop()
{
  i=0;
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  
  pushbutton1 = digitalRead(button1);
  if(pushbutton1 == HIGH)
  { delay(200); i=5; }

  while(i == 5)
  {
    i=1;
    while(i==1)
    {
      digitalWrite(led1, HIGH);delay(100);digitalWrite(led1, LOW);delay(100);
      pushbutton1 = digitalRead(button1);
      if(pushbutton1 == HIGH){delay(200); i=4;}
      pushbutton2 = digitalRead(button2);
      if(pushbutton2 == HIGH){delay(200); i=2;}
    }

    while(i==2)
    {
      digitalWrite(led2, HIGH);delay(100);digitalWrite(led2, LOW);delay(100);
      pushbutton1 = digitalRead(button1);
      if(pushbutton1 == HIGH){delay(200); i=4;}
      pushbutton2 = digitalRead(button2);
      if(pushbutton2 == HIGH){delay(200); i=3;}
    }
  
    while(i==3)
    {
      digitalWrite(led3, HIGH);delay(100);digitalWrite(led3, LOW);delay(100);
      pushbutton1 = digitalRead(button1);
      if(pushbutton1 == HIGH){delay(200); i=4;}
      pushbutton2 = digitalRead(button2);
      if(pushbutton2 == HIGH){delay(200); i=5;}  
    }
  }
  
}
