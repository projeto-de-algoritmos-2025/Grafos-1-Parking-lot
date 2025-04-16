#include "estacionamento.hpp"
#include "grafo.hpp"

void executarMenu(); // declaração direta pois você não quer um menu.h

int main() {
    inicializarLojas();
    inicializarVagas();
    inicializarGrafo();
    executarMenu();
    return 0;
}
