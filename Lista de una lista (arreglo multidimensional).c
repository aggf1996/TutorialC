#include <stdlib.h>
#include <stdio.h>

/*
    Declaraci�n y uso de listas bidimensionales o listas de una lista
    
    Se declaran as�:
        char nombres[ A ][ B ];
        'A' determina cu�ntos elementos...
        'B' determina que cada elemento tendr� m�ximo 'A' caracteres
                                (caracteres, porque nombres[][] es de tipo 'caracter')
        
    Se pueden leer as�:
        scanf("%s", nombres[ i ]);
    Normalmente se leen con un ciclo for, aunque con un while tambi�n funciona
    
     Y tambi�n puede ped�rsele al usuario el n�mero de elementos que tendr� la lista
    y luego declarar la lista as�:
                            char nombres[cantidad][];
*/

int main()
{
    int i,longitud;
    
    // Determina cu�ntos elementos tendr� la lista
    
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

