/* DESCRIÇÃO
Valentina é dona de uma loja online e sabe a importância de trazer mais clareza,
foco e objetividade na hora de captar e atender clientes. Para isso, você foi
contradado para realizar um programa que auxilie na segmentação de clientes da
Valentina, baseado nos gastos mensais dos clientes na loja. Existem os seguintes
segmentos:
  + Novo: gasto mensal de até R$150.00
  + Vip: gasto mensal entre R$150 e R$400.00
  + Premium: gasto mensal acima de R$400.00

ENTRADA
Seu programa deverá receber a média de gastos mensal de n clientes na loja, até
que haja ao menos 1 cliente de cada segmento.

SAÍDA
Seu programa deverá imprimir o número de cada cliente (ordem de entrada) e sua
segmentação, seguido do número do cliente com maior e menor gasto mensal. */


#include <stdio.h>

int main() {
  double media;
  int cliente, n_novo=0, n_vip=0, n_premium=0, maior_cliente, menor_cliente, i=1;
  double maior_media = -1, menor_media = 9999999999;

  while (n_novo==0 || n_vip==0 || n_premium==0) {
    scanf("%lf", &media);

    if (media < 150) {
      n_novo++;
      printf("%d Novo\n", i);
    } else if (150 <= media && media <= 400) {
      n_vip++;
      printf("%d Vip\n", i);
    } else {
      n_premium++;
      printf("%d Premium\n", i);
    }

    if (media > maior_media) {
      maior_media = media;
      maior_cliente = i;
    } 
    if (media < menor_media) {
      menor_media = media;
      menor_cliente = i;
    }

    i++;
  }

  printf("Menor: Cliente %d\n", menor_cliente);
  printf("Maior: Cliente %d\n", maior_cliente);
  
  return 0;
}
