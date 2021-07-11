#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){
    float peso, altura, imc;
    printf("----Calculo de IMC----");
    printf("\n Informe seu peso: ");
    scanf("%f", &peso);
    printf("\n Informe sua altura: ");
    scanf("%f", &altura);
    imc = peso/ pow(altura, 2);
    printf("%s\n", imc < 18.5 ? "Voce esta abaixo do peso" : 
                   imc == 18.5 || imc <= 24.9 ? "Seu peso esta normal" :
                   imc == 25.0 || imc <= 29.9 ? "Voce esta com sobrepeso" :
                   imc == 30.0 || imc <= 34.9 ? "Voce esta com obesidade grau I":
                   imc == 35.0 || imc <= 39.9 ? "Voce esta com obesidade grau II":"Voce esta com obesidade grau III ou morbida"
    );
    system("pause");
    return 0;
}