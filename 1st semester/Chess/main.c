#include <stdio.h>

void moverTorre(int casas)
{
    if (casas == 0) return;
    printf("Direita\n");
    moverTorre(casas - 1);
}

void moverRainha(int casas)
{
    if (casas == 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

void moverBispoRecursivo(int casas)
{
    if (casas == 0) return;
    printf("Cima Direita\n");
    moverBispoRecursivo(casas - 1);
}

void moverBispoLoops(int casas)
{
    printf("Bispo com loops aninhados:\n");

    for (int v = 0; v < casas; v++)
    {          // movimento vertical
        for (int h = 0; h < 1; h++)
        {          // movimento horizontal
            printf("Cima Direita\n");
        }
    }
}



void moverCavalo()
{
    printf("Movimento do Cavalo:\n");

    int movimentos = 1;

    for (int i = 0; i < movimentos; i++)
    {

        int cima = 0;
        int direita = 0;

        for (int a = 0; a < 3; a++)
        {

            if (cima < 2) {
                printf("Cima\n");
                cima++;
                continue;
            }

            for (int b = 0; b < 2; b++)
            {

                if (direita < 1)
                {
                    printf("Direita\n");
                    direita++;
                    break;
                }
            }

            break;
        }
    }
}

int main() {

    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;

    printf("Movimento da Torre:\n");
    moverTorre(casasTorre);
    printf("\n");

    printf("Movimento do Bispo recursivo:\n");
    moverBispoRecursivo(casasBispo);
    printf("\n");

    moverBispoLoops(casasBispo);
    printf("\n");

    printf("Movimento da Rainha:\n");
    moverRainha(casasRainha);
    printf("\n");

    moverCavalo();
    printf("\n");

    return 0;
}
