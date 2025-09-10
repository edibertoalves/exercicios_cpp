#include <iostream>
using namespace std;

int main() {
    int idade = 30; // valor inteiro para teste
    int* ponteiro = &idade; // ponteiro recebe o endereço de idade

    cout << "Valor da idade: " << idade << endl;
    cout << "Endereço de idade: " << &idade << endl; // endereço de idade na memória
    cout << "Conteúdo do ponteiro (endereço): " << ponteiro << endl;
    cout << "Valor apontado pelo ponteiro: " << * ponteiro << endl; // desreferenciando
    return 0;
}