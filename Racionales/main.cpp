#include <iostream>
#include "racional.h"

int main() {
    // ======================
    // Crear racionales
    // ======================
    Racional r1 = crearRacional(1, 2);  // 1/2
    Racional r2 = crearRacional(3, 4);  // 3/4

    std::cout << "Racional 1: " << obtenerNumerador(r1) << "/" << obtenerDenominador(r1) << std::endl;
    std::cout << "Racional 2: " << obtenerNumerador(r2) << "/" << obtenerDenominador(r2) << std::endl;

    // ======================
    // Operaciones
    // ======================
    Racional suma = sumarRacional(r1, r2);
    std::cout << "Suma: " << obtenerNumerador(suma) << "/" << obtenerDenominador(suma) << std::endl;

    Racional resta = restarRacional(r1, r2);
    std::cout << "Resta: " << obtenerNumerador(resta) << "/" << obtenerDenominador(resta) << std::endl;

    Racional mult = multiplicarRacional(r1, r2);
    std::cout << "Multiplicación: " << obtenerNumerador(mult) << "/" << obtenerDenominador(mult) << std::endl;

    Racional div = dividirRacional(r1, r2);
    std::cout << "División: " << obtenerNumerador(div) << "/" << obtenerDenominador(div) << std::endl;

    // ======================
    // Comparación
    // ======================
    Racional r3 = crearRacional(2, 4); // 2/4, equivalente a 1/2
    if (sonIguales(r1, r3)) {
        std::cout << "r1 y r3 son iguales" << std::endl;
    } else {
        std::cout << "r1 y r3 son diferentes" << std::endl;
    }

    // ======================
    // Destruir racionales
    // ======================
    destruirRacional(r1);
    destruirRacional(r2);
    destruirRacional(r3);
    destruirRacional(suma);
    destruirRacional(resta);
    destruirRacional(mult);
    destruirRacional(div);

    return 0;
}
