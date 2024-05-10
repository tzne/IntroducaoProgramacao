/* DESCRIÇÃO
A média ponderada é muito utilizada para o cálculo da média final em disciplinas
que possuem diversos métodos de avaliação. Faça um programa que calcule a média
ponderada das notas dos alunos em uma disciplina. Cada aluno possui até 15
notas, representando as avaliações realizadas ao longo do semestre. Cada nota
tem um peso específico que influencia na média final do aluno. As notas podem
variar de 0.0 a 10.0, e os pesos são números inteiros positivos.

ENTRADA
Seu programa deverá receber um número inteiro q para a quantidade de notas,
seguido da notas n1,n2,...,nq e o seu respectivo peso p1,p2,...,pq .

SAÍDA
Seu programa deverá imprimir a média ponderada com aproximação de duas casas
decimais. */

#include <stdio.h>

int main() {
  int q, peso, total_peso=0, i=0;
  double nota, total_nota=0, media;

  scanf("%d", &q);

  while (i < q) {
    scanf("%lf %d", &nota, &peso);
    total_nota += nota*peso;
    total_peso += peso;

    i++;
  }

  media = total_nota / total_peso;

  printf("%.2lf\n", media);

  return 0;
}
