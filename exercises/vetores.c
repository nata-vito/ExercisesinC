#include <stdio.h>
#include <locale.h>
#define alunos 20

int main(){
	setlocale(LC_ALL, "Portuguese");
	float custoAlc[alunos], soma=0, media;
	int i;//i de indice
	
	for(i=0; i<; i++){
		printf("Informe o %d� Valor: R$ ", i+1);
		scanf("%f", & custoAlc[i]);
		soma+=custoAlc[i];
	}
	media = soma/T;
	printf("\n----- Valores Informados -----\n");
	for (i=0; i<T; i++){
		printf("\nCusto [ %d ] = R$%.2f", 1+i, custoAlc[i]);
	}
	
	printf("\nM�dia dos valores: R$%.2f", media);
	
	return 0;
}
