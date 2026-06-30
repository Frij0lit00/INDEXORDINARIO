#ifndef ELIPERSONAS_H
#define ELIPERSONAS_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "estructuras.h"
#include "Menubajas.h"

int eliPersona(struct Persona **ptrIndex){

    struct Persona *actual;
    struct Persona *anterior;
    struct Persona *temp;
    char nombreBuscar[40];
    int resp;
    int baj;

    if (*ptrIndex == NULL) {
        printf("La lista esta vacia.\n");
        return 0;
    }

    do {
        baj = Menubajas();

        switch (baj) {

            case 1:
                printf("Nombre de la persona a eliminar: ");
                scanf("%s", nombreBuscar);

                actual = *ptrIndex;
                anterior = NULL;

                while (actual != NULL) {
                    if (strcmp(actual->nombre, nombreBuscar) == 0) {

                        if (anterior == NULL) {
                            *ptrIndex = actual->ptrPersona;
                        } else {
                            anterior->ptrPersona = actual->ptrPersona;
                        }

                        free(actual->ptrAl);
                        free(actual);

                        printf("Persona eliminada correctamente.\n");
                        return 1;
                    }

                    anterior = actual;
                    actual = actual->ptrPersona;
                }

                printf("No se encontro la persona.\n");
                break;

            case 2:
                actual = *ptrIndex;

                while (actual != NULL) {
                    temp = actual;
                    actual = actual->ptrPersona;

                    free(temp->ptrAl);
                    free(temp);
                }

                *ptrIndex = NULL;

                printf("Lista eliminada completa.\n");
                return 1;

            case 3:
                actual = *ptrIndex;
                anterior = NULL;

                while (actual != NULL) {

                    printf("\nPERSONA\n");
                    printf("Nombre: %s\n", actual->nombre);

                    printf("Eliminar esta persona? (1 = si, 0 = no, 9 = salir): ");
                    scanf("%d", &resp);

                    if (resp == 9) {
                        break;
                    }

                    if (resp == 1) {
                        temp = actual;

                        if (anterior == NULL) {
                            *ptrIndex = actual->ptrPersona;
                            actual = *ptrIndex;
                        } else {
                            anterior->ptrPersona = actual->ptrPersona;
                            actual = actual->ptrPersona;
                        }

                        free(temp->ptrAl);
                        free(temp);

                        printf("Eliminado.\n");
                    } else {
                        anterior = actual;
                        actual = actual->ptrPersona;
                    }
                }

                printf("Fin del modo uno por uno.\n");
                break;

            case 4:
                printf("Saliendo de bajas.\n");
                break;

            default:
                printf("Opcion invalida.\n");
                break;
        }

    } while (baj != 4);

    return 0;
}

#endif
