/*
	Name: SomaMatriz.cpp
	Author: Davi Lopes
	Date: 16/09/26 11:50
	Description: Programa para somar duas matrizes quadradas de mesma ordem
*/


//Biblioteca

#include <stdio.h>

//Prototiáção
void SomarMatrizes (int [][3], int [][3]);

main ()
{

		int mata[3][3] = {{3,6,2},{1,4,9},{5,6,7}};
		int matb[3][3] = {{2,1,9},{5,3,7},{8,2,6}};
		
		SomarMatrizes(mata, matb);
	
}//fim do main

//função
void SomarMatrizes (int a[][3], int b[][3]){
	
	int matSom [3][3];

	for (int i = 0; i < 3; i++){
			for (int j = 0; j < 3; j++){
				
				matSom[i][j] = a[i][j] + b[i][j];
			
			}

	}
	
	for (int i = 0; i < 3; i++){
			for (int j = 0; j < 3; j++){
				
				printf("|%d|\t", matSom[i][j]);
			
			}
		puts("\n");
	}

}
