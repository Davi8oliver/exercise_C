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
	
	char palavra[20];
	
	printf("Digite uma palavra para verificar: ");
	gets(palavra);	
	
	verificarPalavra (palavra);
	
}//fim do main

//função
void verificarPalavra (char *P){
	
	int tamanho = 0;
	int aux = 0;
	int falso = 0;
	
	while (P[tamanho] != '\0') {
        tamanho++;
    }
    
    aux = tamanho;
    
    char verificacao[tamanho];
    
    for (int i = 0; i < aux; i++){
    	
    	verificacao[i] = P[tamanho - 1];
    	tamanho--;
    	
	}
	
	for (int i = 0; i < aux; i++){
		
		if (P[i] != verificacao[i]){
			
			falso++;
			
		}
		
	}
	
	if (falso > 0){
		
		printf("%s nao eh um palindromo!!!", P);
		
	}else {
		
		printf("%s eh um palindromo!!!", P);
	
	}	
}