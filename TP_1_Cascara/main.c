#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main()
{
    char seguir='s';
    int opcion=0;
    float a;
    float b;
    float resultado;
    float r;
    float d;
    float m;
    long long int f;
    while(seguir =='s')
    {
        printf("1- Ingresar 1er operando (A= %f)\n",a);
        printf("2- Ingresar 2do operando (B=%f)\n",b);
        printf("3- Calcular la suma (A+B)= %f\n", resultado);
        printf("4- Calcular la resta (A-B)= %f\n",r);
        printf("5- Calcular la division (A/B)= %f\n",d);
        printf("6- Calcular la multiplicacion (A*B)=%f\n",m);
        printf("7- Calcular el factorial (A!)= %i\n",f);
        printf("8- Calcular todas las operacione\n");
        printf("9- Salir\n");

        scanf("%d",&opcion);


        switch(opcion)
        {
            case 1:
                a = pedirNumero();
                break;
            case 2:
                b = pedirNumero();
                break;
            case 3:
                resultado = suma(a,b);

                break;
            case 4:
                r=resta(a,b);
                break;
            case 5:
                d = divicion(a,b);
                break;
            case 6:
                m = multiplicacion(a,b);
                break;
            case 7:
                  f = factorial(a);
                break;
            case 8:

                resultado = suma(a,b);
                r=resta(a,b);
                d = divicion(a,b);
                m = multiplicacion(a,b);
                f = factorial(a);

                break;
            case 9:
                seguir = 'n';
                break;
        }

    }
    return 0;
}
