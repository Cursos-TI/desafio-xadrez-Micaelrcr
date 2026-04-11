#include <stdio.h>

int main()
{
    // Quantidade de casas que cada peça vai percorrer.
    int mov_torre = 5;
    int mov_bispo = 5;
    int mov_rainha = 8;
    int mov_cavalo = 0;
    // Movimento da torre: repetição com for.
    // A torre anda em linha reta; aqui simulamos 5 casas para a direita.
    printf("\nmovimentando a torre...\n");
    for (int i = 0; i < mov_torre; i++)
    {
        printf("Direita\n");
    }

    // Movimento do bispo: repetição com while.
    // O bispo anda na diagonal; representado cada passo como "cima, direita".
    printf("\nMovimentando o Bispo...\n");
    int contador_bispo = 0;
    while (contador_bispo < mov_bispo)
    {
        printf("Cima\n");
        printf("Direita\n");
        contador_bispo++;
    }

    // Movimento da rainha: repetição com do-while.
    // O do-while garante pelo menos uma execução do movimento.
    printf("\nMovimentando a Rainha...\n");
    int c_rainha = 0;
    do
    {
        printf("Esquerda\n");
        c_rainha++;
    } while (c_rainha < mov_rainha);

    // Movimento do cavalo em "L": 2 casas para baixo e 1 para a esquerda.
    // Loops aninhados: while externo e for interno.
    printf("\nMovimentando o Cavalo...\n");

    while (mov_cavalo < 1)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("Baixo\n");
        }
        printf("Esquerda\n");
        mov_cavalo++;
    }

    return 0;
}