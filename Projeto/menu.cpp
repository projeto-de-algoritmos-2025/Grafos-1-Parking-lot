#include <iostream>
#include "estacionamento.hpp"

using namespace std;

extern void inicializarGrafo();
extern int encontrarVagaProximaComBFS(int lojaIndex);

void executarMenu() {
    int opcao;

    do {
        mostrarMenu();
        cin >> opcao;

        switch (opcao) {
            case 1: {
                mostrarLojas();
                int escolha;
                cin >> escolha;
                if (escolha >= 1 && escolha <= 6) {
                    int vaga = encontrarVagaProximaComBFS(escolha - 1);
                    if (vaga != -1) {
                        vagas[vaga].ocupada = true;
                        cout << "Estacione na vaga " << vagas[vaga].id
                             << " (próxima à loja " << lojas[escolha - 1] << ")\n";
                    } else {
                        cout << "Não há vagas disponíveis próximas à loja " << lojas[escolha - 1] << endl;
                    }
                } else {
                    cout << "Loja inválida.\n";
                }
                break;
            }
            case 2: {
                cout << "\nMAPA DO ESTACIONAMENTO\n";
                for (const Vaga& v : vagas) {
                    cout << "Vaga " << v.id << " - "
                         << (v.ocupada ? "Ocupada" : "Livre")
                         << " (Loja: " << lojas[v.lojaMaisProxima] << ")\n";
                }
                break;
            }
            case 3:
                cout << "Saindo...\n";
                break;
            default:
                cout << "Opção inválida. Tente novamente.\n";
        }

        cout << endl;

    } while (opcao != 3);
}
