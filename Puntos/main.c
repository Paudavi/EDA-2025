#include <stdio.h>
#include "punto.h"

int main() {
    Punto p1 = construirPunto(0, 0);  
    Punto p2 = construirPunto (3, 4);

    printf("Punto 1 x: %d, y: %d\n", coordPuntoX(p1), coordPuntoY(p1));  
    printf("Punto 2 x: %d, y: %d\n", coordPuntoX(p2), coordPuntoY(p2));
    printf("Distancia entre p1 y p2: %.2f",disntanciaEntrePuntos(p1,p2));

    punto_destruir(p1);                
    return 0;
}
