#include <iostream>
using namespace std;

int soma(int a, int b) {
    return a + b;
}

int maiorNumero (int a, int b, int c) {
    return (a > b && a > c) ? a :
           (b > a && b > c) ? b :
           c;
}

int main() {
    int resultado = soma(5, 3);
    cout << "A soma de 5 e 3 é: " << resultado << endl;

    int maior = maiorNumero(5, 10, 8);
    cout << "O maior número entre 5, 3 e 8 é: " << maior << endl;


    return 0;
}