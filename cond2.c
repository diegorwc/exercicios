#include <stdio.h>

void main () {
  int matr;
  float numHoraTrab, valHora;
  printf("Informe a matrícula: ");
  scanf("%d", &matr);
  printf("Informe o número de horas trabalhadas: ");
  scanf("%f", &numHoraTrab);
  printf("Informe o valor da hora: ");
  scanf("%f", &valHora);
  printf("Matrícula: %d\nSalário mensal: %.2f\n", matr, (valHora * numHoraTrab));
}
