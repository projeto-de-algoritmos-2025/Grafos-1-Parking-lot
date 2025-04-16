#ifndef ESTACIONAMENTO_HPP
#define ESTACIONAMENTO_HPP

#include <vector>
#include <string>
using namespace std;

struct Vaga {
    int id;
    bool ocupada;
    int lojaMaisProxima;
};

extern vector<string> lojas;
extern vector<Vaga> vagas;

void inicializarLojas();
void inicializarVagas();
void mostrarMenu();
void mostrarLojas();

#endif
