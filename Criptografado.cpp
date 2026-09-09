/*
	Name:  Criptografado.cpp
	Author: Davi Lopes
	Date: 09/09/26 11:44
	Description: Programa para criptografar informações
*/

//biblioteca
#include <stdio.h>

//prototipação
void merge (char *, char *);

main(){
	
	char nome[70];
	char docs[21];
	
	printf("Digite seu nome completo: "); gets(nome);
	
	printf("Digite seu cpf e rg: "); gets(docs);
	
	merge(nome, docs);
	
}//fim do main

//função
void merge (char *N, char *D){
	
	int i, j;
	
	for (i = 0; N[i] != '\0'; i++)
	{}
	
	int tam = i + 21;
	
	char crypto[tam];
	
	for (i = 0, j = 0; i < tam ; i++){
		
		if(N[i] != '\0' && D[i] != '\0'){
			crypto[j] = N[i];
			crypto[j+1] = D[i];
		 	j = j + 2;
		}
		
	}
	
	puts("\n\n====> Conteudo do vetor crypto: ");
	for (i = 0; crypto[i] != '\0'; i++){
	
		printf("%c|", crypto[i]);
	
	}		
}
