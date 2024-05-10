/* DESCRIÇÃO
Com a crescente aparição de casas de apostas na mídia, você resolve dar uma
chance para sua sorte, e apostar uma pequena quantia do seu patrimônio. Visando
automatizar uma parte do trabalho, você resolve implementar um algoritmo para te
ajudar em suas apostas. Como você pretende começar com algo simples, então
escolhe um jogo de cartas clássico: Blackjack. As regras da casa de apostas são
surpreendentemente simples:
  + Em caso de vitória no Blackjack, sua aposta é triplicada.
  + Em caso de derrota, você perde todo o dinheiro apostado.
  + Caso sua mão seja menor que  21 você pode escolher parar ou continuar,
porém, você decide fazer isso por conta própria. Então, o programa apenas deve
indicar que você está com uma mão menor que 21 e seu saldo ainda se mantém o
mesmo.

ENTRADA
A entrada do programa será composta pelas seguintes informações separadas por
espaço:
  + Três caracteres, representando as cartas recebidas na rodada.
  + Um inteiro, representando o valor apostado na rodada.


SAÍDA
A saída deve ser composta por duas informações, a primeira indicando o resultado
da sua mão:
  + Mãos abaixo de 21 : Mao abaixo de 21! Suas cartas somam: x
  + Mão com exatamente 21 : Blackjack! Rodada garantida!
  + Mãos acima de 21 : Estourou! Suas cartas somam: x
Sendo x o valor da soma das suas 3 cartas.
A segunda informação deve indicar o seu saldo atual na rodada:
  + Saldo atual da rodada: y
Sendo y o seu saldo em reais. */

#include <stdio.h>

int main() {
  char carta1, carta2, carta3;
  int saldo, x;

  scanf("%c %c %c %d", &carta1, &carta2, &carta3, &saldo);

  // Em blackjack, as cartas 'J', 'Q' e 'K' valem 10
  if ((carta1 == 'J') || (carta1 == 'Q') || (carta1 == 'K') ) {
    carta1 = 58;
  }
  if ((carta2 == 'J') || (carta2 == 'Q') || (carta2 == 'K') ) {
    carta2 = 58;
  }
  if ((carta3 == 'J') || (carta3 == 'Q') || (carta3 == 'K') ) {
    carta3 = 58;
  }

  // Em blackjack, a carta 'A' vale 1
  if (carta1 == 'A'){
    carta1 = 49;
  }
  if (carta2 == 'A'){
    carta2 = 49;
  }
  if (carta3 == 'A'){
    carta3 = 49;
  }

  // Verifica a pontuação, fazendo a conversão do char da tabela ASCII para o inteiro equivalente
  x = (carta1-48) + (carta2-48) + (carta3-48);

  if (x < 21) {
    printf("Mao abaixo de 21! Suas cartas somam: %d\n", x);
  } else if (x == 21) {
    saldo *= 3;
    printf("Blackjack! Rodada garantida!\n");
  } else {
    saldo = 0;
    printf("Estourou! Suas cartas somam: %d\n", x);
  }
  
  printf("Saldo atual da rodada: %d\n", saldo);


  return 0;
}
