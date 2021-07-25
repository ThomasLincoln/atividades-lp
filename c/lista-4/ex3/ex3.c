#include <stdio.h>
#include <stdlib.h>
main()
{
    float matriz1[3][4], matriz2[3][4], soma;
    int i, j, k;
    printf("Escreva um algoritmo que leia duas matrizes reais de dimensao 3 x 4, calcule e imprima a soma das matrizes.\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("Insira um numero para matriz1, linha %i e coluna %i: ", i, j);
            scanf("%f", &matriz1[i][j]);
            soma = soma + matriz1[i][j];
        }
        for (k = 0; k < 4; k++)
        {
            printf("Insira um numero para matriz2, linha %i e coluna %i: ", i, k);
            scanf("%f", &matriz2[i][k]);
            soma = soma + matriz2[i][k];
        }
    }
    printf("\n%f", soma);
    system("pause");
    return 0;
}
