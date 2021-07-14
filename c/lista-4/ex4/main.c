#include <stdio.h>
#include <string.h>

  /*Faça um programa que leia um string e faça com que a primeira letra de cada palavra fique em maiúscula. Para isso, basta subtrair 32 do elemento que deseja alterar para maiúsculo
  chrNome[0] = chrNome[0] – 32;
  Ex. Entrada: lab. de linguagem de programação Ex. Saída : Lab. De Linguagem De Programação */

int main(void) {
  int i;
  char nome[100] = "0";

  printf("Informe a frase sem letras maiusculas:\n ");
  fgets(nome, 100, stdin);
  if(nome[0] != ' '){
    nome[0] = nome[0] - 32;
  }
  for(i = 0; i < strlen(nome);i++){
    if(nome[i] == ' ' && nome[i+1] != ' '){
      nome[i+1] = nome[i+1] -32;
    }
  }
  printf("\n %s", nome);
  return 0;
}