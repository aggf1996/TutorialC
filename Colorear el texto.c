#include <stdio.h>

/*
    Colorear el texto de la consola
    
    La función system(); la cual está definida en la librería stdio.h
        tiene los siguientes parámetros:

            system("comando");
            
         "comando" es un comando BATCH que es ingresado a la consola
        del sistema... (Ya sea que estés en Windows o Linux)
        
    La consola del sistema en Windows:

        Tenemos el comando BATCH llamado 'color X'

         Con el cual podemos colorear el texto que muestra la pantalla,
        cambiando el valor de 'X'
        
        Los valores de 'X' solo pueden ser los siguientes:

        0 = Negro           8 = Gris
        1 = Azul            9 = Azul claro
        2 = Verde           A = Verde claro
        3 = Aguamarina      B = Aguamarina claro
        4 = Rojo            C = Rojo claro
        5 = Púrpura         D = Púrpura claro
        6 = Amarillo        E = Amarillo claro
        7 = Blanco          F = Blanco brillante
        
    Puedes poner en el programa:

        system("color A");
        
         Y todo el texto que se muestre será verde claro...
         
     Así como podemos cambiar el color del texto, también podemos
    cambiar el color de fondo de la siguiente manera:

        system("color F0");
        
        'F' será el color del fondo y '0' el color del texto...
*/

int main()
{
    system("color A0");
    
    printf("PROBANDO EL COLOR");

    return 0;
}

