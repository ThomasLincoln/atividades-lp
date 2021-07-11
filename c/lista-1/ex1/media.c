#include <stdio.h>
#include <stdlib.h>

int main(void){
    float nota1, nota2, nota3, media1, media2, media3;
    printf("-Calculo de media-\n");
    printf("Informe a primeira nota do grupo 1: ");
    scanf("%f",&nota1);
    printf("Informe a segunda nota do grupo 1: ");
    scanf("%f",&nota2);
    printf("Informe a terceira nota do grupo 1: ");
    scanf("%f",&nota3);
    media1 = (nota1 + nota2 + nota3)/ 3;
    printf("media do grupo 1: %.2f\n",media1);

    printf("Informe a primeira nota do grupo 2: ");
    scanf("%f",&nota1);
    printf("Informe a segunda nota do grupo 2: ");
    scanf("%f",&nota2);
    printf("Informe a terceira nota do grupo 2: ");
    scanf("%f",&nota3);
    media2 = (nota1 + nota2 + nota3)/ 3;
    printf("media do grupo 2: %.2f\n",media2);

    media3 = (media1 + media2) / 2;
    printf("media dos grupos e: %.2f\n", media3);

    system("pause");
    return 0;
}