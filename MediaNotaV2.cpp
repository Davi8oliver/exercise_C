/*
	Name: MediaNotaV2.cpp
	Author: Davi Lopes
	Date: 02/09/26 10:45
	Description: Programa para calcular a média de um aluno com vetor e função
*/

#include <stdio.h>

//Prototipação
float calcularMedia(float *);

void analizarMedia(float);

main()
{
	
	float nota[6];
	
	for (int i = 0; i < 6; i++){
		
		printf("Digite a nota #%d: ", i+1);
		scanf("%f", &nota[i]);
		
	}
	
	analizarMedia(calcularMedia(nota));
	
}

//Função 1
float calcularMedia(float *N)
{
	
	float media = 0.0;
	
	for (int i = 0; i < 6; i++){
		
		media = media + N[i];
		
	}
	
	media = media / 6;
	
	return media;
	
}

//Função 1
void analizarMedia(float m){
	
	if (m < 4){
		puts("\nReprovado!!");
	}else if (m < 6){
		puts("\nExame!!");
	}else {
		puts("\nAprovado!!");
	}
	
}
