#include <stdio.h>

int main()
{
    // Quantidade de casas que cada peca vai percorrer.
    int mov_torre = 5;
    int mov_bispo = 5;
    int mov_rainha = 8;

    // Movimento da torre: repetição com for.
    printf("\nmovimentando a torre...\n");
    for (int i = 0; i < mov_torre; i++)
    {
        printf("Direita\n");
    }

    // Movimento do bispo: repetição com while.
    printf("\nMovimentando o Bispo...\n");
    int contador_bispo = 0;
    while (contador_bispo < mov_bispo)
    {
        printf("cima, direita\n");
        contador_bispo++;
    }

    // Movimento da rainha: repetição com do-while
    printf("\nMovimentando a Rainha...\n");
    int c_rainha = 0;
    do
    {
        printf("Esquerda\n");
        c_rainha++;
    } while (c_rainha < mov_rainha);

    return 0;
}