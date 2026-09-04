/*
	Name: MediaDez.cpp
	Author: Davi Lopes
	Date: 04/09/26 10:10
	Description: Programa para calcular a média de dez números com vetores e funções
*/

//Biblioteca

#include <stdio.h>

//prototipação
void carregarVetor (int *);
int calcularMedia (int *);
void exibirMediaArredondada (int);

main (){
	
	int vet[10];
	
	carregarVetor (vet);
	
	exibirMediaArredondada (calcularMedia (vet));
	
	
}//fim do main

//funções
void carregarVetor (int *V){
	
	for (int i = 0; i <10; i++){
		
		printf("Digite o numero #%d: ", i + 1);
		scanf("%d", &V[i]);
		
	}
	
}

int calcularMedia (int *V){
	
	float media = 0.0;
	
	for (int i = 0; i <10; i++){
		
		media = media + V[i];
		
	}
	
	media =(int) media / 10;
	
	return media;
	
}

void exibirMediaArredondada (int m){
	
	printf("\n\nA media arredondada dos 10 numeros eh: %d", m);
	
}
