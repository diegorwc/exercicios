#include <stdio.h>
#include <math.h>
void main () {
  int x1, y1, x2, y2;
  float calc;
  printf("Informe a coordenada x do ponto 1: ");
  scanf("%d", &x1);
  printf("Informe a coordenada y do ponto 1: ");
  scanf("%d", &y1);
  printf("Informe a coordenada x do ponto 2: ");
  scanf("%d", &x2);
  printf("Informe a coordenada y do ponto 1: ");
  scanf("%d", &y2);
  calc = pow((x2 - x1), 2);
  printf("x2 - x1: %.2f\n", calc);
  calc = pow((y2 - y1), 2);
  printf("y2 - y1: %.2f\n", calc);
  calc = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
  printf("A distância euclidiana é: %.2f\n", calc);
}
