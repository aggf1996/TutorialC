#include <stdlib.h>
#include <stdio.h>

/*
    Tutorial: Listas o arreglos... by:AnthonyGómez
    
    Así se declaran las listas:
        int lista[5];
    El número 5 determina que el arreglo 'lista' tendrá 5 valores...
    
    Los valores se guardan en direcciones de memoria
    
    las cuales están organizados así:

        [0] [1] [2] [3] [4] --> Nótese que se cuenta desde 0 a 4, esto nos da 5 valores...
        
        Si tratas de imprimir lista[5] -> dará error o no saldrá nada porque éste es un valor nulo (null)
    
    Y para poder mostrar un valor de alguna lista debemos saber cómo se ordenan los elementos de la misma
    
        Supongamos que tenemos una lista vacía llamada lista[5]
        
        Los valores iniciales serán:
            null null null null null
            [0]  [1]  [2]  [3]  [4]
            
            
            
        Para declarar los elementos de una lista:

            Se declaran así:

                int lista[5] = { 42, 711, 911, 643, 1 };

				   42        711       911       643       1
            	lista[0]  lista[1]  lista[2]  lista[3]  lista[4]
                
                * Nótese el uso de corchetes y comas
                
                
            
        Para editar una lista:

            Se pueden leer mediante una estructura repetitiva, ya sea 'while' o 'for'...
              Dicha estructura repetitiva es:
                    for(i = 0 ; i < 5 ; i++) <- El '5' es la cantidad de elementos de la lista
            
            Normalmente son leídos los valores de la lista de esta manera:
                scanf("%d", &lista[ i ]);
            introduciendo la variable contador 'i', permitirá que se lea y se almacene cada valor en cada
            elemento de la lista
                (los valores recogidos deben ser del mismo tipo de dato que la lista)
*/

int main()
{
    int lista[5], i;

    // Un ciclo para leerlos...
    
    for(i=0 ; i < 5 ; i++)
    {
        printf("Ingrese el valor nro %d: ",i);

        scanf("%d", &lista[i]);
    }
    
    // Y un ciclo para mostrarlos...

    for(i=0; i < 5 ; i++)
        printf("lista[%d] = %d \n", i, lista[i]);
    
    return 0;
}

