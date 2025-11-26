#include <stdio.h>

// ==============================
// Função recursiva para a Torre
// ==============================
void moverTorre(int casas) {
    if (casas == 0) return; // caso base
    printf("Direita\n");
    moverTorre(casas - 1); // chamada recursiva
}

// ==============================
// Função recursiva para a Rainha
// ==============================
void moverRainha(int casas) {
    if (casas == 0) return; // caso base
    printf("Esquerda\n");
    moverRainha(casas - 1); // chamada recursiva
}

// ==============================
// Função recursiva + loops aninhados para o Bispo
// ==============================
void moverBispo(int casasVerticais, int casasHorizontais) {
    if (casasVerticais == 0) return; // caso base

    // Loop externo: movimento vertical
    for (int i = 0; i < casasVerticais; i++) {
        // Loop interno: movimento horizontal
        for (int j = 0; j < casasHorizontais; j++) {
            printf("Cima, Direita\n");
        }
    }

    // chamada recursiva para reduzir o movimento vertical
    moverBispo(casasVerticais - 1, casasHorizontais);
}

// ==============================
// Movimento complexo do Cavalo
// ==============================
void moverCavalo() {
    printf("Movimento do Cavalo:\n");

    // O Cavalo deve se mover em "L": duas casas para cima e uma para a direita
    int casasCima = 2;
    int casasDireita = 1;

    // Loop externo controla o movimento vertical
    for (int i = 0; i < casasCima; i++) {
        // Loop interno com múltiplas variáveis e condições
        for (int j = 0, k = 0; j < 1; j++, k++) {
            if (i == 1 && k == 0) {
                // Exemplo de uso de continue
                continue;
            }
            printf("Cima\n");
        }
    }

    // Movimento horizontal (direita)
    for (int i = 0; i < casasDireita; i++) {
        if (i == 0) {
            printf("Direita\n");
        } else {
            // Exemplo de uso de break (não será atingido neste caso)
            break;
        }
    }
}

int main() {
    // ==============================
    // Torre
    // ==============================
    int casasTorre = 5;
    printf("Movimento da Torre:\n");
    moverTorre(casasTorre);

    // ==============================
    // Bispo
    // ==============================
    int casasBispoVertical = 3;
    int casasBispoHorizontal = 1;
    printf("\nMovimento do Bispo:\n");
    moverBispo(casasBispoVertical, casasBispoHorizontal);

    // ==============================
    // Rainha
    // ==============================
    int casasRainha = 8;
    printf("\nMovimento da Rainha:\n");
    moverRainha(casasRainha);

    // ==============================
    // Cavalo
    // ==============================
    printf("\n");
    moverCavalo();

    return 0;
}
