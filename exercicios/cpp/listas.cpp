#include <iostream>
#include <list>
using namespace std;

int main(){
    //gerenciar uma fila de clientes, removendo atendidos da frente
    list<string> clientes;
    clientes.push_back("Cliente 1");
    clientes.push_back("Cliente 2");
    clientes.push_back("Cliente 3");

    // Atender o cliente da frente
    clientes.pop_front();

    // Exibir clientes restantes
    for (const string& cliente : clientes) {
        cout << cliente << endl;
    }

    return 0;
}