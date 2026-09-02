/*
	Name: PalavraContrario.cpp
	Author: Davi Lopes
	Date: 02/09/26 10:45
	Description: Programa para ler uma string e armazenar no vetor
*/

#include <stdio.h>

//Prototipação
void imprimirContrario(char *);

main()
{
	char palavra[20];
	
	printf("Digite um texto de ate 10 caracteres: \n");
	gets(palavra);
	
	printf("\nEntrada:\n%s\n", palavra);
	
	imprimirContrario(palavra);
	
}

//Função
void imprimirContrario(char *P)
{
	
	puts("\nSaida: ");
	
	for (int i = 20; i >= 0; i--)
		printf("%c", P[i]);
	
}
