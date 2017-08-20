#include <stdio.h>
void main () {
        int atual = 1, ant = 0, calc = 0, num, pos = 2;
        printf("Informe a posição: ");
        scanf("%d", &num);
        while ((pos != num) && (num > 2)) {
            calc = ant + atual;
            ant = atual;
            atual = calc;
            pos++;
        }
        if (num == 2) {
            calc = ant + atual;
        }
        printf("%d\n", calc);
}
