/*
 * Tema 4 - Movimentação de Peças de Xadrez - Nível Mestre
 * Autor: Hudson Nascimento de Lima
 * Data: 28/11/2025 
 */

#include <stdio.h>

/* ============================================================
   FUNÇÃO RECURSIVA - TORRE
   Movimento: Direita (uma casa por chamada)
   ============================================================ */
void moverTorre(int casas)
{
    if (casas > 0)
    {
        printf("Direita\n");
        moverTorre(casas - 1);  // chamada recursiva
    }
}

/* ============================================================
   FUNÇÃO RECURSIVA - BISPO
   Movimento: Diagonal (Cima + Direita)
   + loops aninhados (vertical e horizontal)
   ============================================================ */
void moverBispo(int casas)
{
    if (casas > 0)
    {
        for (int v = 0; v < 1; v++)
            for (int h = 0; h < 1; h++)
            {
                printf("Cima\n");
                printf("Direita\n");
            }

        moverBispo(casas - 1);  // recursão
    }
}

/* ============================================================
   FUNÇÃO RECURSIVA - RAINHA
   Movimento: Esquerda
   ============================================================ */
void moverRainha(int casas)
{
    if (casas > 0)
    {
        printf("Esquerda\n");
        moverRainha(casas - 1);
    }
}

/* ============================================================
   LOOP COMPLEXO - CAVALO
   Movimento: 2x Cima, 1x Direita
   Com loops aninhados + continue + break
   ============================================================ */
void moverCavalo(int repeticoes)
{
    for (int r = 1; r <= repeticoes; r++)
    {
        for (int i = 1; i <= 3; i++)
        {
            if (i == 3)
                continue;

            printf("Cima\n");
        }

        for (int j = 1; j <= 2; j++)
        {
            if (j == 1)
            {
                printf("Direita\n");
                break;
            }
        }
    }
}

int main()
{
    int opcao = -1;

    int torreCasas  = 5;
    int bispoCasas  = 5;
    int rainhaCasas = 8;
    int cavaloReps  = 1;

    while (opcao != 0)
    {
        printf("======================================\n");
        printf("       MENU DE MOVIMENTOS\n");
        printf("======================================\n");
        printf("1 - Torre\n");
        printf("2 - Bispo\n");
        printf("3 - Rainha\n");
        printf("4 - Cavalo\n");
        printf("0 - Sair\n");
        printf("Opcao: ");
        scanf("%d", &opcao);

        printf("\n");

        switch (opcao)
        {
            case 1:
                printf("Movimento da Torre (%d casas):\n", torreCasas);
                moverTorre(torreCasas);
                printf("\n");
                break;

            case 2:
                printf("Movimento do Bispo (%d casas):\n", bispoCasas);
                moverBispo(bispoCasas);
                printf("\n");
                break;

            case 3:
                printf("Movimento da Rainha (%d casas):\n", rainhaCasas);
                moverRainha(rainhaCasas);
                printf("\n");
                break;

            case 4:
                printf("Movimento do Cavalo (%d repeticao):\n", cavaloReps);
                moverCavalo(cavaloReps);
                printf("\n");
                break;

            case 0:
                printf("Encerrando o programa...\n\n");
                break;

            default:
                printf("Opcao invalida!\n\n");
                break;
        }
    }

    return 0;
}

/*
Bispo: 5 casas diagonal pra cima
Torre: 5 casas para direita
Raínha: 8 casas para esquerda
Cavlo: Continua 1 L pra cima e para direita
*/
