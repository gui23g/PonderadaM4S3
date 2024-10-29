void setup() {
  pinMode(13, OUTPUT); // Vermelho
  pinMode(12, OUTPUT); // Amarelo
  pinMode(11, OUTPUT); // Verde
  pinMode(8, INPUT_PULLUP); // Botão
}

int state = 0; // Estado do botão
int additional_time = 2000; // Tempo adicional para o verde
unsigned long end = 0;
int actual_light = 0;

void updateEndTime() {
  unsigned long current_time = millis();
  
  if (actual_light == 0) {
    end = current_time + 6000; // Vermelho por 6 segundos
  } else if (actual_light == 1) {
    end = current_time + 2000; // Amarelo por 2 segundos
  } else if (actual_light == 2) {
    // Verde por 2 segundos + tempo adicional, se o botão foi pressionado
    end = current_time + 2000 + additional_time;
  } else if (actual_light == 3) {
    end = current_time + 2000; // Amarelo para transição de volta ao vermelho
  }
}

void loop() {
  unsigned long current_time = millis();

  // Atualiza o estado com base no tempo atual
  if (end <= current_time) {
    if (actual_light == 0) {
      // Vermelho -> Amarelo
      digitalWrite(13, LOW);
      digitalWrite(12, HIGH);
      digitalWrite(11, LOW);
      actual_light = 1;
    } else if (actual_light == 1) {
      // Amarelo -> Verde
      digitalWrite(13, LOW);
      digitalWrite(12, LOW);
      digitalWrite(11, HIGH);
      actual_light = 2;
    } else if (actual_light == 2) {
      // Verde -> Amarelo (após tempo adicional, se botão foi pressionado)
      digitalWrite(13, LOW);
      digitalWrite(12, HIGH);
      digitalWrite(11, LOW);
      actual_light = 3;
      state = 0;  // Volta ao estado normal após ciclo completo
    } else if (actual_light == 3) {
      // Amarelo -> Vermelho
      digitalWrite(13, HIGH);
      digitalWrite(12, LOW);
      digitalWrite(11, LOW);
      actual_light = 0;
    }
    updateEndTime(); // Atualiza o tempo para a próxima luz
  }

  // Lê o botão e ativa o tempo adicional para o verde
  if (digitalRead(8) == LOW) {
    actual_light = 1;
    state = 1; // Ativa o estado para tempo adicional
  }
}
