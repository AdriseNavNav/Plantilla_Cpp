/* Description */



/* Libraries */

#include <iostream>
#include <string>

/* Personal libraries */

#include "nameComplete.h"

/* Macros definition */



/* Global variables */



/* Constants */



/* Structs */



/* Inicialization */



/* Functions */

std::string nameComplete() {

    std::string name, surname;

    std::cout << "Ingresa tu nombre: ";
    std::cin >> name;
    std::cout << "Ingresa tu apellido: ";
    std::cin >> surname;

    return name + " " + surname;

}