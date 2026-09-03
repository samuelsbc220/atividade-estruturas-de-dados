# Parte 5 – Hands On 2: Monitoramento de Sensores

O programa utilizou uma matriz `sensores[5][24]`, representando 5 sensores com 24 medições cada.

No total, foram analisadas:

**5 × 24 = 120 medições**

## Resultados

### Média de cada sensor

| Sensor | Média |
|---|---:|
| Sensor 0 | 24,00 °C |
| Sensor 1 | 26,00 °C |
| Sensor 2 | 28,00 °C |
| Sensor 3 | 30,00 °C |
| Sensor 4 | 32,00 °C |

### Maior temperatura

- Maior temperatura: **37,00 °C**
- Sensor responsável: **Sensor 4**
- Horário: **9h**

### Média geral

A média das 120 medições foi:

**28,00 °C**

### Leituras acima do limite

Limite informado:

**28 °C**

Quantidade de leituras acima do limite:

**54 leituras**

## Análise

### Por que são necessários loops aninhados?

São necessários loops aninhados porque a matriz possui linhas e colunas.

Um loop percorre os sensores e o outro percorre as 24 medições de cada sensor.

### Qual o papel dos índices [i][j]?

Na matriz:

`[i][j]`

- `i` representa o sensor;
- `j` representa o horário da medição.

Por exemplo:

`sensores[2][15]`

representa a temperatura registrada pelo sensor 2 no horário 15.

### Quantas posições da matriz são percorridas?

A matriz possui:

**5 × 24 = 120 posições**

Portanto, para analisar todas as medições, são percorridas 120 posições.

### Relação entre linhas, colunas e quantidade de operações

Quanto maior o número de linhas e colunas, maior será a quantidade de posições que precisam ser analisadas.

Para uma matriz com `m` linhas e `n` colunas, o percurso completo possui complexidade:

**O(m × n)**
