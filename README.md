# Atividade Avaliativa – Estruturas de Dados

**Aluno:** Samuel Borges Cordeiro  
**Disciplina:** Estruturas de Dados  
**Instituição:** UDF  

## Objetivo

Investigar o comportamento de arrays, matrizes, algoritmos de ordenação e busca, analisando a quantidade de operações realizadas e a complexidade computacional.

---

# Parte 1 – Bubble Sort e Quick Sort

## Bubble Sort

O Bubble Sort compara elementos vizinhos e realiza trocas quando eles estão na ordem errada. Esse processo é repetido até que o vetor esteja ordenado.

- Melhor caso: O(n)
- Caso médio: O(n²)
- Pior caso: O(n²)

### Vantagens
- Fácil de entender e implementar;
- Utiliza pouca memória;
- Adequado para vetores pequenos.

### Limitações
- Realiza muitas comparações e trocas;
- É pouco eficiente para grandes conjuntos de dados.

### Uso recomendado
Vetores pequenos e situações didáticas.

### Uso não recomendado
Grandes volumes de dados ou aplicações que precisam de alto desempenho.

---

## Quick Sort

O Quick Sort utiliza a estratégia de divisão e conquista. Ele escolhe um pivô e divide o vetor entre valores menores e maiores que esse pivô.

- Melhor caso: O(n log n)
- Caso médio: O(n log n)
- Pior caso: O(n²)

### Vantagens
- Muito eficiente na prática;
- Bom desempenho em vetores grandes;
- Geralmente realiza menos operações que o Bubble Sort.

### Limitações
- É mais complexo que o Bubble Sort;
- Pode atingir O(n²) dependendo da escolha do pivô;
- Utiliza recursão.

### Uso recomendado
Vetores médios e grandes.

### Uso não recomendado
Situações em que é necessário garantir O(n log n) no pior caso.

## Comparação

| Característica | Bubble Sort | Quick Sort |
|---|---|---|
| Princípio | Compara elementos vizinhos | Divide o vetor utilizando um pivô |
| Melhor caso | O(n) | O(n log n) |
| Caso médio | O(n²) | O(n log n) |
| Pior caso | O(n²) | O(n²) |
| Uso de memória | O(1) | O(log n) em média |
| Vantagem principal | Simplicidade | Melhor desempenho |
| Limitação principal | Muitas operações | Depende da escolha do pivô |
| Aplicação recomendada | Vetores pequenos | Vetores médios e grandes |
