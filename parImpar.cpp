/*
	Name: parImpar.cpp
	Author: Davi Lopes 
	Description: Programa para verificar se um numero é par ou impar atravéz de funções
*/

//Seção de biblioteca

#include <stdio.h>

//Seção de Prototipação

int lerNum ();
void verificarParImpar (int);

main(){
	
	verificarParImpar(lerNum());
	
}//fim do main

//Seção de funções

int lerNum (){
	
	int num = 0;
	
	printf("Digite o numero a ser verificado: \n");
	scanf("%d", &num);
	
	return num;
	
}

void verificarParImpar (int a){
	
	int quoc, rest;
	
	quoc = rest = 0;
	
	quoc = a / 2;
	
	rest = a - (quoc * 2);
	
	if (rest == 0){
		printf("O numero %d, eh Par.");
	}else {
		printf("O numero %d, eh Impar.");
	}
	
}