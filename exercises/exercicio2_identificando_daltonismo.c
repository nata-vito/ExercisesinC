#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	int sexoCrianca, geneMae, genePai;
	setlocale(LC_ALL, "Portuguese");
	printf("IDENTIFICANDO O DALT�NISMO");
	printf("\n\n1-Masculino   0-Feminino \nDigite o sexo da crian�a: ");
	scanf("%d", & sexoCrianca);
	printf("\n1-SIM   0-N�O\nA m�e � portadora do gene do dalt�nismo?\nR: ");
	scanf("%d", & geneMae);
	printf("\n1-SIM   0-N�O\nO pai � portador do gene do dalt�nismo?\nR: ");
	scanf("%d", & genePai);
		
	
	//para menino
	if (sexoCrianca == 1 && geneMae == 1 )
	{
		printf("\nO MENINO � DALT�NICO");
	}
	else if(sexoCrianca == 1 && geneMae == 0)
	{
		printf("\nO MENINO N�O � DALT�NICO");
	}
	//para menina
	else if (sexoCrianca == 0 && geneMae == 1 && genePai == 1)
	{
		printf("\nA MENINA � DALT�NICA");
	}
	else if (sexoCrianca == 0 && geneMae == 1 && genePai == 0 || sexoCrianca == 0 && geneMae == 0)
	{
		printf("\nA MENINA N�O � DALT�NICA");
	}

	
	printf("\n\n\n");
	system("PAUSE");
	return 0;
}

