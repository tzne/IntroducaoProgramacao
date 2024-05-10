/* DESCRIÇÃO
Pedrinho adora jogos eletrônicos. Mais que isso, ele gosta quando seus amigos
também jogam, assim, constantemente empresta sua conta Steam. Com medo de
roubarem o código de acesso de sua conta, Pedrinho pede sua ajuda para criar um
programa de criptografia, para que assim possa passar seu código sem medo de ser
interceptado por terceiros.

ENTRADA
O seu programa deverá receber:
  1. o número que representa o dia do mês em que foi feita a criptografia; e
  2. quatro letras maiúsculas, todas juntas, sem espaço, que representam o
código de acesso.

SAÍDA
As saídas do programa deverão ser as seguintes (uma em cada linha):
  1. O valor na tabela ASCII da primeira letra somado ao dia do mês;
  2. O valor na tabela ASCII da segunda letra subtraído do dia do mês;
  3. O valor na tabela ASCII da terceira letra vezes o dia do mês; e
  4. A posição do alfabeto da quarta letra. */

#include <stdio.h>

int main() {
  int dia;
  char letra1, letra2, letra3, letra4;

  scanf("%d", &dia);
  scanf(" %c %c %c %c", &letra1, &letra2, &letra3, &letra4);

  printf("%d\n", letra1 + dia);
  printf("%d\n", letra2 - dia);
  printf("%d\n", letra3 * dia);
  printf("%d\n", letra4 - 64);
  
  return 0;
  }
