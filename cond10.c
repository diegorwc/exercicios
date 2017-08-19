#include <stdio.h>
void main () {
	int opc, calc;
	printf("Escolha uma opção:\n1. Área de um triângulo\n2. Área de um retângulo\n3. Área de um quadrado\n4. Área de um círculo\nOpção: ");
	scanf("%d", &opc);
	switch (opc) {
		case 1: {	
			int base, altura;		
			printf("Informe o valor da base: ");
			scanf("%d", &base);
			printf("Informe o valor da altura: ");
			scanf("%d", &altura);
			calc = (base * altura) / 2;
			break;
		}
		case 2: {
			int base, altura;
			printf("Informe o valor da base: ");
			scanf("%d", &base);
			printf("Informe o valor da altura: ");
			scanf("%d", &altura);
			calc = base * altura;
			break;
		}
		case 3: {
			int lado;
			printf("Informe o valor do lado do quadrado: ");
			scanf("%d", &lado);
			calc = lado * lado;
			break;
		}
		case 4: {
			int raio;
			printf("Informe o valor do raio: ");
			scanf("%d", &raio);
			calc = 3.14 * (raio * raio);
			break;
		}
		default: {
			puts("Opção inválida.");
		}
	}
	printf("Resultado: %d\n", calc);
}
