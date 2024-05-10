/* DESCRIÇÃO
James estava estudando segurança de dados e se deparou com os números de
Armstrong. Um número é chamado número de Armstrong se a soma de cada um dos seus
dígitos elevados a k , sendo k a quantidade de dígitos desse número, resultar
nele mesmo. Lendo a explicação, James percebeu que verificar se um número é um
número de Armstrong é uma tarefa fácil computacionalmente, e seu dever é
confirmar sua teoria. Para isso, faça um programa onde dado um número, verifique
se ele é um número de Armstrong ou não.

ENTRADA
O seu programa deverá receber um número inteiro N<10^7 .

SAÍDA
O programa deve ter como saída se o número é um número de Armstrong ou não,
mostrando "NUMERO DE ARMSTRONG" quando for ou "NAO E NUMERO DE ARMSTRONG". */


#include <stdio.h>
#include <math.h>

int main() {
  int N, k=0, soma=0, aux;

  scanf("%d", &N);

  aux = N;
  
  // contar os dígitos
  while (aux != 0) {
    aux /= 10;
    k++;
  }
  
  aux = N;
  
  // soma dos dígitos elevados a k
  while (aux != 0) {
    int digito = aux % 10;
    soma += pow(digito, k);
    aux /= 10;
  }
  
  if (soma == N) {
    printf("NUMERO DE ARMSTRONG\n");
  } else {
    printf("NAO E NUMERO DE ARMSTRONG\n");
  }
  
  return 0;
}
