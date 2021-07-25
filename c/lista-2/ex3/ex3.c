#include <stdio.h>
#include <stdlib.h>

int main(void){
    int num, calculo, zero;
    printf("even or odd\n");
    printf("Insert a number: ");
    scanf("%i",&num);
    zero = 0;
    calculo = num % 2;
    printf("%s\n", calculo == zero ? "par": "impar");
    system("pause");
    return 0;
}