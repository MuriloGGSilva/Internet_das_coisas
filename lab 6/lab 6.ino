// C++ code
//
int potenciometroPin = A0; 
int ledPin = 8;           

void setup() {
  pinMode(ledPin, OUTPUT); 
}

void loop() {
  int valorPotenciometro = analogRead(potenciometroPin); 
  
  
  int valorLed = map(valorPotenciometro, 0, 1023, 0, 255);
  
 
  analogWrite(ledPin, valorLed);
  
  delay(10);
}
