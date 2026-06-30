#ifndef MENU_H
#define MENU_H

#include <stdio.h>

int menuPrincipal()
{
    int op;

    printf("\n--- MENU PRINCIPAL ---\n");
    printf("1. Altas\n");
    printf("2. Bajas\n");
    printf("3. Mostrar\n");
    printf("4. Funciones especiales\n");
    printf("5. Salir\n");
    printf("Seleccione opcion: ");
    scanf("%d", &op);

    return op;
}

int menuBajas()
{
    int op;

    printf("\n--- MENU BAJAS ---\n");
    printf("1. Eliminar por nombre\n");
    printf("2. Eliminar toda la lista\n");
    printf("3. Eliminar uno por uno\n");
    printf("4. Regresar\n");
    printf("Seleccione opcion: ");
    scanf("%d", &op);

    return op;
}

int menuMostrar()
{
    int op;

    printf("\n--- MENU MOSTRAR ---\n");
    printf("1. Mostrar todos\n");
    printf("2. Mostrar por carrera\n");
    printf("3. Mostrar por semestre\n");
    printf("4. Mostrar por carrera y semestre\n");
    printf("5. Buscar por nombre\n");
    printf("6. Buscar por matricula\n");
    printf("7. Regresar\n");
    printf("Seleccione opcion: ");
    scanf("%d", &op);

    return op;
}

int menuFuncionesEspeciales()
{
    int op;

    printf("\n--- FUNCIONES ESPECIALES ---\n");
    printf("1. Modificar datos por matricula\n");
    printf("2. Modificar calificaciones\n");
    printf("3. Consultar calificaciones por parcial\n");
    printf("4. Consultar calificaciones por materia\n");
    printf("5. Regresar\n");
    printf("Seleccione opcion: ");
    scanf("%d", &op);

    return op;
}

#endif
