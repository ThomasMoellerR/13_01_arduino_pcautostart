void setup() {

  pinMode(12, OUTPUT);
  digitalWrite(12, LOW);
    
  delay(3000);   
  digitalWrite(12, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(100);              // wait for a second
  digitalWrite(12, LOW);    // turn the LED off by making the voltage LOW
  delay(100);              // wait for a second




    
}

void loop() {
  // put your main code here, to run repeatedly:

}
