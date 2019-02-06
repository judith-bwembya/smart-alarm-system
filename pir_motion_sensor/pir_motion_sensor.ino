void setup() {
 
pinMode(3, INPUT);
pinMode(9, OUTPUT);
}

void loop() {

if(digitalRead(3) == HIGH){
  tone(9, 400);
 delay(300);
 noTone(9);
 delay(300);
  tone(9, 400);
 delay(300);
}
else {
 noTone(9);
}
}
