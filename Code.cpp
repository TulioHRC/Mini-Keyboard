int d = 2;
int r = 3;
int m = 4;
int f = 5;
int s = 6;
int buzzer = 7;
int time = 150;

void setup()
{
  pinMode(d, INPUT);
  pinMode(r, INPUT);
  pinMode(m, INPUT);
  pinMode(f, INPUT);
  pinMode(s, INPUT);
  pinMode(buzzer, OUTPUT);
}

void loop()
{
  if(digitalRead(d)){
  	tone(buzzer, 262, time);
  }
  if(digitalRead(r)){
  	tone(buzzer, 294, time);
  }
  if(digitalRead(m)){
  	tone(buzzer, 330, time);
  }
  if(digitalRead(f)){
  	tone(buzzer, 349, time);
  }
  if(digitalRead(s)){
  	tone(buzzer, 392, time);
  }
}