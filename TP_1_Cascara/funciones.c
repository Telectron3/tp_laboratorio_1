
float pedirNumero()
{
    float numero;
    printf("Ingrese un  numero: ");
    scanf("%f",&numero);
    return numero;
}

 float suma(float numero1,float numero2)
{
    return numero1 + numero2;
}

float resta(float numero1,float numero2)
{
    return numero1 - numero2;
}

float divicion(float numero1, float numero2)
{
    if(numero2 == 0)
    {
        printf("No se puede dividir por cero.\n");
    }
    else
    {
        return numero1/numero2;
    }
    return 0.0;
}

float multiplicacion(float numero1, float numero2)
{
    return numero1*numero2;
}

int factorial(float num)
{
    int numInt = (int)num;
    int i;
    int facto = 1;

   if((num - numInt) == 0)

   {


        for (i = num; i > 0; i --)
        {
            facto = facto * i;

        }
   }
   else
   {
       printf("No se puede realizar el factorial de un numero con coma.\n");
   }
    return facto;
}
