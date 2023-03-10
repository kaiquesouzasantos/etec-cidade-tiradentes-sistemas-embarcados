int portaVerde = 0, portaAzul = 1, portaVermelha = 2, ldr = A0;

void setup() {
     pinMode(portaVerde, OUTPUT); 
     pinMode(portaAzul, OUTPUT); 
     pinMode(portaVermelha, OUTPUT); 
     pinMode(ldr, INPUT);
}

void loop() {
    if (analogRead(ldr) <= 500) {
        digitalWrite(portaVerde, LOW);
        digitalWrite(portaAzul, LOW);
        digitalWrite(portaVermelha, HIGH);
    } else if (analogRead(ldr) > 500 and analogRead(ldr) <= 800) {
        digitalWrite(portaVerde, LOW);
        digitalWrite(portaAzul, HIGH);
        digitalWrite(portaVermelha, LOW);
    } else {
        digitalWrite(portaVerde, HIGH);
        digitalWrite(portaAzul, LOW);
        digitalWrite(portaVermelha, LOW);
    }
}