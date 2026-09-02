/*
	Name: MuitoLoco.cpp
	Author: Davi Lopes
	Date: 02/09/26 10:45
	Description: Programa para manipular vetores junto com funções
*/

#include <stdio.h>

//Prototipação
int LerNum();

void imprimirVetor(int *);

main()
{
	int vet[5];
	//Fazer a carga do vetor
	for(int i = 0; i < 5; i++)
		vet[i] = LerNum();
	
	puts("\nConteudo do vetor:\n");
	imprimirVetor(vet);
}

//Função para ler e retornar um número digitado pelo usuário
int LerNum()
{
	
	int num = 0;
	
	printf("Digite um numero: \n");
	scanf("%d", &num);
	
	return num;

}

//Função para imprimir o vetor
void imprimirVetor(int *V)
{
	
	//Imprimindo o conteúdo do vetor
	for(int a = 0; a < 5; a++){
		
		printf("| %d | ", V[a]);
		
	}
	
}
