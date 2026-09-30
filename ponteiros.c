/*
	Name: ponteiros.cpp
	Author: Davi Lopes 
	Date: 26/08/26 11:55
	Description: programa para monitorar ponteiros
*/

#include <stdio.h>

main()
{
	
	int vetor[20];//vetor de inteiros
	for(int i = 0; i < 20; i++)
		printf("%p\n", &vetor[i]);
	
	/*
	int *ptrA = &a;
	printf("A: %d", a);
	printf("\nConteudo apontado por ptrA: %d", *ptrA);
	
	printf("\n\nEndereco de A: %p", &a);
	printf("\nEndereco de ptrA: %p", &ptrA);
	*/

}
