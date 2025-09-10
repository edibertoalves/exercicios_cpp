// no exercício de hoje vamos aprender sobre alocação dinâmica de memória usando o heap em C++.
// O heap é uma área de memória usada para alocação dinâmica, onde você pode solicitar e liberar memória conforme necessário durante a execução do programa.

#include <iostream>
using namespace std;

int main() {
    // alocação dinâmica de um inteiro
    int* p = new int; // ponteiro para um inteiro
    *p = 42;
    cout << "Valor: " << *p << endl;
    cout << "Endereço do p: " << p << endl;

    // liberando a memória alocada
    delete p;

    return 0;
}