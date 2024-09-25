// C++ code
//
 int foto = A0;   // Pino de entrada analógica para o fotorresistor
 int ledPin = 9;    // Pino de saída digital para o LED


void setup() {
  pinMode(ledPin, OUTPUT);  // Define o pino do LED como saída
 pinMode(foto,INPUT);       // Inicializa a comunicação serial
}

void loop() {
 int fotoValor = analogRead(foto);
  if (fotoValor >=  1022){
    digitalWrite(ledPin,HIGH);
  }else{
  digitalWrite(ledPin,LOW);
  }
}           

 

