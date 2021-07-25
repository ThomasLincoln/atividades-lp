#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
    5. Faça um programa que receba 2 strings (A e B) e 
    retorne uma terceira string (C) formada pelos caracteres de A e B intercalados. 
    Ex.: Se A='Quarta' e B='Segunda', a resposta deve ser 'QSueagrutnada'
*/

int main()
{
    char palavra1[10] = "";
    char palavra2[10] = "";
    char saida[100] = {0};

    printf("Digite a primeira frase: \n");
    fgets(palavra1, 10, stdin);
    printf("Digite a segunda frase: \n");
    fgets(palavra2, 10, stdin);

    int i = 0, lena = strlen(palavra1), lenb = strlen(palavra2), len = lena + lenb;

    for( i = 0; i < lena; i++ )
        saida[ i * 2 ] = palavra1[i];

    for( i = 0; i < lenb; i++ )
        saida[ 1 + i * 2 ] = palavra2[i];

    saida[ len ] = 0;

    printf("saida = %s", saida );

    return 0;
}