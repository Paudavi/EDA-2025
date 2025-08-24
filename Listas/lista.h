#ifndef LISTA_H
#define LISTA_H

typedef struct _nodo *Lista;

// ===== Constructoras =====

/**
 * PRE: -
 * POS: Retorna una lista vacía.
 */
Lista crearListaVacia();

// ===== Selectoras =====

/**
 * POS: Inserta el elemento e al final de la lista l.
 */
void insertarElementoEnLista(Lista &l, int e);

/**
 * POS: Inserta el elemento e al principio de la lista l.
 */
void insertarElementoEnListaPrincipio(Lista &l, int e);

/**
 * POS: Retorna un int con la cantidad de elementos de la lista.
 */
int largoLista(Lista l);

/**
 * PRE: l != null.
 * POS: Retorna el primer elemento de la lista.
 */
int eliminarPrimerElemento(Lista &l);

// ===== Predicados =====

/**
 * POS: Retorna true si la lista está vacía, false en caso contrario.
 */
bool esVaciaLista(Lista l);

// ===== Destructoras =====

/**
 * POS: Libera toda la memoria asociada a la lista, dejándola vacía.
 */
void destruirLista(Lista &l);

#endif