#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float horas, minutos, segundos;
    printf("Digite segundos: ");
    scanf("%f", &segundos);
    printf("%f", segundos);
    minutos = (segundos / 60);
    horas = (minutos / 60);
    printf("\n horas %f" ,horas);
    printf("\n minutos %f" ,minutos);
    printf("\n segundos %f \n" ,segundos);
    system("pause");
    return 0;
}