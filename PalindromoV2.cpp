/*
	Name: PalindromoV2.cpp
	Author: Davi Lopes
	Date: 04/09/26 10:35
	Description: Programa para verificar se uma palavra é um palindromo
*/

//biblioteca
#include <stdio.h>

//prototipação
int verificarPalindromo (char *);

main(){
	
	char palavra[50];
	int tamanho;
	int teste = 0;
	
	tamanho = sizeof(palavra)/sizeof(char); //calcula o tamanho do vetor
	
	printf("Digite uma palavra: ");
	gets(palavra);
	
	teste = verificarPalindromo(palavra);
	
	if (teste == 1){
		puts("\n\neh um palindromo!!");
	}else{
		puts("\n\nnao eh um palindromo!!");
	}
		
}//fim do main

//função para verificar se é um palindromo
int verificarPalindromo (char *P)
{
	
	int i, dir, esq;
	
	for (i = 0; P[i] != '\0'; i++)
		printf("|%c|", P[i]);
	
	dir = i - 1;
	esq = 0;
	
	for (i = esq; esq <= dir; i++){
		
		if(P[esq] != P[dir]){
			return 0;//falso
		}else {
			esq++;
			dir--;
		}
		
	}
	
	return 1;//verdadeiro
	
}
