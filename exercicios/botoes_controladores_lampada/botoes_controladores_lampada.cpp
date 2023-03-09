void setup() {
    pinMode(2, INPUT); // BOTAO -> ACENDE
    pinMode(4, OUTPUT); // LAMPADA
    pinMode(3, INPUT); // BOTAO -> APAGA
}

void loop() {
    if (digitalRead(2) == 1) {
        digitalWrite(4, HIGH);
    }
    if (digitalRead(3) == 1) {
        digitalWrite(4, LOW);
    }
    delay(10);
}