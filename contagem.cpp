/*
	Name: contagem.cpp
	Author: Davi Lopes 
	Description: Programa para fazer uma contagem regressiva
*/

//Seção de biblioteca

#include <stdio.h>

//Seção de Prototipação

void contar (int);

main(){
	
	int num = 0;
	
	printf("Digite um numero para iniciar a contagem: \n");
	scanf("%d", & num);
	
	contar (num);
	
}//fim do main

//Seção de funções

void contar (int num){
	
	for (int i = num; i >= 0; i--){
		
		printf("\n%d", i);
		
	}
	
	puts("\nFOGO!!!");
	
}