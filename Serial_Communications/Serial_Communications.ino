
void setup() {
  Serial.begin (9600);
  pinMode (4, INPUT);
  pinMode (5, OUTPUT);
  
}

void loop() {
  int x = digitalRead(4);
  if (x == HIGH)
  {
    Serial.println ("Success");
    digitalWrite (5, HIGH);
    
  }
  else
  { 
    Serial.println ("Fail");
    digitalWrite (5, LOW);
   
  } delay (1000);
}
