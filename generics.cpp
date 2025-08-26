// o que são generics?
// Generics são um recurso de programação que permite definir classes, interfaces e métodos com um parâmetro de tipo.
// Isso proporciona maior flexibilidade e reutilização de código, permitindo que você trabalhe com diferentes tipos de dados sem duplicar código.
// Em C++, os generics são implementados através de templates.

#include <iostream>
#include <vector>
using namespace std;

// Exemplo de função genérica usando templates
template <typename T>
T add(T a, T b) {
    return a + b;
}

// exemplo de classe genérica usando templates
template <typename T>
class Box {
    T value;
public:
    Box(T val) : value(val) {}
    T getValue() const { return value; }
};

int main() {

    int soma = add(5, 10); // Chama a função com inteiros
    cout << " resultado :   " << soma << endl;

    Box<int> intBox(123); // Cria uma Box para inteiros
    cout << " Box int: " << intBox.getValue() << endl;

    Box<string> strBox("Generics em C++"); // Cria uma Box para strings
    cout << " Box string: " << strBox.getValue() << endl;

    return 0;

}