#ifndef MOSTRAR_H
#define MOSTRAR_H

#include <stdio.h>
#include <string.h>
#include "estructuras.h"
#include "MenuMostrar.h"

void mostrar(struct Persona *ptrIndex)
{
    struct Persona *aux;
    int op;
    char carrera[50];
    char nombre[50];
    char matricula[23];
    int semestre;

    if (ptrIndex == NULL) {
        printf("No hay registros.\n");
        return;
    }

    op = MenuMostrar();

    switch (op) {

        case 1:
            aux = ptrIndex;

            while (aux != NULL) {
                printf("\n--- PERSONA ---\n");
                printf("Nombre: %s\n", aux->nombre);
                printf("Edad: %d\n", aux->edad);
                printf("Genero: %c\n", aux->genero);
                printf("Fecha nacimiento: %s\n", aux->fn);

                if (aux->ptrAl != NULL) {
                    printf("--- ALUMNO ---\n");
                    printf("Matricula: %s\n", aux->ptrAl->matricula);
                    printf("Carrera: %s\n", aux->ptrAl->carrera);
                    printf("Semestre: %d\n", aux->ptrAl->semestre);
                }

                aux = aux->ptrPersona;
            }
            break;

        case 2:
            printf("Carrera a buscar: ");
            scanf("%s", carrera);

            aux = ptrIndex;

            while (aux != NULL) {
                if (aux->ptrAl != NULL && strcmp(aux->ptrAl->carrera, carrera) == 0) {
                    printf("\nNombre: %s\n", aux->nombre);
                    printf("Matricula: %s\n", aux->ptrAl->matricula);
                    printf("Carrera: %s\n", aux->ptrAl->carrera);
                    printf("Semestre: %d\n", aux->ptrAl->semestre);
                }

                aux = aux->ptrPersona;
            }
            break;

        case 3:
            printf("Semestre a buscar: ");
            scanf("%d", &semestre);

            aux = ptrIndex;

            while (aux != NULL) {
                if (aux->ptrAl != NULL && aux->ptrAl->semestre == semestre) {
                    printf("\nNombre: %s\n", aux->nombre);
                    printf("Matricula: %s\n", aux->ptrAl->matricula);
                    printf("Carrera: %s\n", aux->ptrAl->carrera);
                    printf("Semestre: %d\n", aux->ptrAl->semestre);
                }

                aux = aux->ptrPersona;
            }
            break;

        case 4:
            printf("Carrera a buscar: ");
            scanf("%s", carrera);

            printf("Semestre a buscar: ");
            scanf("%d", &semestre);

            aux = ptrIndex;

            while (aux != NULL) {
                if (aux->ptrAl != NULL &&
                    strcmp(aux->ptrAl->carrera, carrera) == 0 &&
                    aux->ptrAl->semestre == semestre) {

                    printf("\nNombre: %s\n", aux->nombre);
                    printf("Matricula: %s\n", aux->ptrAl->matricula);
                    printf("Carrera: %s\n", aux->ptrAl->carrera);
                    printf("Semestre: %d\n", aux->ptrAl->semestre);
                }

                aux = aux->ptrPersona;
            }
            break;

        case 5:
            printf("Nombre a buscar: ");
            scanf("%s", nombre);

            aux = ptrIndex;

            while (aux != NULL) {
                if (strcmp(aux->nombre, nombre) == 0) {
                    printf("\nNombre: %s\n", aux->nombre);
                    printf("Edad: %d\n", aux->edad);
                    printf("Genero: %c\n", aux->genero);
                    printf("Fecha nacimiento: %s\n", aux->fn);
                }

                aux = aux->ptrPersona;
            }
            break;

        case 6:
            printf("Matricula a buscar: ");
            scanf("%s", matricula);

            aux = ptrIndex;

            while (aux != NULL) {
                if (aux->ptrAl != NULL &&
                    strcmp(aux->ptrAl->matricula, matricula) == 0) {

                    printf("\nNombre: %s\n", aux->nombre);
                    printf("Matricula: %s\n", aux->ptrAl->matricula);
                    printf("Carrera: %s\n", aux->ptrAl->carrera);
                    printf("Semestre: %d\n", aux->ptrAl->semestre);
                }

                aux = aux->ptrPersona;
            }
            break;

        case 7:
            printf("Regresando al menu principal.\n");
            break;

        default:
            printf("Opcion invalida.\n");
            break;
    }
}

#endif
