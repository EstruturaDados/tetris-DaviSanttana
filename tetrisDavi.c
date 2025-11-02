#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 5 // tamanho máximo da fila

// Estrutura da peça
typedef struct
{
    char nome;
    int id;
} Peca;

// Estrutura da fila
typedef struct
{
    Peca pecas[MAX];
    int frente;
    int tras;
    int contador;
} Fila;

Peca gerarPeca()
{
    static int contadorID = 0;
    Peca nova;

    char tipos[] = {'I', 'O', 'T', 'L'};
    int indice = rand() % 4;

    nova.nome = tipos[indice];
    nova.id = ++contadorID;

    return nova;
}

// Inicializa a fila
void inicializarFila(Fila *f)
{
    f->frente = 0;
    f->tras = -1;
    f->contador = 0;
}

// Verifica se está vazia
int filaVazia(Fila *f)
{
    return (f->contador == 0);
}

// Verifica se está cheia
int filaCheia(Fila *f)
{
    return (f->contador == MAX);
}

// Enfileira (enqueue)
void enfileirar(Fila *f, Peca p)
{
    if (filaCheia(f))
    {
        printf("\nA fila está cheia! Não é possível adicionar mais peças.\n");
        return;
    }
    f->tras = (f->tras + 1) % MAX;
    f->pecas[f->tras] = p;
    f->contador++;
    printf("\nPeça adicionada: [%d - %c]\n", p.id, p.nome);
}

// Desenfileira (dequeue)
void desenfileirar(Fila *f)
{
    if (filaVazia(f))
    {
        printf("\nA fila está vazia! Nenhuma peça para jogar.\n");
        return;
    }

    Peca removida = f->pecas[f->frente];
    f->frente = (f->frente + 1) % MAX;
    f->contador--;
    printf("\nPeça jogada: [%d - %c]\n", removida.id, removida.nome);
}

// Exibe o estado atual da fila
void exibirFila(Fila *f)
{
    if (filaVazia(f))
    {
        printf("\nFila vazia!\n");
        return;
    }

    printf("\nFila atual:\n");
    int i, pos;
    for (i = 0; i < f->contador; i++)
    {
        pos = (f->frente + i) % MAX;
        printf("  [%d - %c]\n", f->pecas[pos].id, f->pecas[pos].nome);
    }
}

int main()
{
    srand(time(NULL));
    Fila fila;
    inicializarFila(&fila);
    int opcao;
    do
    {
        printf("\n==========================\n");
        printf("TETRIS STACK - MENU\n");
        printf("==========================\n");
        printf("1 - Jogar peça (remover da frente)\n");
        printf("2 - Adicionar nova peça ao final\n");
        printf("3 - Exibir fila\n");
        printf("0 - Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            desenfileirar(&fila);
            break;
        case 2:
            enfileirar(&fila, gerarPeca());
            break;
        case 3:
            exibirFila(&fila);
            break;
        case 0:
            printf("\nSaindo do jogo...\n");
            break;
        default:
            printf("\nOpção inválida!\n");
        }

    } while (opcao != 0);

    return 0;
}
