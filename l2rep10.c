#include <stdio.h>
void main () {
        int num, calc = 1;
        printf("Informe um número: ");
        scanf("%d", &num);
        for (int i = 2; i < num; i++) {
            if (num % i == 0) {
                calc += i;
            }
        }
        if (calc == num) {
            puts("Número perfeito");
        } else {
            puts("Número imperfeito");
        }
        //printf("calc: %d", calc);
}
