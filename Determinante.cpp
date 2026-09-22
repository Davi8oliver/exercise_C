/*
	Name: Determinante.cpp
	Author: Davi Lopes
	Date: 22/09/26 10:58
	Description: Programa para calcular o determinante de uma matriz
*/

//biblioteca
#include <stdio.h>

//prototipação
float calcularDeterminante(float [][3]);
void analisarDeterminante(float);

main(){
	float determinante[3][3];
	int cont = 1;
	
	printf("Digite 9 numeros: \n\n");
	
	for (int i = 0; i < 3; i++){
		for (int j = 0; j < 3; j++){
			printf("%d- ", cont);
			scanf("%f", &determinante[i][j]);
			cont++;
		}
	}
	
	printf("\n\n");
	
	analisarDeterminante(calcularDeterminante(determinante));
}//fim

//função
float calcularDeterminante(float D[][3]){
	
	float result, soma1, soma2;
	result = soma1 = soma2 = 0;
	
	soma1 = (D[0][0]*D[1][1]*D[2][2])+(D[0][1]*D[1][2]*D[2][0])+(D[1][0]*D[2][1]*D[0][2]);
	soma2 = (D[0][2]*D[1][1]*D[2][0])+(D[1][2]*D[2][1]*D[0][0])+(D[0][1]*D[1][0]*D[2][2]);
	
	result = soma1 - soma2;
	
	return result;
}

void analisarDeterminante(float a){
	
	if (a > 0){
		printf("Determinante POSITIVO cujo valor eh igual a %.1f", a);
	}else if (a < 0){
		printf("Determinante NEGATIVO cujo valor eh igual a %.1f", a);
	}
	
}