/*
	Name: passagemDeParametro.cpp
	Author: Davi Lopes
	Date: 26/08/26 09:59
	Description: Programa para realizar a troca de valores entre variáveis demonstrando o conceito de passagem de parâmetros tanto por CÓPIA quanto por REFERÊNCIA
*/

//Seção de biblioteca

#include <stdio.h>

//Seção de prototipação

void trocar (int *, int *);

main(){
	
	int a, b, aux;
	
	a = 5; //hard code
	b = 15; 
	
	printf("\n\nA: %d", a);
	
	printf("\nB: %d", b);
	
	trocar (&a, &b);
	
	printf("\n\nA: %d", a);
	
	printf("\nB: %d", b);
	

}//fim do main

/*Função para realizar a troca de valores
entre duas variáveis*/
void trocar (int *a, int *b){
	
	int aux = 0;
	
	aux = *a;
	*a = *b;
	*b = aux;
	
}
