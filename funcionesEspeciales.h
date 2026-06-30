#ifndef FUNCIONESESPECIALES_H
#define FUNCIONESESPECIALES_H

#include <stdio.h>
#include <string.h>
#include "estructuras.h"
#include "MenfuncionesEsp.h"

void funcionesEspeciales(struct Persona **ptrIndex)
{
    struct Persona *aux;
    char matricula[23];
    int opfun, materia, parcial;
    int contadorReprobadas;

    if (*ptrIndex == NULL) {
        printf("No hay registros.\n");
        return;
    }

    do {
        opfun = MenfuncionesEsp();

        switch(opfun) {

            case 1:
                printf("Matricula del alumno a modificar: ");
                scanf("%s", matricula);

                aux = *ptrIndex;

                while(aux != NULL) {
                    if(aux->ptrAl != NULL && strcmp(aux->ptrAl->matricula, matricula) == 0) {

                        printf("Nuevo nombre: ");
                        scanf("%s", aux->nombre);

                        printf("Nueva edad: ");
                        scanf("%d", &aux->edad);

                        printf("Nuevo genero: ");
                        scanf(" %c", &aux->genero);

                        printf("Nueva fecha nacimiento: ");
                        scanf("%s", aux->fn);

                        printf("Nueva carrera: ");
                        scanf("%s", aux->ptrAl->carrera);

                        printf("Nuevo semestre: ");
                        scanf("%d", &aux->ptrAl->semestre);

                        printf("Datos modificados.\n");
                        break;
                    }

                    aux = aux->ptrPersona;
                }
                break;

            case 2:
                printf("Matricula del alumno: ");
                scanf("%s", matricula);

                aux = *ptrIndex;

                while(aux != NULL) {
                    if(aux->ptrAl != NULL && strcmp(aux->ptrAl->matricula, matricula) == 0) {

                        for(int i = 0; i < 5; i++) {
                            for(int j = 0; j < 5; j++) {
                                printf("Materia %d Parcial %d: ", i + 1, j + 1);
                                scanf("%f", &aux->ptrAl->cali[i][j]);
                            }
                        }

                        printf("Calificaciones modificadas.\n");
                        break;
                    }

                    aux = aux->ptrPersona;
                }
                break;

            case 3:
                printf("Parcial a mostrar 1-5: ");
                scanf("%d", &parcial);
                parcial--;

                aux = *ptrIndex;

                while(aux != NULL) {
                    printf("\nAlumno: %s\n", aux->nombre);
                    printf("Matricula: %s\n", aux->ptrAl->matricula);

                    for(int i = 0; i < 5; i++) {
                        printf("Materia %d: %.2f\n", i + 1, aux->ptrAl->cali[i][parcial]);
                    }

                    aux = aux->ptrPersona;
                }
                break;

            case 4:
                printf("Materia a mostrar 1-5: ");
                scanf("%d", &materia);
                materia--;

                aux = *ptrIndex;

                while(aux != NULL) {
                    printf("\nAlumno: %s\n", aux->nombre);
                    printf("Matricula: %s\n", aux->ptrAl->matricula);

                    for(int j = 0; j < 5; j++) {
                        printf("Parcial %d: %.2f\n", j + 1, aux->ptrAl->cali[materia][j]);
                    }

                    aux = aux->ptrPersona;
                }
                break;

            case 5:
                printf("Materia 1-5: ");
                scanf("%d", &materia);
                materia--;

                aux = *ptrIndex;

                while(aux != NULL) {
                    float suma = 0;

                    for(int j = 0; j < 5; j++) {
                        suma += aux->ptrAl->cali[materia][j];
                    }

                    float promedio = suma / 5;

                    printf("\nMatricula: %s | Nombre: %s | Promedio: %.2f | ",
                           aux->ptrAl->matricula, aux->nombre, promedio);

                    if(promedio >= 6)
                        printf("Aprobado\n");
                    else
                        printf("Reprobado\n");

                    aux = aux->ptrPersona;
                }
                break;

            case 6:
                printf("Parcial 1-5: ");
                scanf("%d", &parcial);
                parcial--;

                aux = *ptrIndex;

                while(aux != NULL) {
                    printf("\nAlumno: %s | Matricula: %s\n", aux->nombre, aux->ptrAl->matricula);

                    for(int i = 0; i < 5; i++) {
                        printf("Materia %d: %.2f - ", i + 1, aux->ptrAl->cali[i][parcial]);

                        if(aux->ptrAl->cali[i][parcial] >= 6)
                            printf("Aprobado\n");
                        else
                            printf("Reprobado\n");
                    }

                    aux = aux->ptrPersona;
                }
                break;

            case 7:
                aux = *ptrIndex;

                while(aux != NULL) {
                    contadorReprobadas = 0;

                    for(int i = 0; i < 5; i++) {
                        for(int j = 0; j < 5; j++) {
                            if(aux->ptrAl->cali[i][j] < 6)
                                contadorReprobadas++;
                        }
                    }

                    if(contadorReprobadas == 0) {
                        printf("Sin reprobadas: %s | %s\n", aux->nombre, aux->ptrAl->matricula);
                    }

                    aux = aux->ptrPersona;
                }
                break;

            case 8:
                aux = *ptrIndex;

                while(aux != NULL) {
                    contadorReprobadas = 0;

                    for(int i = 0; i < 5; i++) {
                        for(int j = 0; j < 5; j++) {
                            if(aux->ptrAl->cali[i][j] < 6)
                                contadorReprobadas++;
                        }
                    }

                    if(contadorReprobadas >= 1 && contadorReprobadas <= 3) {
                        printf("1 a 3 adeudos: %s | %s | Adeudos: %d\n",
                               aux->nombre, aux->ptrAl->matricula, contadorReprobadas);
                    }

                    aux = aux->ptrPersona;
                }
                break;

            case 9:
                aux = *ptrIndex;

                while(aux != NULL) {
                    contadorReprobadas = 0;

                    for(int i = 0; i < 5; i++) {
                        for(int j = 0; j < 5; j++) {
                            if(aux->ptrAl->cali[i][j] < 6)
                                contadorReprobadas++;
                        }
                    }

                    if(contadorReprobadas > 4) {
                        printf("Mas de 4 adeudos: %s | %s | Adeudos: %d\n",
                               aux->nombre, aux->ptrAl->matricula, contadorReprobadas);
                    }

                    aux = aux->ptrPersona;
                }
                break;

            default:
                printf("Opcion invalida.\n");
                break;
        }

    } while(opfun != 10);
}

#endif
