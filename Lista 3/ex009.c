/* DESCRIÇÃO
Josias é um renomado professor de Matemática do ensino fundamental, conhecido
sobretudo por sua didática fora dos padrões, sempre inventando novas formas para
transmitir o conteúdo de sua matéria aos alunos. Em sua próxima aula de
classificação de triângulos, Josias gostaria de contar com a ajuda de um
programa de computador capaz de indicar o tipo de um triângulo a partir das
medidas de seus três lados. Ele contratou você para ajudá-lo nessa tarefa.
Josias precisa que o programa seja capaz de distinguir um triângulo escaleno,
isósceles ou equilátero. Não só isso, mas o programa deve funcionar para
qualquer combinação de medidas fornecidas para os três lados, mesmo que elas não
formem triângulo e, nesse caso, o programa deve imprimir a frase "Nao forma
triangulo". Abaixo está uma tabela para classificação de triângulos, que Josias
também utilizará em sua aula:

Condição	     Classificação
Lados Diferentes     Triângulo escaleno
2 Lados Iguais	     Triângulo isósceles
Todos Lados Iguais   Triângulo equilátero

Condição para a existência de um triângulo: a medida de qualquer lado deve ser
sempre menor que a soma das medidas dos outros dois lados.

ENTRADA
O programa receberá 3 números reais, separados por um espaço, indicando as
medidas dos três lados de um triângulo.


SAÍDA
A saída poderá ser uma das 4 frases abaixo, classificando o triângulo (se
existir) de acordo com seus lados:
  + Triangulo isosceles
  + Triangulo equilatero
  + Triangulo escaleno
  + Nao forma triangulo */

#include <stdio.h>

int main() {
  double lado1, lado2, lado3;

  scanf("%lf %lf %lf", &lado1, &lado2, &lado3);

  if ((lado1 > (lado2+lado3)) || (lado2 > (lado1+lado3)) || (lado3 > (lado1+lado2))) {
    printf("Nao forma triangulo\n");
  } else if ((lado1 == lado2) && (lado2 == lado3)) {
    printf("Triangulo equilatero\n");
  } else if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3) {
    printf("Triangulo isosceles\n");
  } else {
    printf("Triangulo escaleno\n");
  }

  return 0;
}
