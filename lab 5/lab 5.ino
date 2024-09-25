// C++ code
//
int ledVerde = 9;    
int ledAmarelo = 8;  
int ledVermelho = 7; 
int button = 2; 

void setup() {
  pinMode(ledVerde, OUTPUT);    
  pinMode(ledAmarelo, OUTPUT);  
  pinMode(ledVermelho, OUTPUT);
  pinMode(button, INPUT);
}

void loop() {
  
  
  digitalWrite(ledVermelho, HIGH);
  for (int i = 0; i < 10; i++) { 
    if (digitalRead(button) == HIGH) {
      
      digitalWrite(ledVerde, LOW);
      digitalWrite(ledAmarelo, LOW);
      delay(2000); 
      break; 
    }
    delay(100);
  }
  digitalWrite(ledVermelho, LOW);
  
 
  digitalWrite(ledVerde, HIGH);
  for (int i = 0; i < 10; i++) { 
    if (digitalRead(button) == HIGH) {
      
      digitalWrite(ledVerde, LOW);
      digitalWrite(ledAmarelo, LOW);
      digitalWrite(ledVermelho, HIGH);
      delay(2000); 
      break; 
    }
    delay(100);
  }
  digitalWrite(ledVerde, LOW);
  
  
  digitalWrite(ledAmarelo, HIGH);
  for (int i = 0; i < 10; i++) { 
    if (digitalRead(button) == HIGH) {
      
      digitalWrite(ledVerde, LOW);
      digitalWrite(ledAmarelo, LOW);
      digitalWrite(ledVermelho, HIGH);
      delay(2000); 
      break; 
    }
    delay(100);
  }
  digitalWrite(ledAmarelo, LOW);
}
