#include <stdio.h>
void main () {
  int minutos, valor = 0;
  printf("Informe o tempo que ficou no estacionamento (em minutos):");
  scanf("%d", &minutos);
  if (minutos <= 15) {
    valor = 0;
  } else if (minutos <= 60) {
    valor = 1;
  } else if (minutos > 60) {
    valor = 2;
  }
  printf("Você precisa pagar %d reai(s)\n", valor);
}
