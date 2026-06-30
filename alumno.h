#include <stdio.h>
#include <stdlib.h>
#include "estructuras.h"

struct Alumnos *nuevoAlumno()
{
    struct Alumnos *A;

    A = (struct Alumnos *)malloc(sizeof(struct Alumnos));

    if (A == NULL)
        return NULL;

    A->carrera = (char *)malloc(50 * sizeof(char));

    if (A->carrera == NULL){
        free(A);
        return NULL;
    }

    printf("Matricula: ");
    scanf("%s", A->matricula);

    printf("Carrera: ");
    scanf("%s", A->carrera);

    printf("Semestre: ");
    scanf("%d", &A->semestre);

    
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            A->cali[i][j] = 0;
        }
    }

    return A;
}
