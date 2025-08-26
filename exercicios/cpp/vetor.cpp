#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> notas;

    for (int i = 0; i < 5; i++) {
        int nota;
        cout << "Digite a nota " << i + 1 << ": ";
        cin >> nota;
        notas.push_back(nota);
    }

    // exibe as notas
    cout << "Notas digitadas: ";
    for (const auto& nota : notas) {
        cout << nota << " ";
    }
    cout << endl;

    // calcula a média
    double soma = 0;
    for (const auto& nota : notas) {
        soma += nota;
    }
    double media = soma / notas.size();
    cout << "Média: " << media << endl;

    cout << "usando o size(), o tamanho é " << notas.size() << endl;
    cout << "usando o capacity(), a capacidade é " << notas.capacity() << endl;

    return 0;
}