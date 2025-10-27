#include <stdio.h>

int main() {

    printf("=== Desafio Xadrez ===\n\n");

    // ==========================
    // MOVIMENTAÇÃO DA TORRE
    // ==========================
    // Estrutura de repetição: FOR
    // Movimento: 5 casas para a DIREITA
    const int casas_torre = 5;
    printf("Movimentação da TORRE:\n");
    for (int i = 1; i <= casas_torre; i++) {
        printf("Direita\n");
    }

    // ==========================
    // MOVIMENTAÇÃO DA RAINHA
    // ==========================
    // Estrutura de repetição: WHILE
    // Movimento: 8 casas para a ESQUERDA
    const int casas_rainha = 8;
    printf("\nMovimentação da RAINHA:\n");
    int contadorRainha = 1;
    while (contadorRainha <= casas_rainha) {
        printf("Esquerda\n");
        contadorRainha++;
    }

    // ==========================
    // MOVIMENTAÇÃO DO BISPO
    // ==========================
    // Estrutura de repetição: DO-WHILE
    // Movimento: 5 casas na DIAGONAL (CIMA + DIREITA)
    const int casas_bispo = 5;
    printf("\nMovimentação do BISPO:\n");
    int contadorBispo = 1;
    do {
        printf("Cima, Direita\n");
        contadorBispo++;
    } while (contadorBispo <= casas_bispo);

    // ==========================
    // FIM DO PROGRAMA
    // ==========================
    printf("\nFim da simulação dos movimentos!\n");

    return 0;
}
