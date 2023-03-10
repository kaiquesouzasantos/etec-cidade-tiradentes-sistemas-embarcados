int portaVerde = 0, portaAzul = 1, portaVermelha = 2, potenciometro = A0;

void setup() {
     pinMode(portaVerde, OUTPUT); 
     pinMode(portaAzul, OUTPUT); 
     pinMode(portaVermelha, OUTPUT); 
     pinMode(potenciometro, INPUT);
}

void loop() {
    if (analogRead(potenciometro) <= 250) {
        digitalWrite(portaVerde, LOW);
        digitalWrite(portaAzul, LOW);
        digitalWrite(portaVermelha, HIGH);
    } else if (analogRead(potenciometro) > 250 and analogRead(potenciometro) <= 550) {
        digitalWrite(portaVerde, LOW);
        digitalWrite(portaAzul, HIGH);
        digitalWrite(portaVermelha, LOW);
    } else {
        digitalWrite(portaVerde, HIGH);
        digitalWrite(portaAzul, LOW);
        digitalWrite(portaVermelha, LOW);
    }
}