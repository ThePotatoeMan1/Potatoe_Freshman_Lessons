void setup() {
  // put your setup code here, to run once:
  int x = analogRead (3);
  int y = digitalRead (6);
  pinMode (3, OUTPUT);
  Serial.begin (9600);
  pinMode (6, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int x = analogRead (3);
  int y = digitalRead (6);
      Serial.println (x);
  if (x > 200 and x < 400 and y == HIGH)
  {
    digitalWrite (3, HIGH);
    
  }
  else
  {
    digitalWrite (3, LOW);
  }
}
