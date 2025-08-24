#include "punto.h"
#include <stdlib.h>
#include <math.h>  


struct _punto{
    int *a;
};

/* ======================    Constructoras    ====================== */

// POST: devuelve un Punto válido con esas coordenadas
Punto construirPunto(int x, int y) {
Punto p = malloc(sizeof(*p));
p->a = (int*)malloc(2*sizeof(int)); 
p-> a[0] = x;
p-> a[1] = y;
return p;
}


/* ======================    Selectoras    ====================== */

// PRE: p != NULL
// POST: devuelve un int de la coordenada x
int coordPuntoX(Punto p) {
    return p->a[0];
}

// PRE: p != NULL
// POST: devuelve un int de la coordenada y
int coordPuntoY(Punto p) {
    return p->a[1];
}

// PRE: p1 != NULL, p2 != NULL
// POST: devuelve 1 si son iguales y 0 si no lo son
double disntanciaEntrePuntos(Punto p1, Punto p2) {
    int dx = p2->a[0] - p1->a[0];
    int dy = p2->a[1] - p1->a[1];
    return sqrt(dx*dx + dy*dy);
}


/* ======================    Predicados    ====================== */

// PRE: p1 != NULL, p2 != NULL
// POST: devuelve 1 si son iguales y 0 si no lo son
int punto_iguales(Punto p1, Punto p2){
    return (p1->a[0] == p2->a[0] && p1->a[1] == p2->a[1]);
}

/* ======================    Destructoras    ====================== */

// PRE: p != NULL
// POST: se libera Punto 
void punto_destruir(Punto p){
    //acá es importante el orden, primero es el arreglo y despues el puntero
    free(p->a);
    free(p);

}
