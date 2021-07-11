#include <stdio.h>
#include <stdlib.h>

int main(void){
    float tempo, capital, taxaJuros, montante, juros;
    printf("Cálculo de juros compostos");
    printf("\n Informe o tempo em anos: ");
    scanf("%f", &tempo);
    printf("\n Informe o capital inicial: ");
    scanf("%f", &capital);
    printf("\n Informe a taxa de juros em numero decimal: ");
    scanf("%f", &taxaJuros);
    montante = capital* pow((1 + taxaJuros), tempo);
    juros = montante - capital;
    printf("\n juros: %f \n", juros);
    system("pause");
    return 0;
}