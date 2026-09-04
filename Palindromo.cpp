/*
	Name: Palindromo.cpp
	Author: Davi Lopes
	Date: 04/09/26 10:35
	Description: Programa para verificar se uma palavra é um palindromo
*/

//biblioteca
#include <stdio.h>

//prototipação
void verificarPalavra (char *);

main(){
	
	char palavra[10];
	
	printf("Digite uma palavra para verificar: ");
	gets(palavra);	
	
	verificarPalavra (palavra);
	
}//fim do main

//função
void verificarPalavra (char *P){
	
	int falso = 0;
	
	char verificacao[10];
	
	for (int i = 0; i < 10; i++){
		
		verificacao[i] = P[9 - i];
		
	}
	
	printf("\n\npalavra escrita: ");
	
	for (int i = 0; i < 10; i++){
		
		printf("%c", P[i]);
		
	}
	
	printf("\n\npalavra invertida: ");
	
	for (int i = 0; i < 10; i++){
		
		printf("%c", verificacao[i]);
		
	}
	
	for (int i = 0; P[0] != verificacao[i]; i++) {

		scanf("%d", &falso);		
		
    }
    	
    printf("%d", falso);
}
    
    

