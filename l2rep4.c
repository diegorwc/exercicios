#include <stdio.h>
void main () {
	int a, b;
	printf("Informe o primeiro valor: ");
	scanf("%d", &a);
	printf("Informe o segundo valor: ");
	scanf("%d", &b);
	if (a > b) {	
		for (; a >= b; a--) {
			int primo = 1;
			for (int i = 2; i < a; i++) {
				if ((a % i == 0))  {
					primo = 0;
				}
			}
			if (primo) {
				printf("%d\n", a);
			}
		}
	} else {
		puts("O primeiro valor deve ser maior que o segundo.");
	}
}