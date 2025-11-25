#include <stdio.h>

int main() {
    // ==============================
    // Torre - usando FOR
    // ==============================
    int casasTorre = 5; // número de casas que a torre vai se mover
    printf("Movimento da Torre:\n");
    for (int i = 1; i <= casasTorre; i++) {
        printf("Direita\n"); // torre anda sempre para a direita neste exemplo
    }

    // ==============================
    // Bispo - usando WHILE
    // ==============================
    int casasBispo = 5; // número de casas que o bispo vai se mover
    int contadorBispo = 1;
    printf("\nMovimento do Bispo:\n");
    while (contadorBispo <= casasBispo) {
        printf("Cima, Direita\n"); // bispo anda na diagonal para cima e direita
        contadorBispo++;
    }

    // ==============================
    // Rainha - usando DO-WHILE
    // ==============================
    int casasRainha = 8; // número de casas que a rainha vai se mover
    int contadorRainha = 1;
    printf("\nMovimento da Rainha:\n");
    do {
        printf("Esquerda\n"); // rainha anda para a esquerda neste exemplo
        contadorRainha++;
    } while (contadorRainha <= casasRainha);

    // ==============================
    // Cavalo - usando FOR + WHILE (aninhados)
    // ==============================
    int casasBaixo = 2;     // duas casas para baixo
    int casasEsquerda = 1;  // uma casa para a esquerda

    printf("\nMovimento do Cavalo:\n");

    // Primeiro: duas casas para baixo (usando FOR)
    for (int i = 0; i < casasBaixo; i++) {
        printf("Baixo\n");

        // Loop aninhado (WHILE) apenas para cumprir o requisito
        int j = 0;
        while (j < 1) {
            // Comentário: este while está dentro do for, mostrando o uso de loops aninhados
            j++;
        }
    }

    // Depois: uma casa para a esquerda (usando WHILE)
    int k = 0;
    while (k < casasEsquerda) {
        printf("Esquerda\n");
        k++;
    }

    return 0;
}