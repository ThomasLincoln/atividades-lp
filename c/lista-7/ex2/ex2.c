#include <stdio.h>

int main(void){
    int a, b, *p;
    a = 10;
    p = &a;
    //isso vai mudar o conteúdo de a que era 10 para 7
    *p = 7;
    //com o novo valor a soma vai resultar em 14
    b = a + (*p);
    printf("%d \n", b);
	system("pause");
	return 0;
}