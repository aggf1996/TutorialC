/*
	Funciones muy, muy útiles:


	strcpy(char destino, const char fuente)
		Sustituye el valor de 'destino' por el de 'fuente'
		
	strncpy(char destino, const char fuente, const int n)
		Sustituye 'n' caracteres de 'destino' por el de 'fuente'
		
	strxfrm(char destino, const char fuente, const int n)
		Toma 'n' caracteres de 'fuente' y los coloca al principio de 'destino'
		NOTA: Solo pondra al principio los 'n' caracteres de 'fuente', es decir
		que no toda la cadena 'destino' sera sustituida...

	strcat(char destino, const char fuente)
		Copia 'fuente' en 'destino' empezando al final de 'destino'

	strncat(char destino, const char fuente, const int n)
		Copia 'fuente' en 'destino' desde el caracter numero 'n'

	bool a = strcmp(char a, char b)
		Guarda en 'a' o Devuelve false si 'a' y 'b' son iguales

	bool a = strncmp(const char a, const char b, const int c)
		Guarda en 'a' o Devuelve false si 'n' caracteres de 'a' y 'b' son iguales
	
	int a = strlen(const char variable)
		Guarda en 'a' o Devuelve un size_t (entero): longitud de la cadena
	
	int a = strlen(const char variable)
		Guarda en 'a' o Devuelve un size_t (entero): longitud de la cadena - 1...
		
	char a = strpbrk(const char str1, const char str2)
		Guarda en 'a' o Devuelve el primer caracter de 'str2' que se encuentre en 'str1'
		
	char a = strrchr(const char *str, int c)
		Guarda en 'a' o Devuelve el ultimo caracter de 'str2' que se encuentre en 'str1'
		
	int a = strcspn(const char str1, const char str2)
		Guarda en 'a' o Devuelve el numero de caracteres de str1 que no estan en str2
		
	int a = strspn(const char str1, const char str2)
		Guarda en 'a' o Devuelve el numero de caracteres de str1 que estan en str2
*/
