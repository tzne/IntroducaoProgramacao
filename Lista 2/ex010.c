/* DESCRIÇÃO
João Pedro está estudando matemática, mais especificamente unidades de
medida, e aprendeu que uma unidade de bilhão equivale a 1 bilhão, uma unidade
de milhão equivale a 1 milhão, e que uma unidade de milhar equivale a 1 mil.
Diante disso, auxilie João Pedro em seus estudos criando um programa que,
dado um número de no máximo a casa dos bilhões, calcule qual a quantidade de
unidades de bilhão, milhão, mil, e a quantidade de unidades desse número.
Tome como exemplo: 
15.342.011.244
15 Unidades de Bilhão
342 Unidades de Milhão
11 Unidades de Milhar
244 Unidades

ENTRADA
O seu programa deverá receber: um número inteiro N , sendo 0 ≤N≤
999.999.999.999;

SAÍDA
A saída do programa deverá estar no seguinte formato:
W bilhao(oes)
X milhao(oes)
Y mil
Z unidade(s)
Sendo W , X , Y , Z respectivamente a quantidade de unidades de bilhão, a
quantidade de unidades de milhão, a quantidade de unidades de milhar e a
quantidade de unidades do número. 
Em seguida deve ocorrer uma quebra de linha ("\n"). */

#include <stdio.h>
#define BILHAO 1000000000
#define MILHAO 1000000

int main() {
  long unsigned int N, W=0, X=0, Y=0, Z=0;

  scanf("%ld", &N);

  W = N / BILHAO;
  N -= (W*BILHAO);
  X = N / MILHAO;
  N -= X*MILHAO;
  Y = N / 1000;
  N -= Y*1000;
  Z = N / 1;
  N -= Z;

  printf("%ld bilhao(oes)\n%ld milhao(oes)\n%ld mil\n%ld unidade(s)\n", W, X, Y, Z);

  return 0;
}
