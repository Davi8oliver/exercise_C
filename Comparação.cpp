/*
	Name: Comparação.cpp
	Author: Davi Lopes
	Date: 21/09/26 18:38
	Description: Programa para verificar entre somas de conjuntos de inteiros qual é o maior
*/

//biblioteca
#include <stdio.h>

//prototipação
void determinarMaiorConjunto(int [][5]);

main(){
	
	int cont = 1;
	int matnome[5][5];
	
	printf("Digite 25 numeros: \n\n");
	
	for (int i = 0; i < 5; i++){
		for(int j = 0; j < 5; j++){
			printf("%d- ", cont);
			scanf("%d", &matnome[i][j]);
			cont++;
		}
	}
	
	determinarMaiorConjunto(matnome);
	
}//fim

//função
void determinarMaiorConjunto(int M[][5]){
	
	int soma[6] = {0};
	int i, j, teste;
	i = j = teste = 0;
		
	for (i = 0; i < 5; i++){
		for(j = 0; j < 5; j++){
			if (i == j){
				if (i == j){
					soma[0] = soma[0] + M[i][j];
				}else if (i + j == 4 ){
					soma[3] = soma[3] + M[i][j];
				}else if (i + j < 4){
					soma[4] = soma[4] + M[i][j];
				}else if (i + j > 4){
					soma[5] = soma[5] + M[i][j];
				}
			}else if (j > i){
				if (j > i){
					soma[1] = soma[1] + M[i][j];
				}else if (i + j == 4){
					soma[3] = soma[3] + M[i][j];
				}else if (i + j < 4 ){
					soma[4] = soma[4] + M[i][j];
				}else if (i + j > 4){
					soma[5] = soma[5] + M[i][j];
				}
			}else if (i > j){
				if (i > j){
					soma[2] = soma[2] + M[i][j];
				}else if (i + j == 4 ){
					soma[3] = soma[3] + M[i][j];
				}else if (i + j < 4){
					soma[4] = soma[4] + M[i][j];
				}else if (i + j > 4){
					soma[5] = soma[5] + M[i][j];
				}
			}
		}
	}
	
	for (i = 0; i < 6; i++){
		if (soma[i] > soma[teste]){
			teste = i;
		}
	}
		if (teste == 0){
			printf("O maior gupo eh a Diagonal Principal");
		}else if (teste == 1){
			printf("O maior gupo eh o Acima da Diagonal Principal");
		}else if (teste == 2){
			printf("O maior gupo eh o Abaixo da Diagonal Principal");
		}else if (teste == 3){
			printf("O maior gupo eh a Diagonal Secundaria");
		}else if (teste == 4){
			printf("O maior gupo eh o Acima da Diagonal Secundaria");
		}else if (teste == 5){
			printf("O maior gupo eh o Abaixo da Diagonal Secundaria");
		}
}