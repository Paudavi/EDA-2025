#ifndef PILA_H
#define PILA_H

typedef struct _pilaNodo *Pila;

// ------------ CONSTRUCTORAS ------------ 
/**
 * POS: Devuelve en p la pila vacía, que podrá contener hasta cota elementos. 
 */
Pila crearPila (int cota);

/**
 * POS: Si !esLlenaPila(p) inserta i en la cima de p, en otro caso no hace nada.
 */
void apilar (char i, Pila &p);

//  ------------ SELECTORAS ------------ 
/**h
 * PRE: ! esVaciaPila(p)
 * POS: Devuelve la cima de p.
 */
char cima (Pila p);

/**
 * PRE: ! esVaciaPila(p)
 * POS: Remueve la cima de p.
 */
void desapilar (Pila &p);

//  ------------ PREDICADOS ------------ 
/**
 * POS: Devuelve 'true' si p es vacia, 'false' en otro caso.
 */
bool esVaciaPila (Pila p);

/**
 * POS:  Devuelve 'true' si p tiene cota elementos, donde cota es el valor del parametro pasado en crearPila, 
 *  'false' en otro caso.
 */
bool esLlenaPila (Pila p);

//  ------------ DESTRUCTORA ------------ 
/**
 * POS: Libera toda la memoria ocupada por p.
 */
void destruirPila (Pila &p);

#endif