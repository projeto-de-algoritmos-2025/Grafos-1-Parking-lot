#include "grafo.hpp"
#include "estacionamento.hpp"
#include <queue>

vector<vector<int>> adjacencia(18);

void inicializarGrafo() {
    for (int i = 0; i < 18; ++i) {
        if (i > 0)
            adjacencia[i].push_back(i - 1);
        if (i < 17)
            adjacencia[i].push_back(i + 1);
    }
}

int buscarVagaPorBFS(int vagaInicial) {
    vector<bool> visitado(18, false);
    queue<int> fila;
    fila.push(vagaInicial);
    visitado[vagaInicial] = true;

    while (!fila.empty()) {
        int atual = fila.front();
        fila.pop();

        if (!vagas[atual].ocupada) {
            return atual;
        }

        for (int vizinho : adjacencia[atual]) {
            if (!visitado[vizinho]) {
                fila.push(vizinho);
                visitado[vizinho] = true;
            }
        }
    }

    return -1;
}

int encontrarVagaProximaComBFS(int lojaIndex) {
    int vagaInicial = lojaIndex * 3 + 1;
    return buscarVagaPorBFS(vagaInicial);
}
