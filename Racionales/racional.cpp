#include "racional.h"
#include <numeric> 
#include <iostream>

struct _racional
{
    int numerador;
    int denominador;
};


/* ======================    Otras funciones (privadas)    ====================== */
Racional simplificarRacional(Racional &r) {
    int divisor = std::gcd(r->numerador, r->denominador);

    r->numerador /= divisor;
    r->denominador /= divisor;

    if (r->denominador < 0) {
        r->numerador = -r->numerador;
        r->denominador = -r->denominador;
    }

    return r;
}

/* ======================    Constructoras    ====================== */

// POST: devuelve un Racional válido con numerador y denominador dados
Racional crearRacional(int numerador, int denominador) {
    Racional r = new _racional;
    if (denominador == 0) {
        std::cout << "Error denominador no puede ser 0" << std::endl; //como no está definido en los pre, tenemos que manejarlos acá
        exit (0);
    }
    r->numerador = numerador;
    r->denominador = denominador; 
    return r;
}

/* ======================    Selectoras    ====================== */

// PRE: r != NULL
// POST: devuelve un int, el denominador del racional
int obtenerDenominador(Racional r){
    return r->denominador;
}

// PRE: r != NULL
// POST: devuelve un int, el denominador del racional
int obtenerNumerador(Racional r){
    return r->numerador;
}

// PRE: r1 y r2 != NULL
// POST: devuelve la suma de r1 + r2 como un nuevo Racional
Racional sumarRacional(Racional r1, Racional r2) {
    int numerador = r1->numerador * r2->denominador + r2->numerador * r1->denominador;
    int denominador = r1->denominador * r2->denominador;
    Racional resultado = crearRacional(numerador, denominador);
    return simplificarRacional(resultado);
}

// PRE: r1 != NULL, r2 != NULL
// POST: devuelve la resta de r1 - r2 como un nuevo Racional
Racional restarRacional(Racional r1, Racional r2){
    int numerador = r1->numerador * r2->denominador - r2->numerador * r1->denominador;
    int denominador = r1->denominador * r2->denominador;
    Racional resultado = crearRacional(numerador, denominador);
    return simplificarRacional(resultado);
}

// PRE: r1 != NULL, r2 != NULL
// POST: devuelve el producto r1 * r2 como un nuevo Racional
Racional multiplicarRacional(Racional r1, Racional r2) {
    int numerador = r1->numerador * r2->numerador;
    int denominador = r1->denominador * r2->denominador;
    Racional resultado = crearRacional(numerador,denominador);
    return simplificarRacional(resultado);
}

// PRE: r1 != NULL, r2 != NULL, r2 != 0
// POST: devuelve la división r1 / r2 como un nuevo Racional
Racional dividirRacional(Racional r1, Racional r2){
    int numerador = r1->numerador * r2->denominador;
    int denominador = r1->denominador * r2->numerador;
    Racional resultado = crearRacional(numerador, denominador);
    return simplificarRacional(resultado);
}

/* ======================    Predicados    ====================== */

// PRE: r1 != NULL, r2 != NULL
// POST: d devuelve 1 si r1=r2, 0 si no
int sonIguales(Racional r1, Racional r2) {
    simplificarRacional (r1);
    simplificarRacional(r2);
    return (r1->denominador == r2->denominador && r1->numerador == r2->denominador);
}

/* ======================    Destructoras    ====================== */

// PRE: r != NULL
// POST: libera la memoria de Racional
void destruirRacional(Racional r){
    free(r);
}


