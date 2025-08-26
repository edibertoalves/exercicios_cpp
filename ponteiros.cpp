#include <iostream>
using namespace std;

int main() {
    int idade = 30;
    int* ptr = &idade; // ponteiro recebe o endereço de idade

    cout << "Valor da idade: " << idade << endl;
    cout << "Endereço de idade: " << &idade << endl; // endereço de idade na memória
    cout << "Conteúdo do ponteiro (endereço): " << ptr << endl;
    cout << "Valor apontado pelo ponteiro: " << *ptr << endl; // desreferenciando
    return 0;
}