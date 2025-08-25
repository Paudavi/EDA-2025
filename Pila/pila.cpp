#include "pila.h"

struct _pilaNodo {
    char *array; //apunta a un arreglo dinámico donde se guardan los elementos de la pila
    int tope;    // indica la posición del "tope" (cuántos elementos hay)
    int cota;    // número máximo de elementos que puede contener la pila
};

// ------------ CONSTRUCTORAS ------------ 
/**
 * POS: Devuelve en p la pila vacía, que podrá contener hasta cota elementos. 
 */
Pila crearPila (int cota) {
    Pila p = new _pilaNodo;
    p->tope = 0; // no hay elementos
    p->array = new char[cota];
    p->cota = cota;
    return p;
}

/**
 * POS: Si !esLlenaPila(p) inserta i en la cima de p, en otro caso no hace nada.
 */
void apilar (char i, Pila &p) {
    if(!esLlenaPila(p)){
        p->array[p->tope] = i;
        p->tope++; //tope va a apuntar a la siguiente posición libre
    }
}

//  ------------ SELECTORAS ------------ 
/**
 * PRE: !esVaciaPila(p)
 * POS: Devuelve la cima de p.
 */
char cima (Pila p){
    return p->array[p->tope-1];
}

/**
 * PRE: ! esVaciaPila(p)
 * POS: Remueve la cima de p.
 */
void desapilar (Pila &p){
    p->tope--;
}

//  ------------ PREDICADOS ------------ 
/**
 * POS: Devuelve 'true' si p es vacia, 'false' en otro caso.
 */
bool esVaciaPila (Pila p){
    return (p->tope == 0);
}

/**
 * POS:  Devuelve 'true' si p tiene cota elementos, donde cota es el valor del parametro pasado en crearPila, 
 *  'false' en otro caso.
 */
bool esLlenaPila (Pila p){
    return (p->cota == p->tope);
}

//  ------------ DESTRUCTORA ------------ 
/**
 * POS: Libera toda la memoria ocupada por p.
 */
void destruirPila (Pila &p) {
    delete [] p->array;
    delete(p);
}
