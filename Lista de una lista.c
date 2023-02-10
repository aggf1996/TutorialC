#include <stdlib.h>
#include <stdio.h>

/*
    Declaración y uso de listas bidimensionales o listas de una lista
    
    Se declaran así:
        char nombres[ A ][ B ];
        'A' determina cuántos elementos...
        'B' determina que cada elemento tendrá máximo 'A' caracteres
                                (caracteres, porque nombres[][] es de tipo 'caracter')
        
    Se pueden leer así:
        scanf("%s", nombres[ i ]);
    Normalmente se leen con un ciclo for, aunque con un while también funciona
    
     Y también puede pedírsele al usuario el número de elementos que tendrá la lista
    y luego declarar la lista así:
                            char nombres[cantidad][];
*/

int main()
{
    int i,longitud;
    
    // Determina cuántos elementos tendrá la lista
    
    printf("Ingrese cantidad de nombres: ");
    scanf("%d",&longitud);
    
    // Declaro la lista
    
    char nombres[longitud][20];
    
    // Un ciclo para leer cada elemento
    
    for(i=0 ; i < longitud ; i++)
    {
        printf("Ingrese nombre #%d: ",i);
        scanf("%s" , nombres[i]);
    }
    
    // Un ciclo para mostrarlos
    
    for(i=0 ; i < longitud ; i++)
        printf("%d: %s \n" ,i,nombres[i]);
    
    return 0;
}

