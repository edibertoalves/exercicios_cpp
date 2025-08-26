#include <iostream>
using namespace std;

int main() {
    // FOR
    for (int i = 0; i < 5; i++) {
        cout << "Repetição do FOR: " << i + 1 << endl;
    }

    // WHILE
    int j = 0;
    while (j < 5) {
        cout << "Repetição do WHILE: " << j + 1 << endl;
        j++;
    }

    // DO WHILE
    int k= 0;
    do {
        cout << "Repetição do DO WHILE: " << k + 1 << endl;
        k++;
    } while (k < 5);

    // EXERCICIO
    int numero;
    cout << "Digite um número: ";
    cin >> numero;

    cout << "Tabuada do número " << numero << ":" << endl;

    // calcula a tabuada, passando o número informado pelo usuário
    for (int i = 1; i <= 10; i++) {
        cout << numero << " x " << i << " = " << numero * i << endl;
    }

    return 0;
}