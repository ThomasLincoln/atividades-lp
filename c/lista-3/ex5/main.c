#include <stdio.h>
#include <stdlib.h>
/* Escreva um algoritmo que implemente o jogo da velha utilizando uma matriz. */
void tabuleiro(char casas2[3][3]){
  printf("\t %c | %c | %c \n", casas2[0][0], casas2[0][1], casas2[0][2]);
  printf("\t--------- \n");
  printf("\t %c | %c | %c \n", casas2[1][0], casas2[1][1], casas2[1][2]);
  printf("\t---------\n");
  printf("\t %c | %c | %c \n", casas2[2][0], casas2[2][1], casas2[2][2]);
}
int main(void) {
  char casas[3][3]={{0}};
  int cont_jogadas = 0, l, c, vez = 0;
  while(cont_jogadas != 9){
    system("clear");
    tabuleiro(casas);
    printf("Digite a linha: ");
    scanf("%i", &l);
    printf("Digite a coluna: ");
    scanf("%i", &c);
    if(l < 1 || l > 3){
      l = 0;      
    }
    if(c < 1 || c > 3){
      c = 0;
    }
    if(l != 0 || c != 0){
      if(casas[l-1][c-1] == '\000'){
        if(vez%2==0){
          casas[l-1][c-1] = 'X';
          }else{
            casas[l-1][c-1] = 'O';      
          } 
        vez++;
        cont_jogadas++;
      }
    }
  };
  system("clear");
  tabuleiro(casas);
  printf("o jogo acabou\n");
  return 0;
}