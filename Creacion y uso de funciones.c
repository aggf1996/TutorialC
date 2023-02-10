#include <stdio.h>

/*
    Creación y uso de funciones
    
    Las funciones son, por ejemplo:

        printf();   -> Ésta está declarada en la librería stdio.h
        sqrt();     -> Ésta está declarada en la librería math.h

    Las funciones pueden necesitar o no, parámetros con los cuales trabajar, por ejemplo:

        printf( char variable[] );   -> variable[] es el texto que se muestra en la pantalla
        sqrt( int variable );        -> variable puede ser 'int' o 'float', y será el valor al elevar al cuadrado
        
    Las funciones pueden devolver o no valores, como por ejemplo:

        int n;
        n = sqrt( 3 );  <- Se le está asignando a 'n' el valor 3 al cuadrado
        printf(n);      <- Mostrará '9', el cuadrado de '3'
        
            * Esto sucede gracias a que cuando se definió 'sqrt()' en la librería math.h
            que con el parámetro ingresado a la función, retornará el cuadrado de tal parámetro
        
        system("cls");  <- Solo borrará el texto de la pantalla y no devolverá nada
        
    Las funciones se pueden crear y se hacen entre el área de #include y el main, de esta manera:

        #include <stdio.h>
        
        DEFINICION DE FUNCIONES
        
        int main()
        { bla bla bla... }
        
        
    Se definen de la siguiente manera:

        dato_devuelto nombre(parámetros){}
        
    Por ejemplo:

        int cuadrado_de(int numero)
        {
            return numero*numero;
        }
        
    De esta manera, se puede usar la funcion 'cuadrado_de' para
    asignar el cuadrado de un entero a otro entero...
    
    int numero -> define que el parámetro que necesita la función debe ser entero
    int cuadrado_de -> define que el número devuelto por la función es entero
    
    Uso:
        int z, b = 3;
        z = cuadrado_de( b );  <- Se le asigna el valor 'b * b' a 'z'
        
    Otro ejemplo:
        * Realize función que teniendo de parámetro '1' muestre en pantalla 'uno'
        
    void traducir( int n )
    {
        if(n == 1) printf("uno");
    }
    
                IMPORTANTE!!
        * Las variables creadas dentro de la función no se pueden usar fuera de ella
        
        * Los nombres de los parámetros son 'relativos', o sea una variable dentro del
        main puede llamarse igual que un parámetro.
          Por lo tanto se le puede dar un nombre diferente en su definición y otro
        diferente al ser llamado en el main()
        
        * Si modificas un parámetro, el valor modificado solo se verá dentro de la función
        y dará error
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

