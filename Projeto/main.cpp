#include "estacionamento.hpp"

// Declarações diretas das funções do grafo
void inicializarGrafo();
int encontrarVagaProximaComBFS(int lojaIndex);

// Declaração direta da função do menu
void executarMenu();

int main() {
    inicializarLojas();
    inicializarVagas();
    inicializarGrafo();
    executarMenu();
    return 0;
}
