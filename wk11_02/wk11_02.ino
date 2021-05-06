  const int buttonPin=2;
  const int ledPin=13;

  int buttonState=0;
  
  void setup() {
  // put your setup code here, to run once:
   Serial.begin(9600);
   pinMode(ledPin,OUTPUT);
   pinMode(buttonPin,INPUT_PULLUP);
  
  
}

void loop() {
  // put your main code here, to run repeatedly:
buttonState=digitalRead(buttonPin);
if(buttonState==HIGH){
  digitalWrite(ledPin,HIGH);
}
else{
  digitalWrite(ledPin,LOW);
}
Serial.println(buttonState);
delay(1);
}
