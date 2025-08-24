#ifndef AREA_H
#define AREA_H

typedef struct _punto *Punto;

/* ======================    Constructoras    ====================== */

// POST: devuelve un Punto con esas coordenadas
Punto construirPunto(int x, int y);

/* ======================    Selectoras    ====================== */

// PRE: p != NULL
// POST: devuelve un int de la coordenada x
int coordPuntoX(Punto p);

// PRE: p != NULL
// POST: devuelve un int de la coordenada y
int coordPuntoY(Punto p);

// PRE: p1 != NULL, p2 != NULL
// POST: devuelve 1 si son iguales y 0 si no lo son
double disntanciaEntrePuntos(Punto p1, Punto p2);


/* ======================    Predicados    ====================== */

// PRE: p1 != NULL, p2 != NULL
// POST: devuelve 1 si son iguales y 0 si no lo son
int punto_iguales(Punto p1, Punto p2);

/* ======================    Destructoras    ====================== */

// PRE: p != NULL
// POST: se libera Punto 
void punto_destruir(Punto p);

#endif
