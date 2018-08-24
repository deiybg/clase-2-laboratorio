#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero;
    int i;
    int numeroMaximo;
    int numeroMinimo;
    int promedio;
    float acumulador;

    for(i=0;i<10;i++)
    {
        printf("Ingrese un numero: ");
        scanf("%d",&numero);
         if(i==0)
         {
            numeroMaximo=numero;
            numeroMinimo=numero;
         }
         if(numero>numeroMaximo)
         {
            numeroMaximo=numero;
         }
         else if(numero<numeroMinimo)
         {
            numeroMinimo=numero;
         }
        acumulador+=(float)numero;
    }
        promedio= acumulador/i;
        printf("El numero maximo es: %d\n",numeroMaximo);
        printf("El numero minimo es: %d\n",numeroMinimo);
        printf("El promedio es: %d\n",promedio);
        return 0;
}
