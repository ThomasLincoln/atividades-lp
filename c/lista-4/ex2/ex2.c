#include <stdio.h>
#include <stdlib.h>
main()
{
    float vetor[64], key;
    int i;
    printf("Programa que armazena 64 numeros inteiros em um vetor, solicita um numero chave K ao usuario e verifica se a chave esta entre os 64 numeros. Em caso positivo, imprima a posicao do vetor em que a chave foi encontrada.\n");
    for (i = 0; i < 64; i++)
    {
        printf("\nInforme um numero: ");
        scanf("%.2f", &vetor[i]);
    }
    printf("Digite o numero chave: ");
    scanf("%.2f", &key);
    for (i = 0; i < 64; i++)
    {
        if (key == vetor[i])
        {
            printf("A senha %.2f existe", key);
        }
    }
    system("pause");
    return 0;
}
