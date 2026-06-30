#ifndef LIBERARTODO_H
#define LIBERARTODO_H

#include <stdio.h>
#include <stdlib.h>
#include "estructuras.h"

void liberarTodo(struct Persona **ptrIndex)
{
    struct Persona *actual = *ptrIndex;
    struct Persona *temp;
    int contador = 0;

    while (actual != NULL) {

        temp = actual;
        actual = actual->ptrPersona;

        if (temp->ptrAl != NULL) {
            free(temp->ptrAl->carrera);
            free(temp->ptrAl);
        }

        free(temp->nombre);
        free(temp);

        contador++;
    }

    *ptrIndex = NULL;

    printf("Base de datos liberada correctamente.\n");
    printf("Personas liberadas: %d\n", contador);
}

#endif
