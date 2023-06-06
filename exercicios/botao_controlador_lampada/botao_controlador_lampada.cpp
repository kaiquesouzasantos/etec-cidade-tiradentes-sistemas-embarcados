int botao = 2, lampada = 4;

void setup() {
    pinMode(botao, INPUT); // BOTAO
    pinMode(lampada, OUTPUT); // LAMPADA
}

void loop() {  
    if (digitalRead(botao) == 1) {
        if (digitalRead(lampada) == 0){
    	    digitalWrite(lampada, HIGH);
        } else {
      	    digitalWrite(lampada, LOW);
        }
    }
}
