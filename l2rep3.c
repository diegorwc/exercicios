#include <stdio.h>
void main () {
	int num, cont = 0, soma = 0;
	do {
		printf("Digite um número: ");
		scanf("%d", &num);
		if (num < 0) {
			cont++;
		} else {
			soma += num;
		}		
	}while(num != 0);	
	printf("Foram digitados %d números negativos\nA soma dos números positivos é: %d\n", cont, soma);
}