#include <stdio.h>
void main () {
  int x, y, z;
  printf("Informe o valor x: ");
  scanf("%d", &x);
  printf("Informe o valor y: ");
  scanf("%d", &y);
  printf("Informe o valor z: ");
  scanf("%d", &z);
  if ((x + y > z) && (y + z > x) && (x + z > y)) {
    if ((x == y) && (x == z)) {
      puts("Triângulo equilátero");
    } else if ((x == y) || (x == z) || (y == z)) {
      puts("Triângulo isósceles");
    } else {
      puts("Triângulo escaleno");
    }
  }
}
