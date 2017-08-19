#include <stdio.h>

void main () {
  float salario;
  printf("Informe o salário atual: ");
  scanf("%f", &salario);
  if (salario <= 400) {
      salario += salario * 0.15;
  } else if (salario > 400 && salario <= 700) {
    salario += salario * 0.12;
  } else if (salario > 700 && salario <= 1000) {
    salario += salario * 0.10;
  } else if (salario > 1000 && salario <= 1800) {
    salario += salario * 0.07;
  } else if (salario < 0) {
      printf("Valor inválido\n");
      return;
  } else {
    printf("Sem reajuste para esta faixa\n");
  }
  printf("Novo salario: %.2f\n", salario);

}
