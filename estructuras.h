#ifndef ESTRUCTURAS_H
#define ESTRUCTURAS_H

struct Alumnos {
    char matricula[23];
    char *carrera;
    int semestre;
    float cali[5][5];
};

struct Persona {
    char *nombre;
    int edad;
    char genero;
    char fn[8];

    struct Persona *ptrPersona;
    struct Alumnos *ptrAl;
};

#endif
