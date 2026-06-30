#ifndef NUEVAPERSONA_H
#define NUEVAPERSONA_H

#include <stdio.h>
#include <stdlib.h>
#include "estructuras.h"

struct Persona *nuevaPersona()
{
    struct Persona *P;

    P = (struct Persona *)malloc(sizeof(struct Persona));

    if (P == NULL) {
        return NULL;
    }

    P->nombre = (char *)malloc(50 * sizeof(char));

    if (P->nombre == NULL) {
        free(P);
        return NULL;
    }

    printf("Nombre: ");
    scanf("%s", P->nombre);

    printf("Edad: ");
    scanf("%d", &P->edad);

    printf("Genero: ");
    scanf(" %c", &P->genero);

    printf("Fecha nacimiento: ");
    scanf("%s", P->fn);

    P->ptrAl = NULL;
    P->ptrPersona = NULL;

    return P;
}

#endif
