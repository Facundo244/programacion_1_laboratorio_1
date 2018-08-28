#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numeroUno;
    int numeroDos;
    int suma;
    printf("Ingrese el primer numero \n");
    scanf("%d", &numeroUno);
    printf("Ingrese el segundo numero \n");
    scanf("%d", &numeroDos);
    suma=numeroUno+numeroDos;
    printf("La suma de ambos numeros es: %d", suma);
    return 0;
}
