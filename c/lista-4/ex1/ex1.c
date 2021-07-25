#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float vetor1[5], vetor2[5], total;
    int i;
    printf("Dados dois vetores v1 e v2, ambos com 5 elementos, determinar o produto escalar destes vetores\n");
    for (i = 0; i < 5; i++)
    {
        printf("Digite o valor %i do primeiro vetor: ", i);
        scanf("%f", &vetor1[i]);
        printf("Digite o valor %i do segundo vetor: ", i);
        scanf("%f", &vetor2[i]);
        total = total + (vetor1[i] * vetor2[i]);
    }
    printf("\n%.2f\n", total);
    system("pause");
    return 0;
}