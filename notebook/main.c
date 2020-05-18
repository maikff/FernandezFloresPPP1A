#include <stdio.h>
#include <stdlib.h>

#define TAM 3

typedef struct{
    int id;
    char procesador[20];
    char marca[20];
    float precio;
}Notebook;

void ordenar(Notebook list[],int tam);
int printProducto(Notebook list[], int tam);


int main()
{
    Notebook notebook[TAM]={{1,"pentium","Asus",70000},
                             {2,"celeron","Gigabyte",85000},
                             {3,"Ryzen","Gigabyte",60000}};

    ordenar(notebook,TAM);


    return 0;
}

void ordenar(Notebook list[],int tam)
{
    Notebook noteb;
    for(int i=0; i<tam-1; i++)
        {
            for(int j=i+1; j<tam; j++)
            {
                if(strcmp(list[i].marca,list[j].marca)<0)
                {
                    noteb = list[i];
                    list[i] = list[j];
                    list[j] = noteb;
                }

                else if(strcmp(list[i].marca, list[j].marca) == 0 && list[i].precio>list[j].precio)
                {
                    noteb = list[i];
                    list[i] = list[j];
                    list[j] = noteb;

                }

            }
        }
        printProducto(list,tam);
}

int printProducto(Notebook list[], int tam)
{
    printf(" ID\t    PROCESADOR\t    MARCA\t    PRECIO\n");
    for(int i=0; i<tam; i++)
    {
            printf(" %d\t    %s\t    %s\t    %.2f\n",list[i].id,list[i].procesador,list[i].marca,list[i].precio);
    }
    return 0;
}
