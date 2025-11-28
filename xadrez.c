/*
 * Tema 4 - Movimentação de Peças de Xadrez - Nível Aventureiro
 * Autor: Hudson Nascimento de Lima
 * Data: 27/11/2025
 */

#include <stdio.h>

int main()
{
    int opcao;
    int i, j;

    // Definição das variaveis
    int Torre = 5;
    int Bispo = 4;
    int Rainha = 3;
    int Cavalo = 1;

    /*
    Exemplo de movimentação das peças.
        Bispo  – 5 casas diagonal direita para cima  → usa FOR
        Torre  – 5 casas para direita                → usa WHILE
        Rainha – 8 casas para esquerda               → usa DO-WHILE
        Cavalo - 2 casas para cima e 1 para direita  → usa loop aninha for

    Direção diagonal exibida como: "cima, direita"
*/

    printf("Escolha a movimentação da peça:\n");
    printf("1 - Torre\n");
    printf("2 - Bispo\n");
    printf("3 - Rainha\n");
    printf("4 - Cavalo\n");
    printf("Opcao: ");
    scanf("%d", &opcao);

    printf("\n");

    switch (opcao)
    {

        /* ----------------------------------------------------------
            TORRE — ESTRUTURA WHILE
            Movimento: direita
        ---------------------------------------------------------- */
    case 1:
    {
        /* ----------------------------------------------------------
            TORRE — ESTRUTURA WHILE
            Movimento: direita
        ---------------------------------------------------------- */
        printf("Torre - Movimento de %d casas:\n", Torre);

        int i = 1;
        while (i <= Torre)
        {
            printf("direita\n");
            i++;
        }

        printf("\n");
    }
    break;

        /* ----------------------------------------------------------
            BISPO — ESTRUTURA FOR
            Movimento: diagonal direita para cima
        ---------------------------------------------------------- */
    case 2:
    {
        printf("Bispo - Movimento de %d casas:\n", Bispo);

        for (int i = 1; i <= Bispo; i++)
        {
            printf("cima, direita\n");
        }

        printf("\n");
    }
    break;

        /* ----------------------------------------------------------
            RAINHA — ESTRUTURA DO-WHILE
            Movimento: esquerda
        ---------------------------------------------------------- */
    case 3:
    {
        printf("Rainha - Movimento de %d casas:\n", Rainha);

        i = 1;
        do
        {
            printf("esquerda\n");
            i++;
        } while (i <= Rainha);

        printf("\n");
    }
    break;

        /* ----------------------------------------------------------
            CAVALO — FOR ANINHADO
            Movimento: Movimento em L
        ---------------------------------------------------------- */
    case 4:
    {
        printf("Cavalo - Movimento de %d casas:\n", Cavalo);

        for (int i = 1; i <= Cavalo; i++)
        {
            // 2 movimentos "para cima"
            for (int j = 1; j <= 2; j++)
            {
                printf("para cima\n");
            }

            // 1 movimento "para a direita"
            printf("para a direita\n");
        }

        printf("\n");
    }
    break;

    default:
        printf("Opcao invalida!\n");
        break;
    } /* fim do switch */

    return 0;
}
