#include <stdio.h>
#include <stdbool.h>
/* Uma empresa concederá um aumento de salário aos seus funcionários, variável de acordo com o cargo:

Gerente=10% Engenheiro=20% Auxiliar=30%

Faça um programa que leia o salário e o cargo de um funcionário e calcule o novo salário. Se o cargo do funcionário não estiver na tabela, ele deverá então receber 40% de aumento. Mostre o salário antigo, o novo salário e a diferença. */
int main(void) {
  int cargo = 0;
  float salario = 0, sal_final = 0;
  bool carg_esc = false, sal_inf = false;
  while(carg_esc == false){
    system("clear");
    printf("Escolha o cargo ");
    printf("\n 1 - Auxiliar");
    printf("\n 2 - Engenheiro");
    printf("\n 3 - Gerente");
    printf("\ncargo: ");
    scanf("%i", &cargo);
    if(cargo != 0){
      carg_esc = true;
    }
  }
  printf("\n");
  while(sal_inf == false){
    printf("Informe o salario: ");
    scanf("%f", &salario);
    if(salario != 0 && salario > 0){
      sal_inf = true;
    }
  }
  if(cargo == 1){
    sal_final = salario + ((salario/100)* 10);
  }else if(cargo == 2){
    sal_final = salario + ((salario/100)* 20);
  }else if(cargo == 3){
    sal_final = salario + ((salario/100)* 30);
  }else{
    sal_final = salario + ((salario/100)* 40);
  }
  system("clear");
  printf(" O salario antigo era: %.2f", salario);
  printf("\n O novo salario e: %.2f", sal_final);
  printf("\n A diferenca e: %.2f", sal_final - salario);
  return 0;
}