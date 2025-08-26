#include <iostream>
using namespace std;

int main() {
    int nota;

    cout << "IF/ELSE" << endl << "Digite uma nota entre 0 e 10: ";
    cin >> nota;

    if (nota < 0 || nota > 10) {
        cout << "Nota inválida. Por favor, digite uma nota entre 0 e 10." << endl;
    } else if (nota >= 7) {
        cout << "Aprovado!" << endl;
    } else if (nota >= 5) {
        cout << "Recuperação!" << endl;
    } else {
        cout << "Reprovado!" << endl;
    }

    // Exemplo de uso de switch
    cout << "SWITCH" << endl << "Digite um número de 1 a 12: ";
    cout << "Digite um número de 1 a 12: ";
    int mes;
    cin >> mes;
    switch (mes)
    {
    case 1:
        cout << "Janeiro" << endl;
        break;
    case 2:
        cout << "Fevereiro" << endl;
        break;
    case 3:
        cout << "Março" << endl;
        break;
    case 4:
        cout << "Abril" << endl;
        break;
    case 5:
        cout << "Maio" << endl;
        break;
    case 6:
        cout << "Junho" << endl;
        break;
    case 7:
        cout << "Julho" << endl;
        break;
    case 8:
        cout << "Agosto" << endl;
        break;
    case 9:
        cout << "Setembro" << endl;
        break;
    case 10:
        cout << "Outubro" << endl;
        break;
    case 11:
        cout << "Novembro" << endl;
        break;
    case 12:
        cout << "Dezembro" << endl;
        break;
    default:
        break;
    }
}