#include <stdio.h>

void main () {
  float n1, n2;
  printf("Informe a primeira nota: ");
  scanf("%f", &n1);
  printf("Informe a segunda nota: ");
  scanf("%f", &n2);
  if ((n1 >= 0 && n1 <= 10) && (n2 >= 0 && n2 <= 10)) {
    printf("Primeira nota: %.2f\nSegunda nota: %.2f\nMédia: %.2f\n", n1, n2, (n1 + n2) / 2);
  } else {
    printf("Você não informou valores válidos.\n");
  }
}
