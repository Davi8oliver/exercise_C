/*
	Name: positivoNegativo.cpp
	Author: Davi Lopes
	Date: 01/09/26 11:13
	Description: Programa para verificar se um numero é positivo ou negativo utilizando função
*/

//Seção Biblioteca

#include <stdio.h>

//Seção prototipação
void verificar (int);

main (){
	
	int num = 0;
	
	printf("Digite um numero para a verificacao: \n");
	scanf("%d", &num);
	
	verificar (num);
	
}//Fim do main

//Seção de Função
void verificar (int a){
	
	if (a < 0){
		
		printf("O numero %d, eh negativo!", a);
		
	}else if (a > 0){
		
		printf("O numero %d, eh positivo!", a);
		
	}else {
		
		printf("O numero %d, eh nulo!", a);
		
	}
	
}