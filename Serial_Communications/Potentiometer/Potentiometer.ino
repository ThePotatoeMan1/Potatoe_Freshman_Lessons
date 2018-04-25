
void setup() {
  // put your setup code here, to run once:
  int x = analogRead (3);
  Serial.begin (9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int  x = analogRead (3);
  Serial.print (x);
  Serial.print ("\t");
  Serial.println (x*.0048828125);
  delay (1000);
}
