#include <stdio.h>
#include <stdlib.h>

main()
{
    float resto, resposta;
    int mmc, aux, i;
    int n1, n2;
    printf("---Escolha entre mmc(1) e mdc(2)---\n");
    scanf("%f", &resposta);
    printf("Digite dois numeros(inteiros):\n ");
    scanf("%d %d", &n1, &n2);
    if (resposta == 1)
    {
        resto = n1 % n2;
        while (resto != 0)
        {
            n1 = n2;
            n2 = resto;
            resto = n1 % n2;
        }
        printf("MDC = %d\n", n2);
    }
    else
    {

    for (i = 2; i <= n2; i++) {
        aux = n1 * i;
        if ((aux % n2) == 0) {
            mmc = aux;
            i = n2 + 1;
        }
    }
        printf("MmC = %d\n", mmc);
    }

    system("pause");
}