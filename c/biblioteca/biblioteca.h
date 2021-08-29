#ifndef BIBLIOTECA_H
#define BIBLIOTECA_H
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int l5ex1(void) {
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

int l5ex2(void) {
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
}

int l5ex3(void) {
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
}

int l5ex4(void) {
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
}

int l5ex5(void)
{
    char palavra1[10] = "";
    char palavra2[10] = "";
    char saida[100] = {0};

    printf("Digite a primeira frase: \n");
    fgets(palavra1, 10, stdin);
    printf("Digite a segunda frase: \n");
    fgets(palavra2, 10, stdin);

    int i = 0, lena = strlen(palavra1), lenb = strlen(palavra2), len = lena + lenb;

    for( i = 0; i < lena; i++ )
        saida[ i * 2 ] = palavra1[i];

    for( i = 0; i < lenb; i++ )
        saida[ 1 + i * 2 ] = palavra2[i];

    saida[ len ] = 0;

    printf("saida = %s", saida );

}

void hanoi(int n,char origem,char destino,char auxiliar){
	/*Se sobrar apenas o disco 1, mova fazer o movimento e retornar*/
	if(n==1){ 
		printf("\nMova o disco 1 da base %c para a base %c",origem ,destino);
		return;
	}
	/*Mover o n-1 disco de A para B, usando C de auxiliar*/
	hanoi(n-1,origem,auxiliar,destino);
	/* Mover os discos restantes de A para C*/
	printf("\nMova o disco %d da base %c para a base %c",n,origem,destino);
	/*Mover os n-1 discos de B para C usando A como auxiliar*/
	hanoi(n-1,auxiliar,destino,origem);
}

int l6(void){
	int n;
	printf("Digite o numero de discos : ");
	scanf("%d",&n);
	printf("Para resolver a torre de Hanois faça :\n\n");
	hanoi(n,'A','C','B');
	printf("\n");
}

void inverte(int *vetor, int tamanho){
    int i, j, *aux;
    aux = (int*) malloc(tamanho * sizeof(int));

    for(j = 0; j<tamanho; j++){
            aux[j] = vetor[tamanho-j-1];
    }
    for (i = 0; i<tamanho; i++){
        printf("a[%d] = %d\n", i, aux[i]);
    }
}

int l7(void){
    int tamanho, *v, i;
    printf("Informe o tamanho: ");
    scanf("%d", &tamanho);
    v = (int*) malloc(tamanho * sizeof(int));

     for (i= 0; i<tamanho; i++){
        printf("Insira o elemento %d: ", i+1);
        scanf("%d", &v[i]);
    }
    inverte(v, tamanho);
	system("pause");
}

#endif