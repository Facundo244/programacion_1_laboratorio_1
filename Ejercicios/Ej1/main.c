#include <stdio.h>
#include <stdlib.h>

int main()
{
     int unNumero;
 //   char unChar;
 //   float unFlotante;
    int otroNumero;
 //   float suma;
    float division;
    printf("Ingrese un numero ");
    scanf(" %d", &unNumero);
    printf("Ingrese otro numero entero ");
    scanf(" %d", &otroNumero);
    division=(float)unNumero/otroNumero;
    printf("El Numero es: %d \n ", unNumero);
    printf("La division de estos numeros da: %.2f",division);

   /* printf("Ingrese un caracter");
    scanf(" %c", &unChar);
    printf("Ingrese un flotante ");
    scanf(" %f", &unFlotante);
    printf("El caracter es: %c \n", unChar);
    printf("El flotante es: %.2f \n ", unFlotante);
    suma=unNumero+unFlotante;
    printf("El resultado de la suma es: %.2f ", suma);*/

    return 0;
}
