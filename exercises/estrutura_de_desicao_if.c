#include <stdio.h>
#include <stdlib.h>

int main()
{
	//captura de dados
	float base, lado1, lado2;
	printf("CLASSIFICACAO DE TRIANGULOS");
	printf("\n\nDigite o comprimento da base: ");
	scanf("%f", & base);
	printf("Digite o comprimento do lado: ");
	scanf("%f", & lado1);
	printf("Digite o comprimento do lado: ");
	scanf("%f", & lado2);
	
	//condi�oes
	if(base == lado1 && base == lado2 && lado1 == lado2 && lado2 == lado1 && lado1 == base && lado2 == base)
	printf("\nTriangulo Equilatero");
	else if(base == lado1 || base == lado2 || lado1 == lado2 || lado2 == lado1 || lado1 == base || lado2 == base)
	printf("\nTriangulo Isosceles");
	else if(base != lado1 && base != lado2 && lado1 != base && lado1 != lado2 && lado2 != base && lado2 != lado1)
	printf("\nTriangulo Escaleno");	
	
	//finaliza��o
	printf("\n\n\n");
	system("PAUSE");
	return 0;
}
