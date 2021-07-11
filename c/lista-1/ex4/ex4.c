#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char letra;
    int ASCII;
    printf("Digite uma letra: ");
    scanf("%s", &letra);
    printf("%s\n", letra == 'A' ? "65" :
        (letra == 'E') ? "69" : 
        (letra == 'I') ? "73" : 
        (letra == 'O') ? "79" : 
        (letra == 'U') ? "85" : "O caracter inserido nao e uma vogal"
        );
    system("pause");
    return 0;
}