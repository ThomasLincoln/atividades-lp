#include <stdio.h>
#include <stdlib.h>
#include "biblioteca.h"

void flush_in(){
    int ch;
    while( (ch = fgetc(stdin)) != EOF && ch != '\n' ){}
}
int main(void){
    int resposta = 0;
    printf("escolha o exercício\n");
    printf("1 - lista 5 - ex1\n");
    printf("2 - lista 5 - ex2\n");
    printf("3 - lista 5 - ex3\n");
    printf("4 - lista 5 - ex4\n");
    printf("5 - lista 5 - ex5\n");
    printf("6 - lista 6\n");
    printf("7 - lista 7\n");
    scanf("%i", &resposta);
    printf("%i\n", resposta);
    flush_in();
    if(resposta == 1){
        l5ex1();
    }else if(resposta == 2){
        l5ex2();
    }else if(resposta == 3){
        l5ex3();
    }else if(resposta == 4){
        l5ex4();
    }else if(resposta == 5){
        l5ex5();
    }else if(resposta == 6){
        l6();
    }else if(resposta == 7){
        l7();
    }else{
        printf("Número incorreto");
      }
}