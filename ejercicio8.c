#include <stdio.h>
#include <string.h>

void main ()
{
    int intentos = 0, acceso_concedido = 0;
    char usuario[5];
    char contrasena[5];
    
    while (intentos < 3 && !acceso_concedido) 
    {
        printf("Introduce el nombre de usuario: ");
        scanf("%s", usuario);

        printf("Introduce la contraseña: ");
        scanf("%s", contrasena);

        if (strcmp(usuario, "root") == 0 && strcmp(contrasena, "1234") == 0) 
        {
            printf("Bienvenido al sistema\n");
            acceso_concedido = 1;
        } 
        else 
        {
            printf("Usuario o contraseña incorrectos\n");
            intentos++;
        }
    }

    if (!acceso_concedido) 
    {
        printf("Se ha superado el número de intentos permitido\n");
    }
}

}
