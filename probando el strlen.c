#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main()
{
	char x[10], b[10]; int n;
	printf("d = ");
	scanf("%s", x);
	
	n=strlen(x); // Funciona :P
	
	printf("strlen(%s) = %d\n", x, n);
	printf("b = ");
	scanf("%s", b);
	
 	printf("strcpy(x, b) \n");
	printf("strcpy(%s, %s) \n", x, b);
	
	strcpy(x, b);         // Esto demuestra que cuando copias
	printf("x = %s", x);  // una string a otra, el valor anterior se borra completamente...
	
	return 0;
}

