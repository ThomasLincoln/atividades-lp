#include <stdio.h>
#include <stdlib.h>

int main(void){
    int *a;
    //isso aqui vai criar um espaço pra guardar essa var o (int*) é o tipo de retorno
    a = (int*)malloc(1 * sizeof(int));
    //aqui vai salvar o valor 123 no espaço do ponteiro a
    *a = 123;
    //isso aqui vai liberar a var, o espaço vai ser apagado.
    free(a);
	system("pause");
	return 0;
}