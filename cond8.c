#include <stdio.h>
void main () {
  int oper, num1, num2, calc;
  printf("Escolha uma operação:\n1.Soma\n2.Subtração\n3.Divisão\n4.Multiplicação\nOpção: ");
  scanf("%d", &oper);
  printf("Informe o primeiro valor: ");
  scanf("%d", &num1);
  printf("Informe o segundo valor: ");
  scanf("%d", &num2);
  switch (oper) {
    case 1: {
      calc = num1 + num2;
      break;
    }
    case 2: {
        calc = num1 - num2;
        break;
    }
    case 3: {
      calc = num1 / num2;
      break;
    }
    case 4: {
      calc = num1 * num2;
      break;
    }
    default: {
      puts("Opção inválida.");
    }
  }
  printf("Resultado: %d\n", calc);
}
