// o que é array?

// Array é uma coleção de elementos do mesmo tipo, armazenados em locais contíguos de memória.
// Eles são úteis para armazenar uma lista de itens, como números, caracteres ou objetos.
#include <iostream>

using namespace std;

int main() {
    const int SIZE = 5;
    int arr[SIZE] = {1, 2, 3, 4, 5}; // tamanho fixo de 5 elementos

    // exibindo os elementos do array
    cout << "Elementos no array: ";
    for (int i = 0; i < SIZE; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
