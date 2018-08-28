#include <stdio.h>
#include <stdlib.h>

int main()
{
    float numeroUno;
    float numeroDos;
    float producto;
    float cuadrado;
    printf("Ingrese el primer numero");
    scanf("%f", &numeroUno);
if(numeroUno==0){
        printf("Ingrese un numero distinto a cero");
    scanf("%f", &numeroUno);
    }
    printf("Ingrese el segundo numero");
scanf("%f", &numeroDos);
if(numeroDos==0){
    printf("Ingrese un numero distinto a cero");
            scanf("%f", &numeroDos);
    }
    producto=numeroUno/numeroDos;
    cuadrado=numeroUno*numeroUno;
    printf("El producto de ambos numeros es: %.2f \n y el cuadrado del primer numero es: %.2f", producto, cuadrado);
    system("cls");
    return 0;
}
