# Parte 6 – Análise e Conclusão

## 1. O aumento do tamanho da estrutura de dados influencia a quantidade de operações?

Sim. Quanto maior a quantidade de elementos, maior tende a ser o número de operações necessárias para percorrer, buscar ou ordenar os dados.

Nos testes realizados, essa diferença ficou mais evidente quando o tamanho do array aumentou para 1.000 elementos.

## 2. Bubble Sort e Quick Sort crescem da mesma maneira quando o número de elementos aumenta?

Não.

O Bubble Sort apresenta complexidade média **O(n²)**, enquanto o Quick Sort apresenta complexidade média **O(n log n)**.

Por isso, o número de operações do Bubble Sort cresce muito mais rapidamente quando a quantidade de elementos aumenta.

## 3. Por que analisar somente o resultado final da ordenação não é suficiente para comparar algoritmos?

Porque dois algoritmos podem produzir exatamente o mesmo vetor ordenado, mas realizar quantidades muito diferentes de comparações, trocas e movimentações.

Por isso, é necessário analisar também a quantidade de operações e a complexidade computacional.

## Conclusão

Os experimentos demonstraram que o tamanho da entrada influencia diretamente a quantidade de operações realizadas.

O Bubble Sort apresentou bom funcionamento, mas realizou uma quantidade muito maior de operações em arrays grandes. Já o Quick Sort apresentou maior eficiência, principalmente no teste com 1.000 elementos.

Na busca sequencial em matrizes, foi possível observar que encontrar um valor no início exige poucas comparações, enquanto encontrar um valor no final ou procurar um valor inexistente pode exigir o percurso completo da matriz.

Os exercícios com arrays e matrizes também mostraram a importância dos índices e dos loops para acessar e processar os dados.

Assim, os testes confirmam que não basta analisar apenas o resultado final de um algoritmo. É importante considerar também a quantidade de operações realizadas e sua complexidade computacional.
