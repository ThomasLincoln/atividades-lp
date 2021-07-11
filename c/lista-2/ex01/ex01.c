#include <stdio.h>
#include <stdlib.h>

int main(void){
    float distancia, litros, consmed;

    printf("--Calculo de consumo medio de litros por distanci\n");
    printf("Insira a distancia percorrida em km\n");
    scanf("%f", &distancia);
    printf("Insira a quantidade de combustivel gasto em litros\n");
    scanf("%f", &litros);
    consmed = distancia / litros;
    printf("O consumo medio e de: %f \n", consmed);
    system("pause");
    return 0;
}