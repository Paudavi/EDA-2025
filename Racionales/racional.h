#ifndef RACIONAL_H
#define RACIONAL_H

typedef struct _racional *Racional;

/* ======================    Constructoras    ====================== */

// POST: devuelve un Racional válido con numerador y denominador dados
Racional crearRacional(int numerador, int denominador);

/* ======================    Selectoras    ====================== */

// PRE: r != NULL
// POST: devuelve un int, el denominador del racional
int obtenerDenominador(Racional r);

// PRE: r != NULL
// POST: devuelve un int, el denominador del racional
int obtenerNumerador(Racional r);

// PRE: r1 y r2 != NULL
// POST: devuelve la suma de r1 + r2 como un nuevo Racional
Racional sumarRacional(Racional r1, Racional r2);

// PRE: r1 != NULL, r2 != NULL
// POST: devuelve la resta de r1 - r2 como un nuevo Racional
Racional restarRacional(Racional r1, Racional r2);

// PRE: r1 != NULL, r2 != NULL
// POST: devuelve el producto r1 * r2 como un nuevo Racional
Racional multiplicarRacional(Racional r1, Racional r2);

// PRE: r1 != NULL, r2 != NULL, r2 != 0
// POST: devuelve la división r1 / r2 como un nuevo Racional
Racional dividirRacional(Racional r1, Racional r2);

/* ======================    Predicados    ====================== */

// PRE: r1 != NULL, r2 != NULL
// POST: d devuelve 1 si r1=r2, 0 si no
int sonIguales(Racional r1, Racional r2);

/* ======================    Destructoras    ====================== */

// PRE: r != NULL
// POST: libera la memoria de Racional
void destruirRacional(Racional r);

#endif 
