# Parte 3 – Investigação de Busca em Matrizes

Foi utilizada uma busca sequencial com loops aninhados para percorrer as matrizes.

Foram testadas três situações:

- valor no início;
- valor no final;
- valor inexistente.

## Resultados

| Matriz | Nº de elementos | Busca no início | Busca no final | Valor inexistente |
|---|---:|---:|---:|---:|
| 2 × 2 | 4 | 1 | 4 | 4 |
| 10 × 10 | 100 | 1 | 100 | 100 |
| 100 × 100 | 10.000 | 1 | 10.000 | 10.000 |

## Análise

### a) Por que encontrar um elemento no início exige menos operações?

Porque a busca sequencial começa pela primeira posição da matriz. Se o valor estiver logo no início, apenas uma comparação é necessária.

### b) O que acontece quando o elemento procurado não existe?

O algoritmo precisa percorrer todas as posições da matriz antes de concluir que o valor não foi encontrado.

### c) Qual é o pior caso da busca sequencial?

O pior caso ocorre quando o elemento está na última posição ou quando ele não existe na matriz.

### d) Como o aumento das dimensões da matriz influencia a quantidade de operações?

Quanto maior a matriz, maior é a quantidade de posições que podem precisar ser percorridas e, consequentemente, maior é a quantidade de comparações.

### e) Qual a complexidade da busca sequencial em uma matriz com m linhas e n colunas?

A complexidade no pior caso é:

**O(m × n)**

Isso ocorre porque podem ser analisadas todas as posições da matriz.
