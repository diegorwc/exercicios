#include <stdio.h>
void main () {
	int num, aux1 = 0, aux2 = 0, aux3 = 0, aux4 = 0;
	while (num > -1) {
		scanf("%d", &num);
		switch (num) {
			case 0 ... 25: {
				aux1++;
				break;
			}
			case 26 ... 50: {
				aux2++;
				break;
			}
			case 51 ... 75: {
				aux3++;
				break;
			}
			case 76 ... 100: {
				aux4++;
				break;
			}
		}
	}
	printf("0-25: %d\n26-50: %d\n51-75: %d\n76-100: %d\n", aux1, aux2, aux3, aux4);
}