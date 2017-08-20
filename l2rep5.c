#include <stdio.h>
void main () {
	int num = 0, fat = 1, calc = 0;
	while (1) {
		printf("Informe um número: ");
		scanf("%d", &num);
		if (num == -1) {
			break;
		}
		if (num < 7) {
			for (; num > 1; num--) {
				fat *= num;
				//printf("Fat: %d\n", fat);
			}
			printf("Fatorial: %d\n", fat);
		} else {
			for (; num >= 1; num--) {
				calc += num;
				//printf("calc: %d\n", calc);				
			}
			printf("Soma %d\n", calc);
		}
		fat = 1;
		calc = 0;
	}
}