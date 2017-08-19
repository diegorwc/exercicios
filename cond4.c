#include <stdio.h>
void main () {
  float a, b, c, calc;
  printf("Informe o primeiro valor: ");
  scanf("%f", &a);
  printf("Informe o segundo valor: ");
  scanf("%f", &b);
  printf("Informe o terceiro valor: ");
  scanf("%f", &c);
  calc = ((a * 5) + (b * 2.5) + (c * 2.5)) / (5 + 2.5 + 2.5);
  printf("Média ponderada: %.2f\n", calc);
}
