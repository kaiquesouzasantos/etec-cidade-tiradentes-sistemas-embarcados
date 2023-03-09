void setup() {
    pinMode(1, INPUT); // BOTAO
    pinMode(2, OUTPUT); // LED -> VERDE
    pinMode(8, OUTPUT); // LED -> VERMELHO PEDESTRE
    pinMode(4, OUTPUT); // LED -> AMARELO
    pinMode(7, OUTPUT); // LED -> VERMELHO
    pinMode(12, OUTPUT); // VERDE -> PEDESTRE

    digitalWrite(2, HIGH);
    digitalWrite(8, HIGH);
}

void loop() {
    if(digitalRead(1) == 1){
        delay(1000);
        
        verdeParaVermelhoCarro();

        delay(5000);

        vermelhoParaVerdeCarro();
    }
}

void verdeParaVermelhoCarro() {
    digitalWrite(2, LOW);
    digitalWrite(8, LOW);
    digitalWrite(4, HIGH);

    for (int counter = 0; counter < 50; ++counter) {
        digitalWrite(8, HIGH);
        delay(100); 
        digitalWrite(8, LOW);
        delay(100);
    }

    digitalWrite(4, LOW);
    digitalWrite(7, HIGH);
    digitalWrite(12, HIGH);
}

void vermelhoParaVerdeCarro() {
    digitalWrite(7, LOW);
    digitalWrite(12, LOW);
    digitalWrite(4, HIGH);

    for (int counter = 0; counter < 50; ++counter) {
        digitalWrite(12, HIGH);
        delay(100); 
        digitalWrite(12, LOW);
        delay(100);
    }

    digitalWrite(4, LOW);
    digitalWrite(2, HIGH);
    digitalWrite(8, HIGH);
}

