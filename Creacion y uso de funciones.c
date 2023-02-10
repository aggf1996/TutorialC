#include <stdio.h>

/*
    Creaci�n y uso de funciones
    
    Las funciones son, por ejemplo:

        printf();   -> �sta est� declarada en la librer�a stdio.h
        sqrt();     -> �sta est� declarada en la librer�a math.h

    Las funciones pueden necesitar o no, par�metros con los cuales trabajar, por ejemplo:

        printf( char variable[] );   -> variable[] es el texto que se muestra en la pantalla
        sqrt( int variable );        -> variable puede ser 'int' o 'float', y ser� el valor al elevar al cuadrado
        
    Las funciones pueden devolver o no valores, como por ejemplo:

        int n;
        n = sqrt( 3 );  <- Se le est� asignando a 'n' el valor 3 al cuadrado
        printf(n);      <- Mostrar� '9', el cuadrado de '3'
        
            * Esto sucede gracias a que cuando se defini� 'sqrt()' en la librer�a math.h
            que con el par�metro ingresado a la funci�n, retornar� el cuadrado de tal par�metro
        
        system("cls");  <- Solo borrar� el texto de la pantalla y no devolver� nada
        
    Las funciones se pueden crear y se hacen entre el �rea de #include y el main, de esta manera:

        #include <stdio.h>
        
        DEFINICION DE FUNCIONES
        
        int main()
        { bla bla bla... }
        
        
    Se definen de la siguiente manera:

        dato_devuelto nombre(par�metros){}
        
    Por ejemplo:

        int cuadrado_de(int numero)
        {
            return numero*numero;
        }
        
    De esta manera, se puede usar la funcion 'cuadrado_de' para
    asignar el cuadrado de un entero a otro entero...
    
    int numero -> define que el par�metro que necesita la funci�n debe ser entero
    int cuadrado_de -> define que el n�mero devuelto por la funci�n es entero
    
    Uso:
        int z, b = 3;
        z = cuadrado_de( b );  <- Se le asigna el valor 'b * b' a 'z'
        
    Otro ejemplo:
        * Realize funci�n que teniendo de par�metro '1' muestre en pantalla 'uno'
        
    void traducir( int n )
    {
        if(n == 1) printf("uno");
    }
    
                IMPORTANTE!!
        * Las variables creadas dentro de la funci�n no se pueden usar fuera de ella
        
        * Los nombres de los par�metros son 'relativos', o sea una variable dentro del
        main puede llamarse igual que un par�metro.
          Por lo tanto se le puede dar un nombre diferente en su definici�n y otro
        diferente al ser llamado en el main()
        
        * Si modificas un par�metro, el valor modificado solo se ver� dentro de la funci�n
        y dar� error
*/


void traducir(int n)
{
    if(n == 1) printf("uno");
    else if(n == 2) printf("dos");
    else printf("Solo se puede mostrar 'uno' o 'dos'");
}


int main()
{
    int numero;
    
    printf("Ingrese 1 o 2: ");

    scanf("%d",&numero);
    
    traducir(numero);

    return 0;
}

