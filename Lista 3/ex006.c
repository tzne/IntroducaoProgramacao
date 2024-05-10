/* DESCRIÇÃO
Você está se tornando um programador mais experiente, e seus algoritmos estão
cada vez mais rebuscados. Assim, você tem a brilhante ideia de fazer uma
calculadora sofisticada.

ENTRADA
Seu programa receberá dois números inteiros, e depois a opção correspondente a
cada operação como enumerado abaixo:
  1. Soma dos dois números;
  2. Subtração do primeiro pelo segundo;
  3. Subtração do segundo pelo primeiro;
  4. Multiplicação dos dois números;
  5. Divisão do primeiro pelo segundo;
  6. Divisão do segundo pelo primeiro;
  7. Quociente inteiro da divisão do primeiro pelo segundo;
  8. Quociente inteiro da divisão do segundo pelo primeiro;
  9. Resto da divisão do primeiro pelo segundo;
  10. Resto da divisão do segundo pelo primeiro.


SAÍDA
O programa deve imprimir apenas o resultado da opção selecionada. Qualquer opção
diferente dessas deve imprimir a mensagem de erro pré-definida opção inválida!.
Se houve uma divisão por zero, o programa deve imprimir divisão por zero!. Em
todos os casos, após a impressão da frase ou do resultado, deve-se encerrar a
execução. */

#include <stdio.h>

int main() {
  int numero1, numero2, opcao, quociente_inteiro;
  float quociente;

  scanf("%d", &numero1);
  scanf("%d", &numero2);
  scanf("%d", &opcao);
  
  switch (opcao) {
    case 1:
      printf("%d\n", (numero1 + numero2));
      break;
    case 2:
      printf("%d\n", (numero1 - numero2));
      break;
    case 3:
      printf("%d\n", (numero2 - numero1));
      break;
    case 4:
      printf("%d\n", (numero1 * numero2));
      break;
    case 5:
      quociente = (int) (float)numero1 / (float)numero2;
      if (numero2 == 0) {
	printf("divisão por 0!\n");
      } else {
	printf("%.2f\n", quociente);
      }
      break;
    case 6:
      quociente = (int) (float)numero1 / (float)numero2;
      if (numero1 == 0) {
	printf("divisão por 0!\n");
      } else {
	printf("%.2f\n", quociente);
      }
      break;
    case 7:
      quociente_inteiro = numero1 / numero2;
      if (numero2 == 0) {
	printf("divisão por 0!\n");
      } else {
      printf("%d\n", quociente_inteiro);
      }
      break;
    case 8:
      quociente_inteiro = numero2 / numero1;
      if (numero1 == 0) {
	printf("divisão por 0!\n");
      } else {
      printf("%d\n", quociente_inteiro);
      }
      break;
    case 9:
      printf("%d\n", (numero1 % numero2));
      break;
    case 10:
      printf("%d\n", (numero2 % numero1));
      break;
    default:
      printf("opção inválida!\n");
      break;
  }

  return 0;
}
