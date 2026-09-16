/*
	Name: Matriz.cpp
	Author: Davi Lopes
	Date: 16/09/26 10:06
	Description: Programa para manipular matrizes dentro de uma função
*/


//Biblioteca

#include <stdio.h>

//Prototiáção
void imprimirMatriz (int [][3]);

main ()
{

		int mat[3][3] = {{7,8,9},{0,1,4},{5,6,9}}; //Matriz quadrada de ordem 3
		
		puts("Conteudo da matriz: ");
		
		imprimirMatriz(mat);
	
}//fim do main

//função
void imprimirMatriz (int mocorongo[][3]){

	for (int i = 0; i < 3; i++){
			for (int j = 0; j < 3; j++){
				printf("|%d|\t", mocorongo[i][j]);
			
			}
			puts("\n");
		}

}
