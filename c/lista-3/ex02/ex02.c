#include <stdio.h>
#include <stdlib.h>

int main(void){
    float xsala, ysala, alunos, area;
    printf("--Calculo de alunos por sala--\n");
    printf("Informe a largura da sala: \n");
    scanf("%f", &xsala);
    printf("Informe o comprimento da sala: \n");
    scanf("%f", &ysala);
    area = xsala * ysala;
    alunos = area / 2,25;
    printf("A quantidade de alunos e de: %.f \n", alunos);
    system("pause");
    return 0;
}