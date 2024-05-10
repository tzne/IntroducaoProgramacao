/* DESCRIÇÃO
Jeanne Louise Calment é a pessoa mais velha de que se tem registro na história
humana, morrendo com 122 anos em 1997. Escreva um programa que, dada a idade de
uma pessoa e o ano em que ela completou essa idade, imprima na tela o ano em que
ela faria 122 anos.

ENTRADA
A entrada é composta por duas linhas. Na primeira, estará a idade de uma pessoa.
Na segunda linha, consta o ano em que ela completou a idade informada na linha
anterior.

SAÍDA
Seu programa deve imprimir na tela o ano em que a pessoa completará 122 anos,
seguido por uma quebra de linha. */

#include <stdio.h>

int main (){

  int idade, ano_idade, nascimento, ano_122;

  scanf("%d", &idade);
  scanf("%d", &ano_idade);

  nascimento = ano_idade - idade;

  ano_122 = nascimento + 122;

  printf("%d\n", ano_122);

  return (0);
}
