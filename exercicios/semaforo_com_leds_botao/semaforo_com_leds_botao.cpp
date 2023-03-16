int botao = 1, verde = 2, amarelo = 4, vermelho = 7, verdePedestre = 12, vermelhoPedestre = 8;

void setup() {
    pinMode(botao, INPUT); // BOTAO
    pinMode(verde, OUTPUT); // LED -> VERDE
    pinMode(vermelhoPedestre, OUTPUT); // LED -> VERMELHO PEDESTRE
    pinMode(amarelo, OUTPUT); // LED -> AMARELO
    pinMode(vermelho, OUTPUT); // LED -> VERMELHO
    pinMode(verdePedestre, OUTPUT); // VERDE -> PEDESTRE

    digitalWrite(verde, HIGH);
    digitalWrite(vermelhoPedestre, HIGH);
}

void loop() {
    if(digitalRead(botao) == 1){
        delay(1000);
        
        verdeParaVermelhoCarro();

        delay(5000);

        vermelhoParaVerdeCarro();
    }
}

void verdeParaVermelhoCarro() {
    digitalWrite(verde, LOW);
    digitalWrite(vermelhoPedestre, LOW);
    digitalWrite(amarelo, HIGH);

    for (int counter = 0; counter < 50; ++counter) {
        digitalWrite(vermelhoPedestre, HIGH);
        delay(100); 
        digitalWrite(vermelhoPedestre, LOW);
        delay(100);
    }

    digitalWrite(amarelo, LOW);
    digitalWrite(vermelho, HIGH);
    digitalWrite(verdePedestre, HIGH);
}

void vermelhoParaVerdeCarro() {
    digitalWrite(vermelho, LOW);
    digitalWrite(verdePedestre, LOW);
    digitalWrite(amarelo, HIGH);

    for (int counter = 0; counter < 50; ++counter) {
        digitalWrite(verdePedestre, HIGH);
        delay(100); 
        digitalWrite(verdePedestre, LOW);
        delay(100);
    }

    digitalWrite(amarelo, LOW);
    digitalWrite(verde, HIGH);
    digitalWrite(vermelhoPedestre, HIGH);
}

