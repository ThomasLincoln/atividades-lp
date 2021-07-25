#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int anoatual;
    printf("----Verificador de ano bissexto----");
    printf("Insira o ano atual: ");
    scanf("%i", &anoatual);
    printf("%s\n",  anoatual % 4 == 0 && anoatual % 100 != 0  || anoatual % 400 == 0   ? "o ano e bissexto": "nao e bissexto");
    system("pause");
    return 0;
}