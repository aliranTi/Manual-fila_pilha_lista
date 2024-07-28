# Estruturas de dados


As estruturas de dados são fundamentais na ciência da computação e na programação, pois organizam e armazenam dados de forma eficiente para que possam ser utilizados e manipulados com eficácia. Três estruturas de dados comuns são fila, lista e pilha. Aqui está um resumo de cada uma delas:

## Estruturas de dados basicas:

### Fila (Queue)

-   **Definição**: Uma fila é uma estrutura de dados linear que segue o princípio FIFO (First In, First Out), onde o primeiro elemento inserido é o primeiro a ser removido.
-   **Operações Principais**:
    -   **Enqueue (Enfileirar)**: Adiciona um elemento ao final da fila.
    -   **Dequeue (Desenfileirar)**: Remove e retorna o elemento do início da fila.
    -   **Peek/Front (Frente)**: Retorna o elemento do início da fila sem removê-lo.
    -   **IsEmpty (EstaVazio)**: Verifica se a fila está vazia.
-   **Aplicações Comuns**: Sistemas de gerenciamento de tarefas, filas de impressão, sistemas de buffer, algoritmos de busca em largura (BFS) em grafos.

### Lista (List)

-   **Definição**: Uma lista é uma coleção ordenada de elementos que podem ser acessados e manipulados por meio de índices. Existem várias implementações de listas, sendo as mais comuns as listas ligadas e as listas de arrays.
-   **Tipos**:
    -   **Lista Encadeada(Linked List)**: Consiste em uma série de nós, onde cada nó contém um valor e um ponteiro para o próximo nó na sequência. Pode ser simples (apontando apenas para o próximo nó) ou duplamente ligada (apontando para o próximo e para o nó anterior).
    -   **Lista de Array (Array List)**: Implementada com um array subjacente, onde os elementos são armazenados em posições contíguas na memória.
-   **Operações Principais**:
    -   **Insert (Inserir)**: Adiciona um elemento em uma posição específica.
    -   **Delete (Deletar)**: Remove um elemento de uma posição específica.
    -   **Get/Set (Pegar/Definir)**: Acessa ou modifica o elemento em uma posição específica.
    -   **Size (Tamanho)**: Retorna o número de elementos na lista.
-   **Aplicações Comuns**: Implementações de vetores dinâmicos, gerenciamento de memória, sequências de dados onde inserções e deleções são frequentes.

### Pilha (Stack)

-   **Definição**: Uma pilha é uma estrutura de dados linear que segue o princípio LIFO (Last In, First Out), onde o último elemento inserido é o primeiro a ser removido.
-   **Operações Principais**:
    -   **Push (Empilhar)**: Adiciona um elemento ao topo da pilha.
    -   **Pop (Desempilhar)**: Remove e retorna o elemento do topo da pilha.
    -   **Peek/Top (Topo)**: Retorna o elemento do topo da pilha sem removê-lo.
    -   **IsEmpty (EstaVazia)**: Verifica se a pilha está vazia.
-   **Aplicações Comuns**: Algoritmos de backtracking, avaliação de expressões, gestão de chamadas de função (pilha de chamadas), implementação de undo/redo em editores de texto.
