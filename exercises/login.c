#include <stdio.h>//para entradas e saidas padr�es
#include <stdlib.h>//para system
#include <locale.h>//para definir o idioma e seus caracteres

int main()
{
	setlocale(LC_ALL, "Portuguese");//defini��o do idioma
	int usuario=015, senha=1234, cont=0, usuario1, senha1, prosseguir;//vari�veis(lembrando que pode ser utilizadas de diversos tipos)
	printf("---------\n");
	printf("- LOGIN -");//nome do programa

	do //la�o para leitura e compara��o do usu�rio e senha
	{
		printf("\n---------\n");
		printf("Usu�rio: ");
		scanf("%d", & usuario1);//leitura do usu�rio1
		printf("Senha: ");
		scanf("%d", & senha1);// leitura da senha
		++cont;//contador de tentativas
		if (usuario!=usuario1 && senha!=senha1)//condicional para verifica��o da senha e usu�rio
			{
				printf("---------\n");
				printf("Senha ou usu�rio inv�lido");//caso for inv�lidos
			}
		if(cont==3)//condicional para identifica��o de invasor
			{
			printf("\n-------------------\n");
			printf("INVASOR DETECTADO");
			return 0;
			}
			
	}while(cont!=3 && (usuario!=usuario1 && senha!=senha1) );//fim do la�o se a contagem for diferente de 3 e senha e usu�rio errados

	printf("-------------------\n");
	printf("\nC�DIGO DE LAN�AMENTO | ATEN��O! S� FA�A ISSO SE REALMENTE FOR NECESS�RIO!!!\n\nProsseguir: ");//aviso ao usu�rio
	scanf("%d", & prosseguir);//leitura para a vari�vel prosseguir

		if(prosseguir!=1)//condicional caso prosseguir for diferente do valor 1
		{
		printf("\nSISTEMA DE SEGURAN�A ATIVADO\nO sistema ser� desligado em 5s");//aviso ao usu�rio
		_sleep(5000);//mesmo que delay
		return 0;//encerramento do programa
		}
	
	return 0;//encerramento do programa caso INVASOR for detectado
}
