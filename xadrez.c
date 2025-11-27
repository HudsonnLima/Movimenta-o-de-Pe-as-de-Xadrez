/*
 * Tema 4 - Movimentação de Peças de Xadrez
 * Autor: Hudson Nascimento de Lima
 * Data: 26/11/2025
 */

#include <stdio.h>

/*
    Exemplo de movimentação das peças.
        Bispo  – 5 casas diagonal direita para cima  → usa FOR
        Torre  – 5 casas para direita                → usa WHILE
        Rainha – 8 casas para esquerda               → usa DO-WHILE

    Direção diagonal exibida como: "cima, direita"
*/

int main() {

    // Definição das variaveis
    int Bispo = 5;
    int Torre = 5;
    int Rainha = 8;

    printf("===== MOVIMENTOS DAS PECAS =====\n\n");

    /* ----------------------------------------------------------
        BISPO — ESTRUTURA FOR
        Movimento: diagonal direita para cima
    ---------------------------------------------------------- */
    printf("Bispo - Movimento de %d casas:\n", Bispo);

    for (int i = 1; i <= Bispo; i++) {
        printf("cima, direita\n");
    }

    printf("\n");



    /* ----------------------------------------------------------
        TORRE — ESTRUTURA WHILE
        Movimento: direita
    ---------------------------------------------------------- */
    printf("Torre - Movimento de %d casas:\n", Torre);

    int i = 1;
    while (i <= Torre) {
        printf("direita\n");
        i++;
    }

    printf("\n");



    /* ----------------------------------------------------------
        RAINHA — ESTRUTURA DO-WHILE
        Movimento: esquerda
    ---------------------------------------------------------- */
    printf("Rainha - Movimento de %d casas:\n", Rainha);

    i = 1;
    do {
        printf("esquerda\n");
        i++;
    } while (i <= Rainha);

    printf("\n");

    return 0;
}
