/*
	Name: VetorParaMatriz.c
	Author: Davi Lopes
	Date: 30/09/26 11:37
	Description: Programa para carregar um vetor com 25 elementos inteiros
	 			 passar para uma função e, a partir daí faça a carga em uma matriz quadrada
	 			 de ordem 5, e depois imprima o vetor em uma função e a matriz em outra.
*/

//biblioteca
#include <stdio.h>

//prototipação
void carregarMatriz(int *, int[][5]);
void imprimirVetor(int *);
void imprimirMatriz(int [][5]);

main()
{
	
	int vet[25] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24};
	int mat[5][5];
	
	carregarMatriz(vet, mat);
	imprimirVetor(vet);
	imprimirMatriz(mat);
	
}//fim

//função
void carregarMatriz(int *V, int M[5][5]){
	
	for (int i = 0; i < 5; i++){
		for (int j = 0; j < 5; j++){
			if (i == 0){
				M[i][j] = V[j];
			}else if (i == 1){
				M[i][j] = V[j + 5];
			}else if (i == 2){
				M[i][j] = V[j + 10];
			}else if (i == 3){
				M[i][j] = V[j + 15];
			}else if (i == 4){
				M[i][j] = V[j + 20];
			}
		}
	}
	
}
void imprimirVetor(int *V){
	
	puts("- Conteudo do vetor -\n");
	
	for (int i = 0; i < 25; i++){
		printf("|%d|", V[i]);
	}
	
}
void imprimirMatriz(int M[][5]){
	
	puts("\n\n- Conteudo da matriz -\n");
	
	for (int i = 0; i < 5; i++){
		for (int j = 0; j < 5; j++){
			printf("| %d |", M[i][j]);
		}
		puts("\n");
	}
}
