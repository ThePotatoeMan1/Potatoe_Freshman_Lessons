
void setup() {
  // put your setup code here, to run once:
  int x = analogRead (3);
  Serial.begin (9600);
  pinMode (3, OUTPUT);
  pinMode (4, OUTPUT);
  pinMode (5, OUTPUT);
}

void loop() {

  int x = analogRead (3);
  Serial.println (x);
  if (x > 400)
  {
    digitalWrite (3, HIGH);
  }
  else
  {
    digitalWrite (3, LOW);
  }
  if (x > 600)
  {
    digitalWrite (4, HIGH);
  }
  
  else {
    digitalWrite (4, LOW);
  }
  if (x > 800)
  {
    digitalWrite (5, HIGH);
  }
  else 
  {
    digitalWrite (5, LOW);
  }
}
