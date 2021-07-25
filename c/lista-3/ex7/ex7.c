#include <stdio.h>
#include <stdlib.h>
#include <math.h>
main()
{
    int a, c, ni;
    float b;
    printf("Digite o numero inicial: ");
    scanf("%d", &ni);
    printf("Digite o numero final: ");
    scanf("%d", &a);
    if (a > ni)
    {
        while (a != ni)
        {
            b = sqrt(a);
            c = b;
            if (b <= c)
            {
                printf("o numero %d tem raiz quadrada perfeita \n", a);
            }
            a--;
        }
    }else{
        printf("nao e possivel");
    }
    system("pause");
    return 0;
}