#include <stdlib.h>
#include <stdio.h>

/*
	Probando el x++ en otros tipos de datos...
*/

int main()
{
	char caracter; bool binario; int i, limite;
	system("cls");
	printf("Ingrese el caracter inicial: ");
	scanf("%c",&caracter);
	printf("\nIngrese el numero de veces que se aumentaran: ");
	scanf("%d",&limite);
	for(i=0;i<=limite;i++)
	{
		printf("%c ",caracter++);
	}
	printf("\n");
	for(i=0;i<=limite;i++)
	{
		printf("%d ",binario++);
	}
	printf("\nFinalizado.");
	main();
}

