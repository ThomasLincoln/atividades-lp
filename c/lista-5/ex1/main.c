#include <stdio.h>
#include<string.h>

/*   Escreva um programa que leia um string, conte quantos caracteres desta string são iguais a ’a’ e substitua os que forem iguais a ’a’ por ’b’.
O programa deve imprimir o número de caracteres modificados e o string modificado */

int main(void) {
  int i, cont=0;
  char sequencia[10] = " " ;
  printf("Digite 10 caracteres: ");
  fgets(sequencia, 10, stdin);

  for(i =0; i< strlen(sequencia); i++){
    if(sequencia[i] == 'a'){
      cont++;
      printf("\n O caracter [%i] foi modificado", i);
      sequencia[i] = 'b';
    }
  }
      printf("\n Houve um total de [%i] caracteres modificados\n",cont);
      printf("sequencia editada: %s", sequencia);
  return 0;
}