/* DESCRIÇÃO
Matias é um estudante de BCC que, assim como você, precisa encarar várias
disciplinas de matemática. Rotineiramente, ele precisa calcular valores de
funções do segundo grau e, como qualquer ser humano, acaba cometendo pequenos
erros de cálculo. Ajude Matias, criando um programa que calcula o valor de uma
função do segundo grau (f(x)) dado um valor de x . Lembre-se que uma função do
segundo grau é dada por: f(x)=ax^2+bx+c .

ENTRADA
O seu programa receberá os coeficientes a , b e c (inteiros), na primeira linha,
e o valor de x (real) na segunda linha.

SAÍDA
A saída do programa será o resultado de f(x), com duas casas decimais. */

#include <stdio.h>

int main() {
  int a,b,c;   // inicializa as variáveis de coeficiente 
  double x, fx; // Incializa as variáveis de x e de f(x)

  scanf("%d%d%d", &a, &b, &c); // l

  scanf("%lf", &x);

  fx = a*(x*x) + b*x+ + c;

  printf("%.2f\n", fx);

  return 0;
}
