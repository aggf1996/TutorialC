#include <stdlib.h>
#include <stdio.h>

/*
    Leer varios tipos de datos
    
    Los datos, como sabemos, se leen así:
        scanf("",&variable);

     Lo que esté dentro del "" será la forma de la cual la
    computadora lea los datos...
    
    Por ejemplo:
        Tenemos:

        scanf("%s %d",nombre,&edad);
        
         Por lo tanto la computadora leerá lo que ingreses por teclado
        de esta manera:

                %s %d
        
         Y lo almacenará de esta manera:

                %s %d
                |  |
           nombre  edad

        Si introducimos por teclado esto:
            "Anthony 18"

         La computadora almacenará "Anthony" en la variable 'nombre'
        y '18' en la variable 'edad'...
        NOTA: Funcionó con un espacio, más de un espacio y una tabulación.
*/

int main()
{
    char nombre[20]; int edad;

    printf("Ingrese su nombre y seguido de un espacio y su edad: ");
    
    scanf("%s %d",nombre,&edad);
    
    printf("nombre = '%s'\n",nombre);
    printf("edad = '%d' ",edad);
    
    return 0;
}

