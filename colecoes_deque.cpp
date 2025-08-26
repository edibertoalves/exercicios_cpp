// o que faz a coleção deque?
// a coleção deque é uma coleção que permite inserção e remoção de elementos em ambas as extremidades, semelhante a uma fila, mas com acesso aleatório aos elementos.

#include <iostream>
#include <deque>
using namespace std;

int main() {
    deque<int> d; // cria um deque de inteiros

    // inserindo elementos no deque
    d.push_back(10); // insere 10 no final
    d.push_front(20); // insere 20 no início
    d.push_back(30); // insere 30 no final

    // removendo elementos do deque
    d.pop_front(); // remove o primeiro elemento (20)
    d.pop_back(); // remove o último elemento (30)

    // exibindo os elementos do deque
    cout << "Elementos no deque: ";
    for (int i : d) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}