/* DESCRIÇÃO
Um hospital está tentando implementar um novo sistema de atendimento preferencial, onde os próprios pacientes preenchem as suas informações em um painel e recebem um ticket correspondente à sua necessidade. Faça um programa que indica se o atendimento deve ser comum ou preferencial, e se for preferencial, por quais motivos.
Os casos em que o paciente recebem atendimento preferencial são os seguintes:
  + O paciente tem 60 anos ou mais;
  + A paciente está gestante;
  + O paciente possui deficiência;
  + O paciente está com criança de colo;
  + O paciente tem algum grau de obesidade (IMC maior ou igual a 30).
  + Essas situações serão representadas respectivamente pelas letras I, G, D, C e O.

 
ENTRADA
A entrada do seu programa será composta por duas linhas:
  + Três números, que são respectivamente a idade, a altura e o peso do paciente.
  + Quatro caracteres. O primeiro poderá ser M ou F, que representa o gênero do paciente, onde M significa "Masculino" e F significa "Feminino". Os outros três podem ser S ou N, que representam respectivamente se é uma "gestante", se o paciente tem uma "deficiência" e, por último, se o paciente está com uma "criança de colo", sendo que S significa "Sim" e N significa "Não".

 

SAÍDA
A saída do seu programa será composta por apenas uma linha. Caso o paciente não tenha acesso a atendimento preferencial, o programa deve imprimir na tela "Atendimento comum". Caso o paciente tenha acesso a atendimento preferencial, o programa deve imprimir "Atendimento preferencial, motivos: -----", onde cada traço (-) deve ser substituido pelas letras que representam as situações na mesma ordem que foram citadas anteriormente, mas apenas se essa for uma das causas, caso contrário, o traço deve permanecer. */

#include <stdio.h>

int main() {
  int idade, preferencia=0;
  float peso, altura, imc;
  char genero, gestante, deficiencia, crianca_colo, preferencia_gestante='-', preferencia_deficiencia='-', preferencia_idade='-', prefeciencia_crianca='-', preferencia_obesidade='-';

  scanf("%d %f %f", &idade, &altura, &peso);
  scanf(" %c %c %c %c", &genero, &gestante, &deficiencia, &crianca_colo);

  imc = peso / (altura*altura);

  if (idade >= 60) {
    preferencia = 1;
    preferencia_idade = 'I';
  }
  if (gestante == 'S') {
    preferencia = 1;
    preferencia_gestante = 'G';
  }
  if (deficiencia == 'S') {
    preferencia = 1;
    preferencia_deficiencia = 'D';
  }
  if (crianca_colo == 'S') {
    preferencia = 1;
    prefeciencia_crianca = 'C';
  }
  if (imc >= 30) {
    preferencia = 1;
    preferencia_obesidade = 'O';
  }

  if (preferencia) {
    printf("Atendimento preferencial, motivos: %c%c%c%c%c\n", preferencia_idade, preferencia_gestante, preferencia_deficiencia, prefeciencia_crianca, preferencia_obesidade);
  } else {
    printf("Atendimento comum\n");
  }

  return 0;
}
