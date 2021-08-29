#include <stdio.h>
#include "biblioteca.h"

int main(void) {

  printf("Hello World\n");
  Ponto a, b, s;
  float x, y, calculo;
  x = 10;
  y = 30;
  printf("\n%f",calculadora(x,y,'-'));
  printf("\n%f",calculadora(y,x,'-'));
  printf("\n%f",calculadora(x+3,y-4,'+'));

  a.x = 9;
  a.y = 1;
  a.z = 19;

  b.x = 13;
  b.y = 15;
  b.z = 19;

  s = soma(a,b);  

  imprimePonto(s); //impressão ponto S (soma de a + b)

  printf("%.2f\n", distancia(a,b)); //impressão da distancia

  return 0;
}

