#ifndef ALTA_H
#define ALTA_H

#include <stdio.h>
#include <stdlib.h>
#include "estructuras.h"
#include "nuevaPersona.h"
#include "nuevoAlumno.h"

int alta(struct Persona **ptrIndex)
{
    struct Persona *P = NULL;
    struct Alumnos *A = NULL;

    P = nuevaPersona();

    if (P == NULL) {
        printf("No se creo la persona.\n");
        return 0;
    }

    A = nuevoAlumno();

    if (A == NULL) {
        printf("No se creo el alumno.\n");
        free(P);
        return 0;
    }

    P->ptrAl = A;

    P->ptrPersona = *ptrIndex;
    *ptrIndex = P;

    printf("Alta realizada correctamente.\n");
    return 1;
}

#endif
