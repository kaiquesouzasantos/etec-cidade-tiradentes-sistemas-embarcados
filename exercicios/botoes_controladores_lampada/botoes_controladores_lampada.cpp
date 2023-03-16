int botaoAcende = 2, botaoApaga = 3, lampada = 4;

void setup() {
    pinMode(botaoAcende, INPUT); // BOTAO -> ACENDE
    pinMode(lampada, OUTPUT); // LAMPADA
    pinMode(botaoApaga, INPUT); // BOTAO -> APAGA
}

void loop() {
    if (digitalRead(botaoAcende) == 1) {
        digitalWrite(lampada, HIGH);
    }
    if (digitalRead(botaoApaga) == 1) {
        digitalWrite(lampada, LOW);
    }
    delay(10);
}