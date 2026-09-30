/*
	Name: Imc.cpp
	Author: Davi Lopes 
	Description: Programa para calcular o IMC de uma pessoa
*/

//Seção de biblioteca

#include <stdio.h>

//Seção de Prototipação

float calcularImc (float, float);

main(){
	
	char nome[60];
	
	float peso = 0.0;
	float resultado = 0.0;
	float altura = 0.0;
	
	printf("Digite seu primeiro nome: \n");
	scanf("%59s*", nome);
	
	printf("\n\nDigite sua altura: \n");
	scanf("%f", &altura);
	
	printf("\n\nDigite seu peso: \n");
	scanf("%f", &peso);
	
	resultado = calcularImc(peso, altura);
	
	printf("%s, com uma altura de %.2f e o peso de %.2f, seu IMC eh de: %.1f", nome, altura, peso, resultado);
	
	
}//fim do main

//Seção de funções

float calcularImc (float a, float b){
	
	float total = 0.0;
	
	total = a / (b * b);
	
	return total;
	
}
