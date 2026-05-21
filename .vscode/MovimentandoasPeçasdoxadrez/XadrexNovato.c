/*
 * Simulação de Movimentação de Peças de Xadrez
 * Desafio: Nível Novato
 *
 * Este programa simula o movimento de três peças de xadrez:
 *   - Torre:  5 casas para a direita       (usando for)
 *   - Bispo:  5 casas na diagonal (cima + direita) (usando while)
 *   - Rainha: 8 casas para a esquerda      (usando do-while)
 */
 
#include <stdio.h>
 
int main() {
 
    /* -------------------------------------------------------
     * TORRE — Movimento horizontal: 5 casas para a direita
     * Estrutura utilizada: for
     * ------------------------------------------------------- */
    int casas_torre = 5;
 
    printf("=== Torre (for) ===\n");
    for (int i = 0; i < casas_torre; i++) {
        printf("Direita\n");
    }
    printf("\n");
 
    /* -------------------------------------------------------
     * BISPO — Movimento diagonal: 5 casas para cima e à direita
     * Estrutura utilizada: while
     * A cada iteração imprime as duas direções que formam a diagonal
     * ------------------------------------------------------- */
    int casas_bispo = 5;
    int passo_bispo = 0;
 
    printf("=== Bispo (while) ===\n");
    while (passo_bispo < casas_bispo) {
        printf("Cima\n");
        printf("Direita\n");
        passo_bispo++;
    }
    printf("\n");
 
    /* -------------------------------------------------------
     * RAINHA — Movimento horizontal: 8 casas para a esquerda
     * Estrutura utilizada: do-while
     * O do-while garante ao menos uma execução antes da verificação
     * ------------------------------------------------------- */
    int casas_rainha = 8;
    int passo_rainha = 0;
 
    printf("=== Rainha (do-while) ===\n");
    do {
        printf("Esquerda\n");
        passo_rainha++;
    } while (passo_rainha < casas_rainha);
    printf("\n");
 
    return 0;
}