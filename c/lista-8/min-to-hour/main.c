#include <stdio.h>

typedef struct horas{
  int hora;
  int min;
}hr;

int main()
{
    hr hr1;
    int resposta;
    printf("Insira a quantidade de minutos: ");
    scanf("%d", &resposta);

    hr1.hora = resposta/60;
    hr1.min = resposta%60;

    printf("Isso e igual a %dh, %dmin", hr1.hora, hr1.min);
}