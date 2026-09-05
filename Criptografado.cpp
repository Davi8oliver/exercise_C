/*
	Name:  Criptografado.cpp
	Author: Davi Lopes
	Date: 05/09/26 05:25
	Description: Crie uma função que receba dois vetores, um com seu nome completo e outro com os dados
				do seu CPF e RG. Nesta função, chamada "merge" deverá misturar os dados dos dois 
				vetores da seguinte forma:
				Entrada "vetor1": Antonio Gabriel Leme
				Entrada "vetor2": 09935678224 138456732 (observe quem tem um espaço entre CPF e RG)
				O novo vetor gerado com o texto "misturado" deverá ser passado parauma outra função
				que deverá realizar a impressão dele. Saída vetor "crypto": A0n9t9o3n5i6o7 8G2a2b4r 
				i1e3l8 4L5e6m7e32
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