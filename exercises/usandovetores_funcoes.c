#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define alunos 10

void aprovacao(){
	system("cls");
	int numero, quadrado;
	printf("  Quadrado de um n�mero");
	while(numero != 0){
		printf("\n\n  Digite um n�mero != 0:");
		scanf("%d", &numero);
		quadrado = numero*numero;
		printf("  O quadrado de %d �: %d\n\n", numero, quadrado);
	}	
}


int main(){
	setlocale(LC_ALL, "Portuguese");
	int opcao;
	puts("0 - Aprova��o de alunos com nota >= 6.0");
	printf("Op��o: ");
	scanf("%d", & opcao);
	
		if(opcao==0)
		{
			aprovacao();
		}
		
	
	return 0;
}


