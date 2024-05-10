
/* DESCRIÇÃO
Imagine que você é um nintendista frustrado que, cansado de jogar os mesmos
jogos de novo e de novo, decide criar um novo jogo inovador, nunca visto, e que
você jura que irá revolucionar a indústria dos games.

Nesse jogo, criaturas fantásticas irão lutar umas contra as outras, em batalhas
épicas e cheias de poder. Tais seres possuirão poderes e características
próprias, os quais você decide chamar de "Monstros de Bolso!". Inovador, não?!
O programa colocará dois monstros para lutar, recebendo o tipo (fogo - F, água -
A ou planta - P), a vida (vida>0) e o poder de ataque (poder≥0) de cada um,
respectivamente. Ambos os monstros irão realizar um ataque. O programa deve
retornar quais deles foram derrotados e, se ficaram vivos, uma mensagem seguida
da vida restante.

Tabela de dano:
  + Fogo: Inflige 2x de dano em planta. Recebe 1/2 de dano de planta.
  + Água: Inflige 2x de dano em fogo. Recebe 1/2 de dano de fogo.
  + Planta: Inflige 2x de dano em água. Recebe 1/2 de dano de água.
  + Monstros de mesmo tipo não alteram o dano infligido ou recebido.

ENTRADA
A entrada do programa será, respectivamente, para cada um dos dois monstros: um
caractere (char) indicando o tipo do monstro (F, P, A) e dois números racionais
positivos representando a vida e o poder de ataque.

SAÍDA
A saída deverá ser primeiro para o primeiro monstro, indicando se foi derrotado
(O primeiro foi derrotado) ou se ficou vivo (O primeiro sobreviveu), imprimindo,
em seguida, sua vida restante (Vida restante: [valor]). Após uma quebra de
linha, o estado do segundo monstro deverá ser impresso, no mesmo modelo do
primeiro. */

#include <stdio.h>

#define INVALIDO "Valores invalidos\n"

int main() {
  char tipo1, tipo2;
  double vida1, vida2, poder1, poder2;

  scanf("%c %lf %lf %c %lf %lf", &tipo1, &vida1, &poder1, &tipo2, &vida2, &poder2);

  if (vida1 <= 0 || vida2 <=0 || poder1 < 0 || poder2 < 0 || (tipo1 != 'A' && tipo1 != 'P' && tipo1 != 'F') || (tipo2 != 'A' && tipo2 != 'P' && tipo2 != 'F')) {
    printf(INVALIDO);

    return 0;
  }

  if (tipo1 == 'F' && tipo2 == 'P') {
    poder1 *= 2;
    poder2 /= 2;
  } else if (tipo1 == 'P' && tipo2 == 'F') {
    poder1 /= 2;
    poder2 *= 2;
  } else if (tipo1 == 'F' && tipo2 == 'A') {
    poder1 /= 2;
    poder2 *= 2;
  } else if (tipo1 == 'A' && tipo2 == 'F') {
    poder1 *= 2;
    poder2 /= 2;
  } else if (tipo1 == 'A' && tipo2 == 'P') {
    poder1 /= 2;
    poder2 *= 2;
  } else if (tipo1 == 'P' && tipo2 == 'A') {
    poder2 /= 2;
    poder1 *= 2;
  }

  vida1 -= poder2;
  vida2 -= poder1;

  if (vida1 <= 0) {
    printf("O primeiro foi derrotado\n");
  } else {
    printf("O primeiro sobreviveu\n");
    printf("Vida restante: %.2f\n", vida1);
  }
  if (vida2 <= 0) {
    printf("O segundo foi derrotado\n");
  } else {
    printf("O segundo sobreviveu\n");
    printf("Vida restante: %.2f\n", vida2);
  }

  return 0;
}
