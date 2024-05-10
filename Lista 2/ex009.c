/* DESCRIÇÃO
Sr. Dônaldis, dono de um fast-food local, decidiu adotar um sistema de senhas
em sua lanchonete para atender o enorme número de pedidos no horário de
almoço. As senhas são compostas de 3 letras maiúsculas de A a Z, sendo que
quando chegam na letra Z retornam à letra A e fazem a letra à sua esquerda
avançar uma para frente, conforme o exemplo a seguir.
AAA -> AAB -> AAC -> -> AAZ -> ABA -> ⋯
Sabendo disso, escreva um programa que, sabendo a senha atual, calcule
quantas senhas faltam para chegar na sua vez.

ENTRADA
Seu programa deve receber 3 caracteres da senha atual e, em seguida, 3
caracteres da sua própria senha. Ambas serão compostas apenas por letras
maiúsculas de A a Z.

SAÍDA
O programa deve imprimir a quantidade de senhas que estão entre a sua e a
senha atual. */

#include <stdio.h>

int main() {
  char atual1, atual2, atual3, senha1, senha2, senha3;
  int numero_falta1, numero_falta2, numero_falta3, falta_total;

  scanf("%c %c %c", &atual1, &atual2, &atual3);
  scanf(" %c %c %c", &senha1, &senha2, &senha3);

  numero_falta1 = (senha1 - atual1) * 26*26;
  numero_falta2 = (senha2 - atual2) * 26;
  numero_falta3 = (senha3 - atual3);

  falta_total = numero_falta1 + numero_falta2 + numero_falta3;

  printf("%d\n", falta_total);

  return 0;
}
