#include <stdio.h>
#include <stdlib.h>

int main(void){
    float numOriginal, numAntecessor, numSucessor;
    printf("----Sucessor e Antecessor----\n");
    printf("Digite um numero: ");
    scanf("%f",&numOriginal);
    numAntecessor = numOriginal - 1;
    numSucessor = numOriginal + 1;
    printf("O Antecessor e: %.3f\n", numAntecessor);
    printf("O Sucessor e: %.3f\n", numSucessor);
    
    system("pause");
    return 0;
}