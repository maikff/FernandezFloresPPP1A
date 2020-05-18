#include <stdio.h>
#include <stdlib.h>

int contarCaracteres(char string[],char caracter);

int main()
{
    char palabra[50]="calavera",caracter='a';
    int cant;

    cant=contarCaracteres(palabra,caracter);
    printf("el caracter %c aparece %d veces en la palabra %s.\n",caracter,cant,palabra);
    return 0;
}

int contarCaracteres(char string[],char caracter)
{
    int contador=0;

    for(int i = 0; string[i]!= '\0' ;i++)
   {
       if(string[i]==caracter)
        {
            contador++;
        }
   }
   return contador;
}
