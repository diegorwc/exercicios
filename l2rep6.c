#include <stdio.h>
void main () {
	int num, cont = 0, jump = 1;
	printf("Informe um número: ");
	scanf("%d", &num);
	for (int i = 1; i <= num; i++) {
		if (cont == jump) {
			puts("");
			jump++;
			cont = 0;
		}
			printf("%d ", i);
			cont++;
	}
}
