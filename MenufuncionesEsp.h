#ifndef MenfuncionesEsp_H
#define MenfuncionesEsp_H

#include <stdio.h>

int MenfuncionesEsp()
{
    int fun;

    printf("\nFunciones Especiales a Realizaar\n");
    printf("1. Modificar datos por matricula\n");
    printf("2. Modificar calificaciones por matricula\n");
    printf("3. Mostrar calificaciones por parcial\n");
    printf("4. Mostrar calificaciones por materia\n");
    printf("5. Mostrar aprobados reprobados por materia\n");
    printf("6. Mostrar aprobados reprobados por parcial\n");
    printf("7. Mostrar alumnos sin materias reprobadas\n");
    printf("8. Mostrar alumnos con 1 a 3 adeudos\n");
    printf("9. Mostrar alumnos con mas de 4 adeudos\n");
    printf("Ingrese opcion: ");
    scanf("%d", &fun);

    return fun;
}

#endif
