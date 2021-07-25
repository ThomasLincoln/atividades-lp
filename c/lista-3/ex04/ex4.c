#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float escolha, base1, base2, altura, area;
    printf("--Area do trapezio ou volume de uma piramide--\n");
    printf("Escolha entre trapezio(1) ou piramide(2)\n");
    scanf("%f", &escolha);
    if (escolha == 1)
    {
        printf("trapezio\n");
        printf("Informe a base maior\n");
        scanf("%f", &base1);
        printf("Informe a base menor\n");
        scanf("%f", &base2);
        printf("Informe a altura\n");
        scanf("%f", &altura);
        area = ((base1 + base2) * altura) / 2;
        printf("A area e: %.2f\n", area);
    }
    else if (escolha == 2)
    {
        printf("piramide\n");
        printf("Informe um lado da base\n");
        scanf("%f", &base1);
        printf("Informe o outro lado da base\n");
        scanf("%f", &base2);
        printf("Informe a altura\n");
        scanf("%f", &altura);
        area = ((base1 * base2) * altura) / 3;
        printf("A area e: %.2f\n", area);
    }else{
        printf("Opcao invalida");
    }
    system("pause");
    return 0;
}