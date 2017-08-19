#include <stdio.h>
void main () {
  float temp;
  int uniMed;
  printf("Informe a temperatura: ");
  scanf("%f", &temp);
  printf("Informe a unidade de medida, 1 para Celsius e 2 para Fahrenheit: ");
  scanf("%d", &uniMed);
  if (uniMed == 1) {
    temp = temp * 1.8 + 32;
    printf("Temperatura convertida em Fahrenheit: %.2f\n", temp);
  } else if (uniMed == 2) {
    temp = (temp - 32) / 1.8;
    printf("Temperatura convertida em Celsius: %.2f\n", temp);
  } else {
    puts("Unidade de medida inválida");
  }
}
