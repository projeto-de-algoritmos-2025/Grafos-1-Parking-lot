#include <iostream>
#include "estacionamento.hpp"

using namespace std;

extern void inicializarGrafo();
extern pair<int, vector<int>> encontrarVagaProximaComBFS(const string& nomeLoja);

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
                    string nomeLoja = lojas[escolha - 1];
                    pair<int, vector<int>> resultado = encontrarVagaProximaComBFS(nomeLoja);
                    int vaga = resultado.first;
                    if (vaga != -1) {
                        vagas[vaga].ocupada = true;
                        cout << "\nEstacione na vaga " << vagas[vaga].id
                             << " (próxima à loja " << nomeLoja << ")\n";
                    
                        // Exibe o caminho percorrido até a vaga
                        cout << "\nCaminho até a vaga: ";
                        for (int i : resultado.second) {
                            cout << (i + 1) << " "; // +1 para mostrar as IDs humanas (1 a 18)
                        }
                        cout << endl;
                    } else {
                        cout << "\nNão há vagas disponíveis próximas à loja " << nomeLoja << endl;
                    }
                } else {
                    cout << "\nLoja inválida.\n";
                }
                break;
            }
            case 2: {
                cout << "\nMAPA DO ESTACIONAMENTO\n";
                cout << "-----------------------\n";
                for (const Vaga& v : vagas) {
                    cout << "Vaga " << v.id << " - "
                         << (v.ocupada ? "OCUPADA" : "LIVRE ")
                         << " (Loja: " << v.nomeLoja << ")\n";
                }
                break;
            }
            case 3:
                cout << "\nSaindo do sistema...\n";
                break;
            default:
                cout << "\nOpção inválida. Tente novamente.\n";
        }

    } while (opcao != 3);
}