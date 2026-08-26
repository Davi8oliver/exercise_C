/*
	Name: idade.cpp
	Author: Davi Lopes 
	Description: Programa para classificar a idade de uma pessoa com função
*/

//Seção de biblioteca

#include <stdio.h>

//Seção de Prototipação

void verificarIdade (int, char*);

main(){
	
	char nome[10];
	int idade = 0;
	
	printf("Digite o seu nome: \n");
	scanf("%9s", nome);
	
	printf("Digite sua idade: \n");
	scanf("%d", &idade);
	
	verificarIdade(idade, nome);
	
}//fim do main

//Seção de funções

void verificarIdade (int a, char n[10]){
	
	if (a <= 2){
		printf("\n%s, vc eh classificado como bebe", n);
	}else if (a <= 12){
		printf("\n%s, vc eh classificado como Crianca", n);
	}else if (a <= 19){
		printf("\n%s, vc eh classificado como Adolescente", n);
	}else if (a <= 59){
		printf("\n%s, vc eh classificado como Adulto", n);
	}else if (a <= 90){
		printf("\n%s, vc eh classificado como Idoso", n);
	}else {
		printf("\n%s, vc eh classificado como Matusalem", n);
	}
	
}