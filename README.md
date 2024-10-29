# PonderadaM4S3

**Lista de materiais:**

| Componente                                                                                                 | Descrição | Quantidade |
|---------------------------------------------------------------------------------------------------------|--------------------|----------------------------------|
| Arduino UNO + Cabo                | Microcontrolador              | 1 |
| LED Verde              | Diodo emissor de luz (verde)              | 1 |
| LED Vermelho             | Diodo emissor de luz (vermelho)              | 1 |
| LED Amarelo             | Diodo emissor de luz (amarelo)              | 1 |
| Micro Push Button             | Botão de pressão momentânea             | 1 |
| Resistor             | Controle de corrente             | 3 |
| Protoboard             | 	Placa de prototipagem             | 1 |

A montagem foi feita, primeiramente, conectando o Arduino ao computador e enviando o código para ele. Em seguida, foi realizada a conexão através de um jumper macho-macho, ligando o GND do Arduino ao barramento negativo da protoboard. O negativo de todos os LEDs foi conectado de forma semelhante: ligando uma das pontas do resistor (um resistor para cada LED) ao barramento negativo e a outra em uma das colunas da protoboard; a partir dessa coluna, foi feita a conexão usando um jumper macho-fêmea no terminal negativo do LED. A conexão com o positivo dos LEDs foi feita diretamente do Arduino, utilizando jumpers macho-fêmea. Para avançar neste projeto, foi adicionado um botão que sempre coloca a próxima etapa do sinal como verde. A conexão do botão foi feita utilizando dois jumpers macho-macho, em que um liga o barramento do botão ao barramento negativo e o outro liga diretamente do Arduino para o barramento do botão.

## Avaliação em pares

### Avaliado: Yanomã Fernandes Konwski

| Critério                                                                                                 | Contempla (Pontos) | Contempla Parcialmente (Pontos) | Não Contempla (Pontos) | Observações do Avaliador |
|---------------------------------------------------------------------------------------------------------|--------------------|----------------------------------|--------------------------|---------------------------|
| Montagem física com cores corretas, boa disposição dos fios e uso adequado de resistores                | Até 3              | Até 1,5                            | 0                        |               3            |
| Temporização adequada conforme tempos medidos com auxílio de algum instrumento externo                  | Até 3              | Até 1,5                          | 0                        |             3              |
| Código implementa corretamente as fases do semáforo e estrutura do código (variáveis representativas e comentários) | Até 3              | Até 1,5                          | 0                        |     3                      |
| Extra: Implmeentou um componente de liga/desliga no semáforo e/ou usou ponteiros no código | Até 1              |  Até 0,5                         | 0                        |       O extra do projeto do Yanomã foi o acionamento de um buzzer toda vez que o sinal chegava ao sinal vermelho.                   |
|  |                                                             |  | |**Pontuação Total**: 10|
