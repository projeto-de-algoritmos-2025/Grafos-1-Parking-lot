#include "estacionamento.hpp"
#include <vector>
#include <queue>

using namespace std;

// Lista de adjacência global
vector<vector<int>> adjacencia(18);

// Inicializa o grafo com conexões simples entre vagas vizinhas
void inicializarGrafo() {
    for (int i = 0; i < 18; ++i) {
        if (i > 0)
            adjacencia[i].push_back(i - 1);
        if (i < 17)
            adjacencia[i].push_back(i + 1);
    }
}

// Busca uma vaga livre mais próxima usando BFS
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

// Função chamada pelo menu para encontrar a vaga mais próxima
int encontrarVagaProximaComBFS(int lojaIndex) {
    int vagaInicial = lojaIndex * 3; // Começa na primeira vaga associada à loja
    return buscarVagaPorBFS(vagaInicial);
}
