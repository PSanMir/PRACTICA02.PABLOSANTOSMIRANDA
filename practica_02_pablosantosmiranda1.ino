/*
  Programa para encender varios LEDS en función do
  valor dunha variable.
  
  Autor: Pablo Santos Miranda.
  Data: Novembro 2026
*/


//PARA HACER EL APARTADO 1 BASTARÍA CON ESCRIBIR EL COLOR QUE
//QUEREMOS QUE SE ILUMINE ENTRE LAS PARENTESIS DE LA VARIABLE 
//COLOR
String color = "";
//String color = "azul"; POR EJEMPLO
void setup() {
  pinMode(12, OUTPUT); 
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(7, OUTPUT);
  Serial.begin(9600); 
}

void loop() {
  if(Serial.available()) {
    color = Serial.readString(); 
  }
  
  if(color == "rojo") {
    digitalWrite(12, HIGH);
    Serial.print("LED rojo encendido; "); 
    delay(500); 
    digitalWrite(12, LOW); 
    Serial.println("LED rojo apagado");
    delay(500); 
  }
  else if(color == "verde") {
    digitalWrite(11, HIGH);
    Serial.print("LED verde encendido; "); 
    delay(500); 
    digitalWrite(11, LOW); 
    Serial.println("LED verde apagado");
    delay(500); 
  }
  else if(color == "azul") {
    digitalWrite(10, HIGH);
    Serial.print("LED azul apagado; "); 
    delay(500); 
    digitalWrite(10, LOW); 
    Serial.println("LED azul apagado");
    delay(500); 
  }
  else if(color == "amarillo") {
    digitalWrite(9, HIGH);
    Serial.print("LED amarillo apagado; "); 
    delay(500); 
    digitalWrite(9, LOW); 
    Serial.println("LED amarillo apagado");
    delay(500); 
  }
  else if(color == "naranja") {
    digitalWrite(8, HIGH);
    Serial.print("LED naranja apagado; "); 
    delay(500); 
    digitalWrite(8, LOW); 
    Serial.println("LED naranja apagado");
    delay(500); 
  }
  else if(color == "blanco") {
    digitalWrite(7, HIGH);
    Serial.print("LED blanco apagado; "); 
    delay(500); 
    digitalWrite(7, LOW); 
    Serial.println("LED blanco apagado");
    delay(500); 
  }
  else {
    Serial.println("Todos los LEDs apagados"); 
  }
}
