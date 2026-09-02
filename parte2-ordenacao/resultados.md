# Parte 2 – Experimento de Ordenação

Os testes foram realizados com arrays de **10, 20 e 1.000 elementos**.

Para cada tamanho, foram criadas duas cópias do mesmo array original, garantindo que o Bubble Sort e o Quick Sort utilizassem exatamente os mesmos dados.

## Resultados

| Tamanho do Array | Bubble Sort – Comparações | Bubble Sort – Trocas | Quick Sort – Comparações | Quick Sort – Movimentações |
|---:|---:|---:|---:|---:|
| 10 | 45 | 25 | 20 | 39 |
| 20 | 190 | 114 | 76 | 84 |
| 1.000 | 498.174 | 256.130 | 10.714 | 12.588 |

## Análise dos Resultados

### a) Qual algoritmo realizou menos operações para 10 elementos?

Considerando a soma dos contadores utilizados no experimento, o **Quick Sort** realizou menos operações.

- Bubble Sort: 45 comparações + 25 trocas = 70
- Quick Sort: 20 comparações + 39 movimentações = 59

### b) O comportamento permaneceu igual para 20 elementos?

Sim. O Quick Sort continuou apresentando uma quantidade menor de operações.

- Bubble Sort: 304 operações contabilizadas
- Quick Sort: 160 operações contabilizadas

### c) O que aconteceu quando o tamanho aumentou para 1.000 elementos?

A diferença entre os algoritmos aumentou bastante. O Bubble Sort realizou centenas de milhares de comparações e trocas, enquanto o Quick Sort apresentou uma quantidade muito menor de operações.

### d) Qual algoritmo apresentou maior crescimento da quantidade de operações?

O **Bubble Sort** apresentou o maior crescimento.

### e) Os resultados experimentais são coerentes com as complexidades teóricas estudadas?

Sim. O Bubble Sort possui complexidade média **O(n²)**, enquanto o Quick Sort possui complexidade média **O(n log n)**.

Por isso, conforme o tamanho do array aumentou, o Quick Sort se mostrou muito mais eficiente.

### f) Em qual situação você escolheria Bubble Sort?

Utilizaria o Bubble Sort em vetores pequenos ou para fins didáticos, devido à sua simplicidade.

### g) Em qual situação você escolheria Quick Sort?

Utilizaria o Quick Sort em vetores médios ou grandes, principalmente quando o desempenho for importante.
