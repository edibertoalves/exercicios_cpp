// queue (FIFO)
#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<int> fila;

    // Adicionando elementos na fila
    fila.push(10);
    fila.push(20);
    fila.push(30);

    // Exibindo e removendo elementos da fila
    while (!fila.empty()) {
        cout << "Elemento: " << fila.front() << endl; // Exibe o primeiro elemento
        fila.pop(); // Remove o primeiro elemento
    }

    return 0;
}