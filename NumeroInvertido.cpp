/*
	Name: NumeroInvertido.cpp
	Author: Davi Lopes
	Date: 08/09/26 10:42
	Description: Programa para inverter um numero sem vetor
*/

//biblioteca

#include <stdio.h>

//prototipação
void inverter(int);

main(){
	
	int num = 0;
	
	printf("Digite um numero: ");
	scanf("%d", &num);
	
	inverter (num);
	
}//fim do main

//função
void inverter(int n){
	
	int result = 0;
	
	while (n > 0){
		
		result = n / 10;
		
		result = result * 10; 
		
		result = n - result;
		
		printf("%d", result);
		
		n = n / 10;
	}
	
}