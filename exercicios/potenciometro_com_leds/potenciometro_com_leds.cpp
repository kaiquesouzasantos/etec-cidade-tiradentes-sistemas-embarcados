void setup() {
     pinMode(0, OUTPUT); // LED -> VERDE
     pinMode(1, OUTPUT); // LED -> AMARELO
     pinMode(2, OUTPUT); // LED -> VERMELHO
     pinMode(A0, INPUT); // POTENCIOMETRO

}

void loop() {
    if (analogRead(A0) <= 250) {
        digitalWrite(0, HIGH);
        digitalWrite(1, LOW);
        digitalWrite(2, LOW);
    } else if (analogRead(A0) > 250 and analogRead(A0) <= 350) {
        digitalWrite(0, LOW);
        digitalWrite(1, HIGH);
        digitalWrite(2, LOW);
    } else {
        digitalWrite(0, LOW);
        digitalWrite(1, LOW);
        digitalWrite(2, HIGH);
    }
}