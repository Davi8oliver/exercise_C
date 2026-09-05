/*
	Name:  Criptografado.cpp
	Author: Davi Lopes
	Date: 05/09/26 05:25
	Description: Programa para criptografar informações
*/

//biblioteca
#include <stdio.h>

//prototipação
void merge (char *, char *);
void mostrarCrypto (char *);

main(){
	
	char vetor1[60];
	char vetor2[60];
	
	printf("Digite seu nome completo: ");
	gets(vetor1);
	
	printf("Digite seu cpf e rg: ");
	gets(vetor2);
	
	merge(vetor1, vetor2);
	
}//fim do main

//função
void merge (char *V1, char *V2){
	
	
	char crypto[84];
	
	int aux = 0;
	
	for (int i = 0; i < 84; i++){
		
		if ( i - (2 * (i / 2)) == 1 ){	
			if (V2[i/2] == '\0'){
				crypto[i] = ' ';
				aux++;
				
				if (aux > 1){
					crypto[i] = '\0';
				}
			}else {
				crypto[i] = V2[i/2];
			}
		}else{
			
			if (V1[i/2] == '\0'){
				crypto[i] = ' ';
				aux++;
				
				if (aux > 1){
					crypto[i] = '\0';
				}
			}else {
				crypto[i] = V1[i/2];
			}
			
		}
	 	
	}
	
	crypto[84] = '\0';
	
	mostrarCrypto(crypto);
	
}

void mostrarCrypto (char *C){
	
	printf("\n\nDado criptografado: %s", C);
	
}
