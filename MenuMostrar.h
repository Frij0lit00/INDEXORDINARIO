#ifndef MENUMOSTRAR_H
#define MENUMOSTRAR_H

#include <stdio.h>

int MenuMostrar()
{
    int op;

    printf("\n Menu Mostrar\n");
    printf("1. Mostrar todas las personas\n");
    printf("2. Mostrar por carrera\n");
    printf("3. Mostrar por semestre\n");
    printf("4. Mostrar por carrera y semestre\n");
    printf("5. Buscar por nombre\n");
    printf("6. Buscar por matricula\n");
    printf("7. Regresar\n");
    printf("Ingrese una opcion: ");
    scanf("%d", &op);

    return op;
}

#endif
