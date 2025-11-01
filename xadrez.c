#include <stdio.h>

// ============================================================
// Função recursiva: movimentação da TORRE (para a direita)
// ============================================================
// Lógica: imprime "Direita" e chama a si mesma até atingir o limite.
// ============================================================
void moverTorre(int casas_restantes) {
    if (casas_restantes == 0) {
        return; // Condição de parada da recursão
    }
    printf("Direita\n");
    moverTorre(casas_restantes - 1); // Chamada recursiva
}

// ============================================================
// Função recursiva: movimentação da RAINHA (para a esquerda)
// ============================================================
// Lógica: semelhante à torre, mas imprime "Esquerda".
// ============================================================
void moverRainha(int casas_restantes) {
    if (casas_restantes == 0) {
        return; // Parada
    }
    printf("Esquerda\n");
    moverRainha(casas_restantes - 1);
}

// ============================================================
// Função recursiva + loops aninhados: movimentação do BISPO
// ============================================================
// Lógica:
// - Recursão controla o número total de movimentos (casas restantes).
// - Dentro da recursão, há dois loops aninhados:
//     * Loop externo: movimento vertical (Cima)
//     * Loop interno: movimento horizontal (Direita)
// ============================================================
void moverBispo(int casas_restantes) {
    if (casas_restantes == 0) {
        return; // Condição de parada
    }

    // Loops aninhados simulam o deslocamento diagonal
    for (int v = 1; v <= 1; v++) { // Movimento vertical
        printf("Cima\n");
        for (int h = 1; h <= 1; h++) { // Movimento horizontal
            printf("Direita\n");
        }
    }

    moverBispo(casas_restantes - 1); // Chamada recursiva
}

// ============================================================
// Função: movimentação do CAVALO (sem recursão)
// ============================================================
// Movimento em "L": 2 casas para CIMA e 1 casa para a DIREITA
// - Usa loops aninhados com múltiplas variáveis e controle via continue/break.
// ============================================================
void moverCavalo() {
    const int casas_cima = 2;
    const int casas_direita = 1;

    printf("\nMovimentação do CAVALO:\n");

    for (int i = 1, j = 0; i <= casas_cima; i++, j++) {
        printf("Cima\n");

        // Controle do loop com múltiplas condições
        if (i < casas_cima) {
            continue; // Ainda não completou o movimento vertical
        }

        // Quando chega ao topo, move para a direita
        int k = 0;
        while (k < casas_direita) {
            printf("Direita\n");
            k++;

            // Interrompe caso já tenha feito o "L" completo
            if (i == casas_cima && k == casas_direita) {
                break;
            }
        }
    }
}

// ============================================================
// Função principal
// ============================================================
int main() {
    printf("=== Desafio Xadrez (Versão Recursiva e Avançada) ===\n\n");

    // ==========================
    // MOVIMENTAÇÃO DA TORRE
    // ==========================
    printf("Movimentação da TORRE:\n");
    const int casas_torre = 5;
    moverTorre(casas_torre);

    // ==========================
    // MOVIMENTAÇÃO DA RAINHA
    // ==========================
    printf("\nMovimentação da RAINHA:\n");
    const int casas_rainha = 8;
    moverRainha(casas_rainha);

    // ==========================
    // MOVIMENTAÇÃO DO BISPO
    // ==========================
    printf("\nMovimentação do BISPO:\n");
    const int casas_bispo = 5;
    moverBispo(casas_bispo);

    // ==========================
    // MOVIMENTAÇÃO DO CAVALO
    // ==========================
    moverCavalo();

    // ==========================
    // FIM DO PROGRAMA
    // ==========================
    printf("\nFim da simulação dos movimentos!\n");

    return 0;
}
