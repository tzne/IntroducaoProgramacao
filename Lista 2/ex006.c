/* DESCRIÇÃO
Seu tio Orlando adora viajar para todos os cantos do mundo. Contudo, não sabe
muito sobre conversão de unidades de medida de comprimento. Desta vez, ele irá
para os Estados Unidos, que utiliza o Sistema Imperial de medidas, e deseja
converter metros para pés, polegadas, jardas e milhas.

ENTRADA
Os casos de teste são compostos por uma única entrada: um número que representa
uma medida em metros.

SAÍDA
A saída do seu programa deve conter quatro linhas, cada uma delas com o
resultado da conversão do número em metros para pés, polegadas, jardas e milhas,
respectivamente. Os resultados devem ter uma casa decimal de precisão. */

#include <stdio.h>

int main() {
  float pes, polegadas, jardas, milhas, metros, centimetros;

  printf("Insira uma medida (em metros): ");
  scanf("%f", &metros);

  centimetros = metros*100;

  pes = centimetros / 30.48;
  polegadas = centimetros / 2.54;
  jardas = centimetros / 91.44;
  milhas = metros / 1609.344;

  printf("%.1f metros = %.1f pés\n", metros, pes);
  printf("%.1f metros = %.1f polegadas\n", metros, polegadas);
  printf("%.1f metros = %.1f jardas\n", metros, jardas);
  printf("%.1f metros = %.1f milhas\n", metros, milhas);

  return 0;
}
