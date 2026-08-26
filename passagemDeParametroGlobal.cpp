/*
	Name: passagemDeParametroGlobal.cpp
	Author: Davi Lopes
	Date: 26/08/26 09:59
	Description: Programa para realizar a troca de valores entre variáveis demonstrando o conceito de passagem de parâmetros tanto por CÓPIA quanto por REFERÊNCIA
*/

//Seção de biblioteca

#include <stdio.h>

//Seção de prototipação

void trocar ();

//variaveis globais
int a, b, aux = 7;

main(){
	
	a = 5; //hard code
	b = 10; 
	
	printf("\n\nA: %d", a);
	
	printf("\nB: %d", b);
	
	trocar ();
	
	printf("\n\nA: %d", a);
	
	printf("\nB: %d", b);
	
	printf("\n\nGlobal: %d", aux);
	

}//fim do main

/*Função para realizar a troca de valores
entre duas variáveis*/
void trocar (){
	
	int aux = 0;
	
	aux = a;
	a = b;
	b = aux;
	
	printf("\n\nLocal: %d", aux);
	
}
