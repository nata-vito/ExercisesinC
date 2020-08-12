#include<stdio.h>
#include<stdlib.h>
#include <locale.h>
#define alunos 20 
#define numeros 10


int main(){
	setlocale(LC_ALL, "");
	int opcao, i;
	opcao = menu();
	
	if(opcao == 1)
	{
		system("CLS");
		cadastroAlunos();
	}
	else if(opcao == 2)
	{
		system("CLS");
		dobroIndice();
	}	
	else if(opcao != 1 || opcao !=2)
	{
		puts("  OP��O INV�LIDA");
	}
	return 0;
}


//MENU
int menu(){
	int op;
	printf("  1 - PROGRAMA PARA CADASTRO DE ALUNOS | MEDIA | QUANTIDADE SUPERIOR A 50\n  2 - O DOBRO DOS �NDICES\n  Op��o: ");
	scanf(" %d", &op);
	puts("  ---------");
	return op;
}


//CADASTRO DE ALUNOS 
int cadastroAlunos(){
	float nota[alunos], soma=0.0, media, menorNota;
	int i, maiorCinco=0, opcaoSegundo, cont, opcao;
	printf("\n  - CADASTRAMENTO DE %d NOTAS | M�DIA | MENOR NOTA | QUANTIDADE SUPERIOR A 5 -\n\n", alunos);
	puts("  ----- AVISO -----");
	printf("  Digite os valores conforme a lingua padronizada pelo seu computador\n  Ex.: Ingl�s - 2.0 | Portugu�s - 2,0\n");
	puts("  -----------------");
	
	for(i=0; i<alunos; i++)//enquanto o indice for menor que a quantidade de alunos, o la�o continuar� sendo executado e ser� incrementado 1 a vari�vel i
	{
		if(i<9)
		{
			printf("  Informe a %d� nota:  ", i+1);//usuario informar� as notas, para que apare�a corretamente o numero do aluno usa-se o incremental, pois o primeiro indice sempre � 0
		}
		else if(i>=9)
		{
			printf("  Informe a %d� nota: ", i+1);	
		}
		scanf("%f", & nota[i]);//leitura ds notas, a variavel i � o numero do indice onde ser� armazendo o valor digitado
		soma+=nota[i];//a vari�vel soma, no momento inicial � = a 0, o seu valor sera somado a nota.
		menorNota=nota[0];//inicializa��o do menor valor
		
		if(nota[i]>5.0)//condicional para encontrar as notas pelos indices que s�o maiores que 5
		{
			++maiorCinco;//vari�vel contadora para o n�mero de vezes que as notas foram inferio
		}
		if(i==0)//condicional para a verifica��o da menor nota, caso for 0, esta sera a menor nota
		{
			menorNota=nota[i];//a vari�vel menorNota sera igual a nota do indice que esta sendo executado, no momento inicial i=0
		}
		else if(nota[i]<=menorNota)//condicional para menor nota caso for superior ao valor armazenado na vari�vel menorNota
		{
			menorNota=nota[i];
		}
	}
	
	system("CLS");//limpeza de tela
	media = soma/alunos;//media dos alunos
	
	printf("\n  - CADASTRAMENTO DE %d NOTAS | M�DIA | MENOR NOTA | QUANTIDADE SUPERIOR A 5 -\n\n", alunos);
	printf("\n  ----- Valores Informados -----\n\n");
	
	for (i=0; i<alunos; i++)//la�o para informa os valores digitados 
		{
			if(i<9)
			{
				printf("  Nota aluno %d  = %.2f\n", 1+i, nota[i]);
			}
			else if(i>=9)
			{
				printf("  Nota aluno %d = %.2f\n", 1+i, nota[i]);
			}
		}
	
	printf("\n  M�dia dos valores: %.2f\n  Menor nota: %.2f\n  Quantidade de notas acima de 5: %d\n\n  ----------\n\n  Digite 2 para executar o progama DOBRO DOS VALORES DO VETOR\n  0 - Finalizar\n  Digite sua op��o: ", media, menorNota, maiorCinco);//sa�da dos valores e objetivo do exercicio
	
	for(cont = 0; cont <= 3; cont++)
	{
		scanf( "%d", &opcaoSegundo);
		if(opcaoSegundo == 2)
		{
			system("CLS");
			dobroIndice();
		}
		else if(opcao != 0 || opcao != 2)
		{
			printf("  Op��o inv�lida!!!\n  Digite uma op��o v�lida: ");
		}
		if(opcaoSegundo == 0)
		{
			system("CLS");
			return 0;
		}
		if(cont == 3)
		{ 	
			system("CLS");
			return 0;
		}
	}
}



//VETOR DOBRO DE OUTRO VETOR 
int dobroIndice(){
	int numerosDigitados[numeros], numerosDobro[numeros],  i=0, cont, opcao;
	puts("  ----------- AVISO ------------");
	printf("  Digite apenas valores inteiros\n");
	printf("  ------------------------------");
	printf("\n  - O DOBRO DOS �NDICES -\n");
	printf("  -----------------------\n");
	
	for(i = 0 ; i < numeros ; i++){
		printf("  Digite o %d� valor: ", i+1);
		scanf("%d", &numerosDigitados[i]);
		numerosDobro[i]= 2*numerosDigitados[i];
	}
	
	system("CLS");
	printf("\n  ----- Valores -----\n\n");
	
	for(i = 0 ; i < numeros ; i++){
		if(i<9)
		{
			printf("  %d� valor e seu dobro:  %d - %d\n", i+1, numerosDigitados[i], numerosDobro[i]);
		}
		else if(i>=9)
		{
			printf("  %d� valor e seu dobro: %d - %d\n", i+1, numerosDigitados[i], numerosDobro[i]);
		}
	}
	
		printf("\n  ----------\n\n  Digite 1 para executar o progama CADASTRAMENTO DE %d NOTAS | M�DIA | MENOR NOTA | QUANTIDADE SUPERIOR A 5\n  0 - Finalizar\n  Digite sua op��o: ", alunos);
	
	for(cont = 0; cont <= 3; cont++)
	{
		scanf("%d", &opcao);
		if(opcao == 1)
		{
			system("CLS");
			cadastroAlunos();
		}
		else if(opcao != 0 || opcao != 1)
		{
			printf("  Op��o inv�lida!!!\n  Digite uma op��o v�lida: ");
		}
		if(opcao == 0)
		{
			system("CLS");
			return 0;
		}
	}
	
}
