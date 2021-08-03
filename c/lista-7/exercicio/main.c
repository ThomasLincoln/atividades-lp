#include <stdio.h>
#include <stdlib.h>

void inverte(int *vetor, int tamanho){
    int i, j, *aux;
    aux = (int*) malloc(tamanho * sizeof(int));

    for(j = 0; j<tamanho; j++){
            aux[j] = vetor[tamanho-j-1];
    }
    for (i = 0; i<tamanho; i++){
        printf("a[%d] = %d\n", i, aux[i]);
    }
}
int main(void){
    int tamanho, *v, i;
    printf("Informe o tamanho: ");
    scanf("%d", &tamanho);
    v = (int*) malloc(tamanho * sizeof(int));

     for (i= 0; i<tamanho; i++){
        printf("Insira o elemento %d: ", i+1);
        scanf("%d", &v[i]);
    }
    inverte(v, tamanho);
	system("pause");
	return 0;
}