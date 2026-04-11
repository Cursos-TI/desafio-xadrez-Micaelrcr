#include <stdio.h>

// ================= TORRE =================
void mover_torre(int casas){
    if (casas <= 0) return;
    printf("Direita\n");
    mover_torre(casas - 1);
}

// ================= RAINHA =================
void mover_rainha(int casas){
    if (casas <= 0) return;
    printf("Esquerda\n");
    mover_rainha(casas - 1);
}

// ================= BISPO =================
void mover_bispo(int casas){
    if (casas <= 0) return;
    int vertical = 0;
    // Loop externo controla subida
    while (vertical < 1){
        int horizontal = 0;
        // Loop interno controla deslocamento lateral
        while (horizontal < 1){
            printf("Cima\n");
            printf("Direita\n");
            horizontal++;
        }
        vertical++;
    }
    mover_bispo(casas - 1);
}

// ================= CAVALO =================
void mover_cavalo(){
    printf("\nMovimentando o Cavalo...\n");
    int etapa;
    // Etapa 0 = movimento vertical (2 casas)
    // Etapa 1 = movimento horizontal (1 casa)
    for (etapa = 0; etapa < 2; etapa++){
        int passos = (etapa == 0) ? 2 : 1;
        for (int i = 0; i < passos; i++){
            if (etapa == 0){
                printf("Cima\n");
                continue; // continua até completar 2 movimentos verticais
            }
            printf("Direita\n");
            break; // garante apenas 1 movimento horizontal
        }
    }
}

// ================= MAIN =================
int main(){
    int mov_torre = 5;
    int mov_bispo = 5;
    int mov_rainha = 8;

    printf("\nMovimentando a Torre...\n");
    mover_torre(mov_torre);

    printf("\nMovimentando o Bispo...\n");
    mover_bispo(mov_bispo);

    printf("\nMovimentando a Rainha...\n");
    mover_rainha(mov_rainha);

    mover_cavalo();

    return 0;
}