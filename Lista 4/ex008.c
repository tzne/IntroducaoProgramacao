/* DESCRIÇÃO
Joel estava pesquisando e descobriu a existência dos números retangulares. Eles
são formados a partir da multiplicação de dois números que estão em sequência, e
podem ser representados por um retângulo. Além disso, ele também percebeu que, a
partir de um número retangular, é possivel encontrar um número triangular, que
pode ser representado por um triângulo equilatero. Dado n, podemos calcular
qual é o n-ésimo número retangular r usando a expressão r=n(n+1) . Alguns
exemplos de número retangulares são: 0 2 6 12 20... Dado n , podemos perceber
que o n-ésimo número triangular equivale a metade do n-ésimo número
retangular. Alguns exemplos de número triangulares são: 0 1 3 6 10...

ENTRADA
O seu programa deverá receber:
  + Um inteiro que indica o início do intervalo; e
  + Um inteiro que indica o fim do intervalo.

SAÍDA
Para cada n no intervalo fechado, mostrar:
  + O n-ésimo número retangular;
  + Um desenho do retangulo correspondente ao número retangular feito usando o
  + caracter "O";
  + O n -ésimo número triangular;
  + Um desenho do triangulo equilatero correspondente ao número triangular, de cabeça para baixo, feito com os caracteres "O", "x" e "";
Siga o formato do exemplo. */

#include <stdio.h>

int main() {
  int inicio_intervalo, fim_intervalo, numero_retangular, numero_triangular;

  scanf("%d %d", &inicio_intervalo, &fim_intervalo);

  while (inicio_intervalo <= fim_intervalo) {
    numero_retangular = inicio_intervalo * (inicio_intervalo+1);
    numero_triangular = numero_retangular / 2;

    printf("%d\n", numero_retangular);
    int contador_linhas_retangular=0, contador_colunas_retangular; 

    while (contador_linhas_retangular < inicio_intervalo) {
      contador_colunas_retangular = 0;
      while (contador_colunas_retangular < (inicio_intervalo+1)) { // loop que desenha a linha do numero triangular
        printf("O");

        contador_colunas_retangular++;
      }
      printf("\n");

      contador_linhas_retangular++;
    }

    printf("%d\n", numero_triangular);

    int contador_linhas_triangular=inicio_intervalo, quantidade_x_comeco=0, quantidade_x_final=0;

    while (contador_linhas_triangular != 0) {
      int i = 0;
      while (i != quantidade_x_comeco) {
	printf("x");
	i++;
      }
      int Os_escritos = 0;
      while (Os_escritos < contador_linhas_triangular) { // quantos Os escrever na linha
	if (Os_escritos != contador_linhas_triangular-1) {
	  printf("O ");
	} else {
	  printf("O");
	}
	Os_escritos++;
      }
      i = 0;
      while (i != quantidade_x_final) {
	printf("x");
	i++;
      }
      printf("\n");

      quantidade_x_comeco++;
      quantidade_x_final++;
      contador_linhas_triangular--;

       
    }
    inicio_intervalo++;
  }

  return 0;
}
