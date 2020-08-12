#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	float n1, n2, faltas, media, controle=80.00, freq, exame;
	int subs;
	printf("M�DIA E SUBSTITUI��O");
	printf("\nDigite a primeira nota: ");
	scanf("%f", & n1);
	printf("Digite a segunda nota: ");
	scanf("%f", & n2);
	printf("Digite a quantidade de faltas: ");
	scanf("%f", & faltas);
	
	media = (n1*0.4+n2*0.6)/1;
	freq = 100.00-((faltas*100.00)/controle);
	
	printf("\nM�dia parcial: %.1f", media);
	printf("\nFrequ�ncia: %.1f",freq);
	
	//condi��es para aprova��o sem substitui��o
	if(media >= 6.0 && freq >75.0)
	{
		printf("\nALUNO APROVADO");
	}
	else if(media >= 6.0 && freq<75.0)
	{
		printf("\nALUNO REPROVADO POR FREQU�NCIA: %.1f%%", freq);
	}
	
	//condi��es para aprova��o com substitui��o
	else if(media<6.0)
	{
		printf("\nM�dia abaixo do limite de aprova��o: %.1f", media);
		printf("\n\nInforme a nota do exame: ");
		scanf("%f", & exame);
		printf("\n1 - PRIMEIRA NOTA    2 - SEGUNDA NOTA\n Qual nota voc� deseja substituir: ");
		scanf(" %d", & subs);
		switch(subs)
		{
			case 1:
			media = (exame*0.4+n2*0.6)/1;
			if(media>=6.0)
			{
				printf("\nM�DIA FINAL: %.1f \nALUNO APROVADO", media);	
			}
			else if(media<6.0 && freq <= 75.0)
			{
				printf("\nM�DIA ABAIXO DO LIMITE DE APROVA��O: %.1f \nALUNO COM DEPEND�NCIA", media);
			}
			break;
			case 2:
			media = (n1*0.4+exame*0.6)/1;
			if (media>=6.0)
			{
				printf("\nM�DIA FINAL: %.1f \nALUNO APROVADO", media);
			}
			else if(media<6.0)
			{
				printf("\nM�DIA ABAIXO DO LIMITE DE APROVA��O: %.1f \nALUNO COM DEPEND�NCIA",media);
			}
			break;
			default:
				break;
		} 	
	}
	printf("\n\n\n");
	system("PAUSE");
	return 0;
}
