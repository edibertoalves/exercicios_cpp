// uso de enumerations em c++
#include <iostream>
using namespace std;

enum class DiaSemana {
    Domingo,
    Segunda,
    Terca,
    Quarta,
    Quinta,
    Sexta,
    Sabado
};

int main() {

    DiaSemana hoje = DiaSemana::Domingo;
    cout << "Hoje eh: ";
    switch (hoje) {
        case DiaSemana::Domingo:
            cout << "Domingo";
            break;
        case DiaSemana::Segunda:
            cout << "Segunda";
            break;
        case DiaSemana::Terca:
            cout << "Terca";
            break;
        case DiaSemana::Quarta:
            cout << "Quarta";
            break;
        case DiaSemana::Quinta:
            cout << "Quinta";
            break;
        case DiaSemana::Sexta:
            cout << "Sexta";
            break;

        case DiaSemana::Sabado:
            cout << "Sabado";
            break;
    }
    cout << endl;

    return 0;
}

