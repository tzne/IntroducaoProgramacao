/* DESCRIÇÃO
Mefistofélio Credolfo, um calouro da UFSCar que mora longe do campus,
diariamente precisa calcular o horário que deverá acordar para ir às aulas.
Cansado de ter que refazer os cálculos com frequência, Mefis (para os
íntimos!) decide pedir a você - serelepe programador(a) - para criar um
programa que calcule o horário que ele deverá acordar para chegar na
faculdade.

ENTRADA
O seu programa deverá receber:
O tempo previsto para chegar no campus (em minutos), esse número será um
inteiro 0 < n ≤ 300 ; e O horário em que Mefis precisa estar na faculdade.
Esse número será recebido como dois inteiros: um representando as horas (h) e
o outro representando os minutos (m), sendo que 8 ≤ h <22 e 0 ≤ m < 60.

SAÍDA
O programa deve imprimir o horário que Mefis deverá sair de casa para chegar
na faculdade na hora desejada. A hora deverá estar no formato de hh:mm (horas
e minutos). */

#include <stdio.h>

int main() {
  int n, h, m, minutos_hm, minutos_n;

  scanf("%d", &n);
  scanf("%d %d", &h, &m);

  minutos_hm = 60*h + m;

  minutos_hm -= n;

  h = minutos_hm / 60;
  m = minutos_hm % 60;

  printf("%d:%02d\n", h, m);

  return 0;
}
