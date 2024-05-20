// Ejerecicio 7 FORO DE TRABAJO
#include <stdio.h>
#include <ctype.h>

void Mayusculas(char *nombre)
{
    for (int i = 0; nombre[i] != '\0'; i++)
        nombre[i] = toupper(nombre[i]);
}

void minusculas(char *nombre)
{
    for (int i = 0; nombre[i] != '\0'; i++)
        nombre[i] = tolower(nombre[i]);
}

int main()
{
    char nombre[50];
    printf("Ingrese su nombre:\n");
    fgets(nombre, sizeof(nombre), stdin);

    int respuesta;
    printf("Si desea imprimir su nombre en Mayusculas escriba [1], en minusculas [2]:\n");
    scanf("%d", &respuesta);

    if (respuesta == 1)
    {
        Mayusculas(nombre);
        printf("Nombre en mayusculas: %s\n", nombre);
    }
    else if (respuesta == 2)
    {
        minusculas(nombre);
        printf("Nombre en minusculas: %s\n", nombre);
    }
    else
    {
        printf("Opcion no valida\n");
    }

    return 0;
}
// Alumno: Mauricio A Trejo Juarez
// Prodesor : Manuel Triana Vega