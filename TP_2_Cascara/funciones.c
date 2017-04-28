#include "funciones.h"

void inicializar(EPersona P[TAM])
{
    int i;


    for (i=0; i < TAM; i++)
    {
        P[i].estado = 0;
    }
}

int obtenerEspacioLibre(EPersona L[])
{
    EPersona Aux;
    int i;
    int j;

    for (i=0; i < TAM; i++)
    {


        if( L[i].estado == 0)
            {
                printf("Espacio libre.\n");

                printf("Coloque su nombre: ");
                fflush(stdin);
                gets(Aux.nombre);
                printf("Coloque la edad: ");
                scanf("%d",&Aux.edad);
                while(Aux.edad > 119)
                {
                    printf("La edad maxima es 119 reingrese: ");
                    scanf("%d",&Aux.edad);
                }
                printf("Coloque el dni: ");
                scanf("%d",&Aux.dni);
                for(j=0;j<TAM;j++)
                {
                    while(Aux.dni == L[j].dni)
                    {
                        printf("El dni ya existe, por favor ingrese de nuevo");
                        scanf("%d",&Aux.dni);
                        system("PAUSE");
                    }

                }

                L[i]=Aux;
                L[i].estado = -1;

                return i;
            }


    }
    return -1;
}

void mostrar(EPersona M[])
{
    int i;
    int j;
    EPersona auxPersona;

    printf("Nombre\tEdad\tDNI\n");


        for( i=0; i<TAM-1; i++)
            {
                for( j=i+1; j<TAM; j++)
                {
                    if(M[i].estado== -1 && M[j].estado== -1)
                    {
                        if(strcmp(M[i].nombre,M[j].nombre)>0)
                        {
                            auxPersona=M[i];
                            M[i]=M[j];
                            M[j]=auxPersona;
                        }
                    }
                }

            }

             for(i=0;i<TAM;i++)
            {
                if (M[i].estado != 0)
                    printf("%s\t%d\t%d\n",M[i].nombre,M[i].edad,M[i].dni);
            }

}

int buscarPorDni(EPersona J[], int dni)
{

    int i;

    for(i = 0; i<TAM; i++)
    {
        if(J[i].dni==dni)
        {

            return i;

        }
    }
return -1;

}
void borrar(EPersona B[], int i)
{

    B[i].estado = 0;

}


/*void grafico(EPersona G[])
{
    int i;
    EPersona aux;
    for(i=0;i<TAM;i++)
    {
       aux = G[i].edad;
       if(aux<18)
    }

}*/

