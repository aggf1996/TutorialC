#include <stdlib.h>
#include <stdio.h>

/*
    Tutorial: Listas o arreglos... by:AnthonyG�mez
    
    As� se declaran las listas:
        int lista[5];
    El n�mero 5 determina que el arreglo 'lista' tendr� 5 valores...
    
    Los valores se guardan en direcciones de memoria
    
    las cuales est�n organizados as�:

        [0] [1] [2] [3] [4] --> N�tese que se cuenta desde 0 a 4, esto nos da 5 valores...
        
        Si tratas de imprimir lista[5] -> dar� error o no saldr� nada porque �ste es un valor nulo (null)
    
    Y para poder mostrar un valor de alguna lista debemos saber c�mo se ordenan los elementos de la misma
    
        Supongamos que tenemos una lista vac�a llamada lista[5]
        
        Los valores iniciales ser�n:
            null null null null null
            [0]  [1]  [2]  [3]  [4]
            
            
            
        Para declarar los elementos de una lista:

            Se declaran as�:

                int lista[5] = { 42, 711, 911, 643, 1 };

				   42        711       911       643       1
            	lista[0]  lista[1]  lista[2]  lista[3]  lista[4]
                
                * N�tese el uso de corchetes y comas
                
                
            
        Para editar una lista:

            Se pueden leer mediante una estructura repetitiva, ya sea 'while' o 'for'...
              Dicha estructura repetitiva es:
                    for(i = 0 ; i < 5 ; i++) <- El '5' es la cantidad de elementos de la lista
            
            Normalmente son le�dos los valores de la lista de esta manera:
                scanf("%d", &lista[ i ]);
            introduciendo la variable contador 'i', permitir� que se lea y se almacene cada valor en cada
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

