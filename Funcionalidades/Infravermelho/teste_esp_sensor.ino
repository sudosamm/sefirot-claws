#define PINO_SENSOR 17

void setup() {
  Serial.begin(115200);
  Serial.println("Olá, mundo! Hora de aprender, né?");
  pinMode(PINO_SENSOR, INPUT);
  delay(5000);
  Serial.println("Hora de iniciar o serviço...");
  Serial.println("================================");
  Serial.println("Receptor IR Pronto para leitura!");
  Serial.println("================================");
}

void leitura() {

  // Enquanto o sensor não receber sinais, ele permanece no estado HIGH
  if (digitalRead(PINO_SENSOR) == LOW) {
    // A duração do pulso é medida enquanto o sensor estiver no pulso LOW
    // Basicamente: o leitor permanece em estado HIGH para receber sinais
    // Ao receber um sinal, ele entra em estado LOW
    // A primeira leitura é executada assim que o sensor entra novamente em estado HIGH
    // O sensor possui um limite de 50000us(50ms) para evitar que fique lendo eternamente
    // Quando o primeiro pulso entra em estado LOW, a variável "pulsoBaixo" recebe o tempo utilizado na primeira leitura
    unsigned long pulsoBaixo = pulseIn(PINO_SENSOR, HIGH, 50000);

    // O protocolo NEC padrão inicia com o pulso LOW de ~4500us
    if (pulsoBaixo > 3500 && pulsoBaixo < 5500) {
      uint32_t codigoCompleto = 0;
      bool leituraOk = true;

      // Um sinal NEC completinho envia exatamente 32 bits de dados
      for (int i = 0; i < 32; i++) {
        // Aqui faremos a leitura do tempo em que o pino fica em estado HIGH para determinar o valor de cada bit
        unsigned long duracaoBit = pulseIn(PINO_SENSOR, HIGH, 10000);

        // No padrão NEC:
        // SE o tempo em HIGH for ~560us = Bit 0
        // SE o tempo em HIGH for ~1600us = Bit 1
        if (duracaoBit > 200 && duracaoBit < 800) {
          // Bit 0
        }
        else if (duracaoBit >= 800 && duracaoBit < 2000) {
          codigoCompleto |= (1UL << i); // Bit 1
        }
        else {
          // Se o tempo lido estiver fora do padrão, o frame é descartado
          leituraOk = false;
          break;
        }
      }

      if (leituraOk && codigoCompleto != 0) {
        // Divide o código de 32 bits nos componentes NEC padrão
        uint8_t endereco = codigoCompleto & 0xFF;
        uint8_t comando = (codigoCompleto >> 16) & 0xFF;
        
        Serial.println("===================================");
        Serial.println("=-- Sinal Caputado com Sucesso! --=");
        Serial.print("     Código Bruto:    0x");
        Serial.println(codigoCompleto, HEX);
        Serial.print("     Endereço:        0x");
        Serial.println(endereco, HEX);
        Serial.print("     Comando (Botão): 0x");
        Serial.println(comando, HEX);
        Serial.println("===================================");
      }
      
      // Pausa rápida para evitar leituras duplicadas ao apertar o botão repetidamente
      delay(250);
    }
  }
}

void loop() {
  leitura();
  delay(1);
}
