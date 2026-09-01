/*
	Name: delta.cpp
	Author: Davi Lopes
	Date: 01/09/26 11:39
	Description: Programa para calcular o delta de uma equação de segundo grau utilizando função
*/

//Seção Biblioteca

#include <stdio.h>

//Seção prototipação
int calcular (int, int, int);

main (){
	
	int num1, num2, num3, result;
	num1 = num2 = num3 = result = 0;
	
	printf("Digite o valor de a: ");
	scanf("%d", &num1);
	
	printf("Digite o valor de b: ");
	scanf("%d", &num2);
	
	printf("Digite o valor de c: ");
	scanf("%d", &num3);
	
	result = calcular (num1, num2, num3);
	
	printf("O delta da equacao %d (elevado a 2) - 4 * %d * %d eh: %d", num2, num1, num3, result);
	
}//Fim do main

//Seção de Função
int calcular (int a, int b, int c){
	
	int delta = 0;
	
	delta = b * b - 4 * a * c;
	
	return delta;
	
}