#include <stdio.h>
#include <stdlib.h>

int main(void){
    int *v;
    int i, n;
    printf("Insira o tamanho do vetor: ");
    scanf("%d", &n);
    v = (int*) calloc(n,sizeof(int));
    for (i= 0; i<n; i++){
        printf("Insira o elemento %d: ", i+1);
        scanf("%d", &v[i]);
    }
    for (i = 0; i<n; i++){
        printf("a[%d] = %d\n", i, v[i]);
    }
    free(v);
	system("pause");
	return 0;
}