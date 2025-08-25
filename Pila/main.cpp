#include "pila.h"
#include <iostream> 
#include <cstddef>
/**
 * Dada una lista de caracteres que sólo puede contener los elementos (, ), [, ], { y }, deseamos construir un procedimiento que verifique que la
expresión es balanceada */

 /**
     * Funciones auxiliares
     */
    bool esSimboloApertura(char c) {
    return c == '(' || c == '[' || c == '{';
    }

    bool esCierreCorrespondiente(char apertura, char cierre) {
    return (apertura == '(' && cierre == ')') ||
           (apertura == '[' && cierre == ']') ||
           (apertura == '{' && cierre == '}');
    }


int main(){
    char frase1[] = "{{[]()}}";
    char frase2[] = "){{]";
    char frase3[] = "{{[]";

    int iterador = 0;
    Pila pila = crearPila(100);


    while (frase2[iterador] != '\0') {
        char letra = frase3[iterador];

        if(esSimboloApertura(letra)) {
            apilar(letra, pila);
        } else {
            if (esVaciaPila(pila)) {
                std::cout << "Frase no balanceada" << std::endl;
                destruirPila(pila);
                return 0;
            }
        char tope = cima(pila);
        if(!esCierreCorrespondiente(tope,letra)) {
            std::cout << "Frase no balanceada" << std::endl;
            destruirPila(pila);
            return 0;
        }
        desapilar(pila);
        }
        iterador++;
    }

    if(esVaciaPila(pila)) std::cout << "Frase balanceada" << std::endl;
    else std::cout << "Frase no balanceada" << std::endl;

    return 0;
}