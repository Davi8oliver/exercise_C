/*
	Name: mediaProvas.cpp
	Author: Davi Lopes
	Date: 01/09/26 12:03
	Description: Programa para calcular a media de 3 ou 2 provas utilizando função
*/

//Seção Biblioteca

#include <stdio.h>

//Seção prototipação

void calcularMedia (float, float, float);

main (){
	
	float n1, n2, n3;
	n1 = n2 = n3 = 0.0;
	
	printf("Digite a primeira nota: ");
	scanf("%f", &n1);
		
	printf("Digite a segunda nota: ");
	scanf("%f", &n2);
		
	printf("Digite a terceira nota: ");
	scanf("%f", &n3);
	
	calcularMedia(n1, n2, n3);
	
}//Fim do main

//Seção de Função
void calcularMedia (float a, float b, float c){
	
	float media1, media2, maior, menor;
	media1 = media2 = maior = menor = 0;
	
	if (a > b && a > c){
		
		media1 = media1 + a;
		maior = a;
		
	}else if (a > b || a > c){
		
		media1 = media1 + a;
		
	}else  {
		menor = a;
	}
	
	if (b > a && b > c){
		
		media1 = media1 + b;
		maior = a;
		
	}else if (b > a || b > c){
		
		media1 = media1 + b;
		
	}else  {
		menor = b;
	}
	
	if (c > b && c > a){
		
		media1 = media1 + c;
		maior = a;
		
	}else if (c > b || c > a){
		
		media1 = media1 + c;
		
	}else  {
		menor = c;
	}
	
	media1 = media1 / 2;
	
	printf("\nA media das duas maiores notas eh: %.2f", media1);
	
	media2 = a + b + c;
	media2 = media2 / 3;
	
	printf("\n\nA media das tres notas seria: %.2f", media2);
	
	printf("\n\nSua maior nota eh: %.2f", maior);
	
	printf("\nSua menor nota eh: %.2f", menor);
	
}