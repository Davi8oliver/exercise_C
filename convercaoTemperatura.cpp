/*
	Name: convercaoTemperatura.cpp
	Author: Davi Lopes
	Date: 01/09/26 11:28
	Description: Programa para converter Celcius em Fahrenheit utilizando função
*/

//Seção Biblioteca

#include <stdio.h>

//Seção prototipação
float converter (int);

main (){
	
	int celcius = 0;
	float fahr = 0;
	
	printf("Digite a temperatura em Celcius: \n");
	scanf("%d", &celcius);
	
	fahr = converter (celcius);
	
	printf("%d C equivale a %.1f F", celcius, fahr);
	
}//Fim do main

//Seção de Função
float converter (int a){
	
	float result = 0;
	
	result = 32 + (a * 1.8);
	
	return result;
	
}