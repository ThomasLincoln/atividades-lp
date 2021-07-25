#include <stdio.h>
#include<string.h>

/* Faça um programa usando vetores que leia o nome de 5 pessoas e mostre os nomes armazenados. */

int main(void) {
  char nomes[5][30] = {0};
  int i;
  for(i = 0; i < 5; i++){
    printf("\n Digite um nome: ");
    fgets(nomes[i], 30, stdin);
    system("clear");
  }  
  for(i = 0; i < 5; i++){
    printf("\n nome de numero %i: %s", i,nomes[i]);
  }
  return 0;
}