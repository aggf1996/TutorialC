#include <stdlib.h>
#include <stdio.h>

/*
    * Se necesita saber crear listas de una lista
    * Se necesita saber crear funciones
    * Se necesita saber usar la funci�n strcmp(); de la librer�a string.h


    Pedir al usuario de q�e color colorear el texto
    
     Como ver�s, en la funci�n system(); no se puede colocar variables
    como hac�amos en printf() as�:
        printf("%s" ,nombre);

    Por eso necesitas de una funci�n externa que s� pueda...
    
     Con la variable 'color' declarada, esa funci�n deber� comparar a 'color'
    con una lista de colores e ir compar�ndolos uno a uno mediante un ciclo for...
    
     Y si el 'color' ingresado es igual a uno de la lista 'colores', har� que system();
    cambie el color que se ingres�...
     Esto �ltimo depende de c�mo est�n escritos los colores en la lista 'colores'...
*/

void colorear(char color[15])
{
    const char colores[][15]=
    { "negro","azul","verde","aguamarina","rojo","purpura","amarillo","blanco","gris" };

    int contador=0,i;
    
    for(i = 0; i<=15 ; i++)
    {
        if(!strcmp(colores[i] , color))
        {
            if(i==0) system("color 0");
            else if(i==1) system("color 1");
            else if(i==2) system("color 2");
            else if(i==3) system("color 3");
            else if(i==4) system("color 4");
            else if(i==5) system("color 5");
            else if(i==6) system("color 6");
            else if(i==7) system("color 7");
            else if(i==8) system("color 8");
            else if(i==9) system("color 9");
        }
    }
}

int main()
{
    char color[15];

    printf("Ingrese el color: ");
    
    scanf("%s",color);
    
    colorear(color);

    return 0;
}

