# Parte 1 – Pesquisa: Bubble Sort e Quick Sort

## Bubble Sort

O Bubble Sort é um algoritmo de ordenação simples que compara elementos vizinhos de um vetor e troca suas posições quando estão na ordem incorreta.

A lógica consiste em percorrer o vetor várias vezes. A cada passagem, os maiores elementos vão sendo deslocados para o final.

### Complexidade

- Melhor caso: **O(n)**, na versão otimizada
- Caso médio: **O(n²)**
- Pior caso: **O(n²)**

### Vantagens

- Fácil de entender;
- Fácil de implementar;
- Utiliza pouca memória adicional;
- Bom para fins didáticos.

### Limitações

- Realiza muitas comparações e trocas;
- Possui baixo desempenho em vetores grandes.

### Uso adequado

É indicado para vetores pequenos, estudos e situações em que a simplicidade é mais importante que o desempenho.

### Uso não recomendado

Não é recomendado para grandes volumes de dados ou aplicações que exigem alta eficiência.

---

## Quick Sort

O Quick Sort é um algoritmo baseado na estratégia de divisão e conquista.

Ele escolhe um elemento chamado **pivô** e reorganiza o vetor, colocando elementos menores de um lado e maiores do outro. Depois, o mesmo processo é aplicado às partes menores do vetor.

### Complexidade

- Melhor caso: **O(n log n)**
- Caso médio: **O(n log n)**
- Pior caso: **O(n²)**

### Vantagens

- Muito eficiente na prática;
- Bom desempenho com grandes vetores;
- Geralmente realiza menos operações que algoritmos quadráticos.

### Limitações

- Mais complexo de implementar;
- Depende da escolha do pivô;
- Pode chegar a O(n²) no pior caso;
- Utiliza recursão.

### Uso adequado

É indicado para vetores médios e grandes, principalmente quando o desempenho é importante.

### Uso não recomendado

Pode não ser a melhor escolha quando é necessário garantir O(n log n) no pior caso.

---

## Tabela Comparativa

| Característica | Bubble Sort | Quick Sort |
|---|---|---|
| Princípio de funcionamento | Compara elementos vizinhos e realiza trocas | Divide o vetor utilizando um pivô |
| Melhor caso | O(n) | O(n log n) |
| Caso médio | O(n²) | O(n log n) |
| Pior caso | O(n²) | O(n²) |
| Uso de memória | O(1) | O(log n) em média |
| Vantagem principal | Simplicidade | Melhor desempenho |
| Limitação principal | Muitas operações | Depende da escolha do pivô |
| Aplicação recomendada | Vetores pequenos | Vetores médios e grandes |
