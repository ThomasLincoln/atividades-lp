#include <stdio.h>
#include <stdlib.h>
main()
{
    int n, count;
    float k;
    k = 0;
    printf("Informe o numero: ");
    scanf("%i", &n);
    count = n;
    while (count != 0)
    {
        while (n != 0)
        {
            k = k + 1 + 1 / n;
            n--;
        }
        count--;
        n = count;
    }
    printf("\nO resultado e: %.2f \n", k);
    system("pause");
    return 0;
}