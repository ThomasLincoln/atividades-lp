#include <stdio.h>
#include <stdlib.h>
main()
{
    int numi, numf, soma;
    printf("Numero inicial: ");
    scanf("%i", &numi);
    printf("\nNumero final:");
    scanf("%i", &numf);
    while (numi != numf)
    {
        if (numi % 2 != 0 && numi % 3 == 0)
        {
         printf("O numero %i e multiplo de 3 e impar\n", numi);
        }
        numi = numi +1;
    }
    

    system("pause");
    return 0;
}