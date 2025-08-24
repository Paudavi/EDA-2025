#include <iostream>
#include "lista.h"

int main(){
    Lista l = crearListaVacia();
    insertarElementoEnLista(l, 10);
    insertarElementoEnLista(l, 12);
    insertarElementoEnLista(l, 6);
    insertarElementoEnLista(l, 4);
    Lista l_aux = crearListaVacia();

    while (!esVaciaLista(l))
    {
        int a = eliminarPrimerElemento(l);
        std::cout << a << std::endl;
        insertarElementoEnLista(l_aux, a);
    }

     while (!esVaciaLista(l_aux))
    {
        std::cout << eliminarPrimerElemento(l_aux) << std::endl;
    }
    destruirLista(l);
    destruirLista(l_aux);
    
    return 0;
}