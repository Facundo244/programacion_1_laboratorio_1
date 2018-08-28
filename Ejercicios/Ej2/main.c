#include <stdio.h>
#include <stdlib.h>

int main()
{
    float numeroUno;
    float numeroDos;
    float numeroTres;
    float numeroCuatro;
    float numeroCinco;
    float media;
    printf("Ingrese el primer numero\n");
    scanf("%f", &numeroUno);
    printf("Ingrese el segundo numero\n");
    scanf("%f", &numeroDos);
    printf("Ingrese el tercer numero\n");
    scanf("%f", &numeroTres);
    printf("Ingrese el cuarto numero\n");
    scanf("%f", &numeroCuatro);
    printf("Ingrese el ultimo numero\n");
    scanf("%f", &numeroCinco);
    media=(numeroUno+numeroDos+numeroTres+numeroCuatro+numeroCinco)/5;
    printf("La media de los numeros es: %.2f", media);
    return 0;
}

