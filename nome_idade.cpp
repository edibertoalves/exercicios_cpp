#include <iostream>
using namespace std;

int main() {
    string nome;
    int idade;
    float altura;

    cout << "Digite seu nome: ";
    cin >> nome;

    cout << "Digite sua idade: ";
    cin >> idade;

    cout << "Digite sua altura: " ;
    cin >> altura;

    cout << "Nome: " << nome << endl;
    cout << "Idade: " << idade << endl;
    cout << "Altura: " << altura << endl;

    cout << "Olá, " << nome << "! Você tem " << idade << " anos." << " Altura: " << altura << " metros." << endl;

    return 0;
}