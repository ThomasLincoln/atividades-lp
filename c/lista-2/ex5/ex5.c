#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float lado1, lado2, lado3;
    printf("Informe um dos lados:\n");
    scanf("%f", &lado1);
    printf("Informe um dos lados:\n");
    scanf("%f", &lado2);
    printf("Informe um dos lados:\n");
    scanf("%f", &lado3);
    if ((fabs(lado2 - lado3)<lado1 && lado1 < (lado2 + lado3)) && (fabs(lado1 - lado3) < lado2 && lado2 < (lado1 + lado3)) && (fabs(lado1 - lado2) < lado3 && lado3 < (lado1 + lado2)))
    {
        if (lado1 == lado2 && lado2 == lado3)
        {
            printf("O triangulo e Equilatero\n");
        }
        else if ((lado1 != lado2) && (lado1 != lado3) && (lado2 != lado3))
        {
            printf("O triangulo e Escaleno\n");
        }
        else
        {
            printf("O triangulo e Isosceles\n");
        }
    }else{
        printf("Nao e um triangulo\n");
    }
    system("pause");
    return 0;
}