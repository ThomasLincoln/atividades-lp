#include <stdio.h>
#include <stdbool.h>

typedef struct dma{
  int dia;
  int mes;
  int ano;
}Datas;
int cont1 = 0;
int cont2 = 0;
int totalDias =0;
void imprime(Datas d)
{
    printf("\n %02d/%02d/%04d", d.dia, d.mes, d.ano);
}

void calcula(Datas d1, Datas d2){
  int i;
  //calculo de dias
  while(d2.dia != 0){
    cont2 = cont2 + 1;
    d2.dia = d2.dia -1;
  }
  if((d2.ano % 400 == 0)||((d2.ano % 4 == 0)&&(d2.ano % 100 != 0))){
    while(d2.mes != 0){
      if(d2.mes == 1 || d2.mes == 3 || d2.mes == 5|| d2.mes == 7|| d2.mes == 8|| d2.mes == 10|| d2.mes == 12){
        cont2 = cont2 + 31;
        d2.mes = d2.mes-1;
      }else if(d2.mes == 2){
        cont2 = cont2 + 29;
        d2.mes = d2.mes-1;
      }else{
        cont2 = cont2 + 30;
        d2.mes = d2.mes-1;
      }
    }
  }else{
    while(d2.mes != 0){
      if(d2.mes == 1 || d2.mes == 3 || d2.mes == 5|| d2.mes == 7|| d2.mes == 8|| d2.mes == 10|| d2.mes == 12){
        cont2 = cont2 + 31;
        d2.mes = d2.mes-1;
      }else if(d2.mes == 2){
        cont2 = cont2 + 28;
        d2.mes = d2.mes-1;
      }else{
        cont2 = cont2 + 30;
        d2.mes = d2.mes-1;
      }
    }
  }
  while(d2.ano != 0){
    if((d2.ano % 400 == 0)||((d2.ano % 4 == 0)&&(d2.ano % 100 != 0))){
        cont2 = cont2 + 366;
         
    }else{
      cont2 = cont2 + 365;
    }
    d2.ano = d2.ano -1;
  }
  //------------------
    while(d1.dia != 0){
    cont1 = cont1 + 1;
    d1.dia = d1.dia -1;
  }
  if((d1.ano % 400 == 0)||((d1.ano % 4 == 0)&&(d1.ano % 100 != 0))){
    while(d1.mes != 0){
      if(d1.mes == 1 || d1.mes == 3 || d1.mes == 5|| d1.mes == 7|| d1.mes == 8|| d1.mes == 10|| d1.mes == 12){
        cont1 = cont1 + 31;
        d1.mes = d1.mes-1;
      }else if(d1.mes == 2){
        cont1 = cont1 + 29;
        d1.mes = d1.mes-1;
      }else{
        cont1 = cont1 + 30;
        d1.mes = d1.mes-1;
      }
    }
  }else{
    while(d1.mes != 0){
      if(d1.mes == 1 || d1.mes == 3 || d1.mes == 5|| d1.mes == 7|| d1.mes == 8|| d1.mes == 10|| d1.mes == 12){
        cont1 = cont1 + 31;
        d1.mes = d1.mes-1;
      }else if(d1.mes == 2){
        cont1 = cont1 + 28;
        d1.mes = d1.mes-1;
      }else{
        cont1 = cont1 + 30;
        d1.mes = d1.mes-1;
      }
    }
  }
  while(d1.ano != 0){
    if((d1.ano % 400 == 0)||((d1.ano % 4 == 0)&&(d1.ano % 100 != 0))){
        cont1 = cont1 + 366;
         
    }else{
      cont1 = cont1 + 365;
    }
    d1.ano = d1.ano -1;
  }
  totalDias = cont2 - cont1;
  printf("\n Diferenca: %d", totalDias);
}

int main(void){
  Datas d1;
  Datas d2;
  printf("Digite seguindo o exemplo 22");
  printf("\nDigite o dia da primeira data: ");
  scanf("%d", &d1.dia);
  printf("\nDigite seguindo o exemplo 2");
  printf("\nDigite o mes da primeira data: ");
  scanf("%d", &d1.mes);
  printf("\nDigite seguindo o exemplo 2222");
  printf("\nDigite o ano da primeira data: ");
  scanf("%d", &d1.ano);
  printf("----------");
  printf("\x1b[H\x1b[J");
  printf("\nDigite seguindo o exemplo 22");
  printf("\nDigite o dia da segunda data: ");
  scanf("%d", &d2.dia);
  printf("\nDigite seguindo o exemplo 2");
  printf("\nDigite o mes da segunda data: ");
  scanf("%d", &d2.mes);
  printf("\nDigite seguindo o exemplo 2222");
  printf("\nDigite o ano da segunda data: ");
  scanf("%d", &d2.ano);
  printf("\x1b[H\x1b[J");
  printf("Data inicial: ");
  imprime(d1);
  printf("\nData final: ");
  imprime(d2);
  calcula(d1, d2);

}