#include "lista.h"
#include <time.h>

struct _nodo {
    int elemento;
    _nodo * sig;
};

// ===== Constructoras =====

/**
 * PRE: -
 * POS: Retorna una lista vacía.
 */
Lista crearListaVacia() {
    return NULL;
}

// ===== Selectoras =====

/**
 * POS: Inserta el elemento e al final de la lista l.
 */
void insertarElementoEnLista(Lista &l, int e){
    Lista l_aux = new _nodo;
    l_aux -> sig = NULL; //nuevo nodo apuntando al final
    l_aux ->elemento = e;
    if (l == NULL) l = l_aux; //manejo el caso que la lista este vacía
    else {
        Lista iterador = l; //no pierdo la referencia de l
        while (iterador->sig != NULL) iterador = iterador -> sig;
            iterador -> sig = l_aux; //inserto al final de la lista
    }
}

/**
 * POS: Inserta el elemento e al principio de la lista l.
 */
void insertarElementoEnListaPrincipio(Lista &l, int e){
    Lista l_aux = new _nodo;
    l_aux->elemento = e;
    l_aux->sig = l; //nuevo nodo apunta al que era primero
    l = l_aux; //mi puntero ahora apunta a este nuevo nodo
}

/**
 * POS: Retorna un int con la cantidad de elementos de la lista.
 */
int largoLista(Lista l) { //tiene un costo de O(N)
    int contador = 0;
    while(l != NULL) {
        contador++;
        l = l->sig;
    }
    return contador;
}

/**
 * PRE: l != null.
 * POS: Retorna el primer elemento de la lista.
 */
int eliminarPrimerElemento(Lista &l) {
    Lista borrar = l; //memoria estática
    int primerElem = l->elemento;
    l = l->sig;
    delete borrar;
    return primerElem;
}

// ===== Predicados =====

/**
 * POS: Retorna true si la lista está vacía, false en caso contrario.
 */
bool esVaciaLista(Lista l) {
    return l == NULL;
}

// ===== Destructoras =====

/**
 * POS: Libera toda la memoria asociada a la lista, dejándola vacía.
 */
void destruirLista(Lista &l) {
    while(!esVaciaLista(l)){
        Lista borrar = l;
        l= l->sig;
        delete borrar;
    }
}

