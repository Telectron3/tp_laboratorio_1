#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"


int main()
{
    char seguir = 's';
    int opcion = 0;
    int dni;
    EPersona Persona[TAM];
    int Libre;
    int serch;


    inicializar(Persona);

    while(seguir=='s')
    {
        system("cls");

        printf("1- Agregar persona\n");
        printf("2- Borrar persona\n");
        printf("3- Imprimir lista ordenada por  nombre\n");
        printf("4- Imprimir grafico de edades\n");
        printf("5- Salir\n\n");

        scanf("%d",&opcion);

        if(opcion > 5 || opcion < 0 )
        {
            printf("Error\n");
            system("PAUSE");
        }

        else
        {

        switch(opcion)
            {
            case 1:

            Libre = obtenerEspacioLibre(Persona);

               if(Libre == -1)
                {
                    printf("El espeacio esta ocupado\n");
                    system("PAUSE");
                    continue;
                }

                break;

            case 2:
                 printf("Coloque el dni que deseea borrar ");
                 scanf("%i",&dni);
                 serch = buscarPorDni(Persona,dni);
                 if (serch == -1)
                    {
                        printf("La persona no existe\n");
                        system("PAUSE");
                        continue;
                    }
                 else
                    {
                        borrar(Persona,serch);
                    }

                 system("PAUSE");
                 break;

            case 3:
                mostrar(Persona);
                system("PAUSE");
                break;

            case 4:

                break;

            case 5:
                seguir = 'n';
                break;
            default:
                printf("Opcion invalida");
                system("PAUSE");
                break;
            }

        }
    }

    return 0;
}
