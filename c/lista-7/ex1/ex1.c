#include <stdio.h>

int main(void){
	int x=123;
	int *p;
	p = &x;
	printf("Conteudo da variavel x: %d\n", x);
	printf("Endereco da variavel x: %p \n", &x);
	printf("Conteudo da variavel ponteiro p: %p\n", p);
	printf("Conteudo da variavel apontada pelo ponteiro p: %d\n", *p);
	system("pause");
	return 0;
}