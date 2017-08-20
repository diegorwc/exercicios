#include <stdio.h>
void main () {
	int num;
	printf("Informe um número: ");
	scanf("%d", &num);
	for (;num > 0; num--) {
		for (int j = num; j > 0; j--) {
			printf("%d", j);
		}
		puts("");
	}
}