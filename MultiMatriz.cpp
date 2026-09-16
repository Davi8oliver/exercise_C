/*
	Name: MultiMatriz.cpp
	Author: Davi Lopes
	Date: 16/09/26 12:10
	Description: Programa para multiplicar duas matrizes
*/


//Biblioteca

#include <stdio.h>

//Prototiáção
void MultiMatrizes (int [3][2], int [2][3]);
void ImprimirMatrizes (int [3][2], int [2][3], int [][3]);

main ()
{

		int mata[3][2] = {{2,4},{6,7},{8,7}};
		int matb[2][3] = {{8,2,1},{7,6,5}};
		
		MultiMatrizes(mata, matb);
	
}//fim do main

//função
void MultiMatrizes (int a[3][2], int b[2][3]){
	
	int multiResult [3][3];

	for (int i = -1; i < 3; i++){
			for (int j = -1; j < 2; j++){
				
				multiResult[i][j] = (a[i+1][j+1] * b[j+1][i+1]) + (a[i+1][j+2] * b[j+2][i+1]);
			
			}

	}

	ImprimirMatrizes (a, b, multiResult);

}

void ImprimirMatrizes (int a[3][2], int b[2][3], int resultado [][3]){
	
	printf("\n\nConteudo da Matriz a: \n\n");
	
	for (int i = 0; i < 3; i++){
			for (int j = 0; j < 2; j++){
				
				printf("|%d|\t", a[i][j]);
			
			}
		puts("\n");
	}
	
	printf("\n\nConteudo da Matriz b: \n\n");
	
	for (int i = 0; i < 2; i++){
			for (int j = 0; j < 3; j++){
				
				printf("|%d|\t", b[i][j]);
			
			}
		puts("\n");
	}
	
	printf("\n\nConteudo da Soma: \n\n");
	
	for (int i = 0; i < 3; i++){
			for (int j = 0; j < 3; j++){
				
				printf("|%d|\t", resultado[i][j]);
			
			}
		puts("\n");
	}	
	
}
