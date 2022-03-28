#include <string>
#include <iostream>
#include <fstream>
#include "wordscounter.h"

#define SUCCESS 0
#define FAILURE 1

int main(int argc, char* argv[]) {
    Wordscounter* counter = new Wordscounter;
    std::ifstream* input = new std::ifstream;
    if (argc > 1) {
        input->open(argv[1]);
        // agregar caso de falla del open
        counter->process(*input);
    } else {
        return FAILURE; // si no existe un nombre de archivo directamente salgo
    }
    size_t words = counter->get_words();
    std::cout << words << std::endl;
    input->close(); // cierro archivo
    delete(input); // libero punteros
    delete(counter); 
    return SUCCESS;
}
