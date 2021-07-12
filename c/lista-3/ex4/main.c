#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    /*Uma imagem em RGB pode ser representada por uma matriz tridimensional, sendo
que cada dimensão guarda os valores das intensidades de Vermelho, Verde e Azul para
cada pixel. Declare a matriz para armazenar uma imagem RGB de 128 x 128 pixels.*/
    char matriz[128][128][7];
    int i, j;
    char value[7];

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Insira na matriz[%d][%d]: ", i, j);
            scanf(" %s", matriz[i][j]); 
        }
    }

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("[%i][%i] = %s \n",i, j, matriz[i][j]);
        }
    }

   // printf("Matrix[1][2]: %d\n", matriz[1][2]);
    return 0;
}