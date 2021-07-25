#include <stdio.h>

int main(void) {
  float matriz1[2][2], matriz2[2][2], c;
  int i, j;
  /*Escreva um programa que receba duas matrizes A e B e retorne C = A ∗ B.*/
  for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("Insira um numero para matriz1, linha %i e coluna %i: ", i, j);
            scanf("%f", &matriz1[i][j]);
            printf("Insira um numero para matriz2, linha %i e coluna %i: ", i, j);
            scanf("%f", &matriz2[i][j]);

            c = c + (matriz2[i][j] * matriz1[i][j]);
        }
    }
  printf("%.2f", c);
  return 0;
}