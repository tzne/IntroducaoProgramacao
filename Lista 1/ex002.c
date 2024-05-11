/* Descrição
Faça um programa que receba o salário de um funcionário, calcule e imprima o
novo salário sabendo-se que este sofreu um aumento de 22%.

Entrada
A entrada deve conter um número real.

Saída
A saída deve conter um número real com o valor do salário após o aumento.*/

#include <stdio.h>

int main (){

	float salario;
	
	printf("Insira o salário do funcionário: R$");
	scanf("%f", &salario);

	salario *= 1.22;
	
	printf("O novo salário do funcionário, com reajuste de 22%% é de R$%.2f\n", salario);

	return (0);
}
