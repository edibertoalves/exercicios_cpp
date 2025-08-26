#include <iostream>
#include <stack>
using namespace std;

// tutorial de exemplo de uso de pilhas em C++

// Pilhas são estruturas de dados do tipo LIFO (Last In, First Out)
// onde o último elemento adicionado é o primeiro a ser removido.

int main() {
    stack<int> pilha;

    // adicionando elementos na pilha
    pilha.push(10);
    pilha.push(20);
    pilha.push(30);

    // removendo elementos da pilha
    while (!pilha.empty()) {
        cout << "Removendo: " << pilha.top() << endl;
        pilha.pop();
    }

    return 0;

}