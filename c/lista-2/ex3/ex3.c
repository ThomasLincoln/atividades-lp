#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float tempo, v0, vt,ht;
    printf("---Calculo de velocidade e altura---\n");
    printf("Insira o tempo do movimento\n");
    scanf("%f", &tempo);
    printf("Insira a velocidade inicial\n");
    scanf("%f", &v0);
    vt = v0 - (9.81 * tempo);
    ht =v0 * tempo - ((9.81 * pow(tempo,2))/ 2); 
    printf("A velocidade e: %f\n e a altura e: %f\n", vt, ht);
    system("pause");
    return 0;
}