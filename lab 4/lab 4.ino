// C++ code
//
//
 //
int ledVerde = 9;    
int ledAmarelo = 8;  
int ledVermelho = 7; 

void setup() {
  pinMode(ledVerde, OUTPUT);    
  pinMode(ledAmarelo, OUTPUT);  
  pinMode(ledVermelho, OUTPUT); 
}

void loop() {
 
  digitalWrite(ledVermelho, HIGH);
  delay(5000);
  digitalWrite(ledVermelho, LOW);
  
  digitalWrite(ledAmarelo, HIGH);
  delay(2000);
  digitalWrite(ledAmarelo, LOW);
  
  digitalWrite(ledVerde, HIGH);
  delay(5000);
  digitalWrite(ledVerde, LOW);
  
  digitalWrite(ledAmarelo, HIGH);
  delay(2000);
  digitalWrite(ledAmarelo, LOW);
}
