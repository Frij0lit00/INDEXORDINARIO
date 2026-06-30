#include <stdio.h>
#include "estructuras.h"
//#include "estructuras.h"
#include "menu.h"
#include "alta.h"
#include "eliPersonas.h"
#include "mostrar.h"
#include "funcionesEspeciales.h"
#include "liberarTodo.h"

int main()
{
    int op1;
    struct Persona *ptrIndex = NULL;

    do {
        op1 = menuPrincipal();

        switch(op1) {
            case 1:
                alta(&ptrIndex);
                break;

            case 2:
                eliPersonas(&ptrIndex);
                break;

            case 3:
                mostrar(ptrIndex);
                break;

            case 4:
                MenfuncionesEsp(ptrIndex);
                break;

           case 5:
                liberarTodo(&ptrIndex);
                printf("Saliendo del programa.\n");
                 break;

            default:
                printf("Operacion invalida.\n");
                break;
        }

    } while(op1 != 5);

    return 0;
}
