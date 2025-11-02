# Desafio Tetris Stack - Controle de Peças com Estruturas de Dados

Bem-vindo ao desafio **"Tetris Stack"**! Neste jogo inspirado nas mecânicas clássicas de montagem de peças, o jogador deve organizar, reservar e manipular peças em tempo real. Para isso, você, como programador, será responsável por implementar as estruturas de controle que regem a lógica das peças.

A empresa **ByteBros**, especializada em jogos educacionais de lógica e programação, contratou você para desenvolver o sistema de gerenciamento de peças, utilizando estruturas como **fila circular** e **pilha**.

O desafio está dividido em três níveis: **Novato**, **Aventureiro** e **Mestre**, com cada nível adicionando mais complexidade ao anterior.  
**Você deve escolher qual desafio deseja realizar.**

🚨 **Atenção:** O nível Novato foca apenas na fila de peças, usando conceitos básicos de structs, arrays e modularização.

## 🎮 Nível Novato: Fila de Peças Futuras

No nível Novato, você criará o sistema inicial de controle das peças futuras do jogo Tetris Stack. As peças possuem um **nome** (representando o tipo, como 'I', 'O', 'T', 'L') e um **id** exclusivo (identificador numérico).

🚩 **Objetivo:** Criar um programa em C que simula uma **fila circular** de 5 peças com as seguintes funcionalidades:

*   Visualizar a fila atual
*   Jogar (remover) a peça da frente
*   Inserir automaticamente uma nova peça no final da fila

⚙️ **Funcionalidades do Sistema:**

*   Inicializar a fila com 5 peças geradas automaticamente.
*   Permitir que o usuário:
    *   Jogue uma peça (dequeue)
    *   Insira uma nova peça (enqueue)
    *   Visualize o estado atual da fila
*   Manter a fila circular, reaproveitando o espaço.

📥 **Entrada** e 📤 **Saída de Dados:**

*   O programa utiliza menus via terminal.
*   A cada ação, o estado atualizado da fila é exibido com `printf`.

**Simplificações para o Nível Novato:**

*   Trabalhe **apenas com a fila**.
*   A fila deve conter **exatamente 5 elementos**.
*   Use uma função `gerarPeca()` para criar automaticamente novas peças.
*   Utilize structs e arrays. Não implemente pilha.

