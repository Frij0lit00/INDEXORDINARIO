#ifndef MENUBAJAS_H
#define MENUBAJAS_H

#include <stdio.h>

int Menubajas()
{
    int bajas;

    printf("\nMenu de Bajas\n");
    printf("1. Eliminar por nombre\n");
    printf("2. Eliminar toda la lista\n");
    printf("3. Eliminar uno por uno con confirmacion\n");
    printf("4. Regresar\n");
    printf("Ingrese alguna opcion: ");
    scanf("%d", &bajas);

    return bajas;
}

#endif
