#include <stdio.h>
void main () {
    int num, produto = 1, soma = 0;
    do {
        printf("Informe um número: ");
        scanf("%d", &num);
        if (num % 2 != 0) {
            produto *= num;
        } else {
            soma += num;
        }
    }while(num > 0);
    printf("Produto dos ímpares: %d\nSoma dos pares: %d\n", produto, soma);
}
