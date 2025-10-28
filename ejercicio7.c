/*Mariana Gutiérrez Acosta
clase 3 ejercicio 7*/

#include <stdio.h>

void main ()
{
    int numero, contador = 0, suma = 0;

    do {
        printf("Introduce un número: ");
        scanf("%d", &numero);

        if (numero != 0) 
        {
            printf("Has introducido el número %d\n", numero);
            contador++;
            suma += numero;
        } 
        else 
        {
            printf("Finalizando: Se ha introducido el número 0\n");
        }
    } 
      while (numero != 0);

    printf("Cantidad de números introducidos: %d\n", contador);
    printf("Suma total: %d\n", suma);
}
