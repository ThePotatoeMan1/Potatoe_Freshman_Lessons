void setup() {
  // put your setup code here, to run once:
pinMode (9, INPUT) ;
pinMode (6, OUTPUT) ;
//ooop

}

void loop() {
  
  // put your main code here, to run repeatedly:
int x = digitalRead (9) ;
if (x == HIGH) {
  digitalWrite (6, LOW) ;
}
  else {
    digitalWrite (6, HIGH) ;
}
}


