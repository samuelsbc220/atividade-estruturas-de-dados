# Parte 4 – Hands On 1: Array de Temperaturas

O programa utilizou um array com 10 posições para armazenar temperaturas.

## Resultados

Foram utilizadas as seguintes temperaturas:

`19.5, 21.0, 18.2, 25.3, 23.6, 27.0, 20.1, 24.8, 22.5, 26.4`

- Média: **22,84 °C**
- Maior temperatura: **27,00 °C**
- Índice do maior valor: **5**
- Menor temperatura: **18,20 °C**
- Índice do menor valor: **2**
- Valores acima da média: **5**
- Percursos do array: **20**

## Complexidade

O programa realiza dois percursos pelo array de 10 elementos.

No primeiro percurso, são lidas as temperaturas e calculada a soma.

No segundo percurso, são identificados o maior valor, o menor valor e a quantidade de temperaturas acima da média.

Assim, são realizados aproximadamente:

**10 + 10 = 20 percursos de posições**

Mesmo realizando dois percursos, a complexidade continua sendo:

**O(n)**

Isso ocorre porque a quantidade de operações cresce proporcionalmente ao número de elementos do array.
