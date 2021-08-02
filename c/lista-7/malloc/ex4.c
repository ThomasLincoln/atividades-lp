#include <stdio.h>
#include <stdlib.h>

int main(void){
    int *a;

    a = (int*)calloc(1, sizeof(int));
    *a = 123;
    free(a);
	system("pause");
	return 0;
}