#include <stdio.h>
#include <math.h>

void main ()
{
    int x, y;
    int resultado_bucle = 1;
    double resultado_funcion;

    printf("Introduce la x: ");
    scanf("%d", &x);

    printf("Introduce la y: ");
    scanf("%d", &y);

    resultado_funcion = pow(x, y);
    printf("Método a) Usando potencia: %d^%d = %.0f\n", x, y, resultado_funcion);

    for (int i = 0; i < y; i++) 
    {
        resultado_bucle *= x;
    }
    printf("Método b) Usando bucle: %d^%d = %d\n", x, y, resultado_bucle);

}
