int CONT_LAMPADA = 0, botao = 2, lampada = 4;

void setup() {
    pinMode(botao, INPUT); // BOTAO
    pinMode(lampada, OUTPUT); // LAMPADA
}

void loop() {  
    if (digitalRead(botao) == 1) {
        if (CONT_LAMPADA == 0){
    	    digitalWrite(lampada, HIGH);
      	    CONT_LAMPADA = 1;
        } else if (CONT_LAMPADA == 1) {
      	    digitalWrite(lampada, LOW);
      	    CONT_LAMPADA = 0;
        }
    }
}