#include "wordscounter.h"
#include <string>
#include <string.h>
#include <fstream>
#include <sstream>
#include <iostream>
#define DELIM_WORDS " ,.;:\n"

Wordscounter::Wordscounter() {
    this->words = 0;
}

size_t Wordscounter::get_words() {
    return this->words;
}

void Wordscounter::process(std::istream& text_file) {
    std::string palabra_nueva;
    while (text_file >> palabra_nueva) {
        words++;
    }
}
