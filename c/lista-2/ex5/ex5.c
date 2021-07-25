#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int xa, ya, xb, yb;
    float distancia;
    printf("Distancia entre dois pontos\n");
    printf("Digite o Xa: ");
    scanf("%i", &xa);
    printf("Digite o Ya: ");
    scanf("%i", &ya);
    printf("Digite o Xb: ");
    scanf("%i", &xb);
    printf("Digite o Yb: ");
    scanf("%i", &yb);
    distancia = sqrt(pow(xb - xa, 2) + pow(yb - ya, 2)); 
    printf("%f\n", distancia);
    system("pause");
    return 0;
}