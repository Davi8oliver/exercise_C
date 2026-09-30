/*
	Name: Fibonacci.c
	Author: Davi Lopes
	Date: 30/09/26 09:54
	Description: Programa para exibir a sequência de fibonacci com a quantidade de elementos escolhida pelo usuário
*/

//biblioteca
#include <stdio.h>

//prototipação
int * calcularFibonacci(int *, int);
void imprimirFibonacci(int *, int);

main()
{
	
	int qtdElementos = 0;
	
	printf("Digite quantos elementos vc deseja: ");
	scanf("%d", &qtdElementos);
	
	int fibo[qtdElementos];
	
	imprimirFibonacci(calcularFibonacci(fibo, qtdElementos), qtdElementos);
	
}//fim

//função para fazer o calculo de fibonacci e armazena-lo em um vetor
int * calcularFibonacci (int *fibo, int qtd){
	
	fibo[0] = 1;
	fibo[1] = 1;
	
	int prox = 0;
	prox = 0;
	
	for (int i = 2; i < qtd; i++){
		fibo[i] = fibo[i - 1] + fibo[i - 2];
	}
	
	return fibo;

}

//Função para imprimir o vetror préviamente carregado
void imprimirFibonacci(int *F, int qtd){
	
	puts("\n\n- Conteudo do Vetor -\n");
	
	for (int i = 0; i < qtd; i++){
		printf("|%d|", F[i]);
	}
	
	puts("\n\n");
	
	puts("- numero de ouro -\n");
	
	for (int i = qtd - 1; i > 0; i--){
		printf("|%.3f|", (float)F[i] / F[i - 1]);
	}
	
}
