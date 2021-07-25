#include <stdio.h>
#include <stdlib.h>

int main(void){
    char sx;
    float alt, pesoI;
    printf("Insira o sexo 'F' ou 'M': ");   
    scanf("%s", &sx);
    printf("%s", &sx);
    printf("\nInsira a sua altura: ");
    scanf("%f", &alt);
    (sx=='F')? printf("%f", pesoI=(62.1*alt)-44.7) :
    (sx=='M')? printf("%f", pesoI=(72.7*alt)-58) : printf("Sexo invalido");
    printf("%s o peso ideal e: \n");
    system("pause");
    return 0;
}