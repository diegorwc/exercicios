#include <stdio.h>
void main () {
    int num = 1;
    float calc = 1, fat = 1;
    printf("Informe um número: ");
    scanf("%d", &num);
    for (int i = 1; i <= num; i++) {
        for (int j = i; j > 1; j--) {
            printf("%.2f (fat) * %d(j): %.2f\n", fat, j, (fat * j));
            fat *= j;
        }
        printf("%.2f(calc) + (1/%.2f(fat) = %.2f(calc))\n", calc, fat, calc + (1/fat));
        calc += (1/ fat) * 1.0;
        fat = 1;
    }
    printf("Resultado final: %.7f\n", calc);
}
