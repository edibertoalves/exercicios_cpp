// Stucts do zero
#include <iostream>
using namespace std;

// o que são structs?
// Structs são estruturas de dados que permitem agrupar diferentes tipos de dados em uma única unidade.
// Elas são úteis para organizar dados relacionados e podem conter variáveis de diferentes tipos.

struct Person {
    string name;
    int age;
};

int main() {
    Person person1;
    person1.name = "Maria";
    person1.age = 30;

    cout << "Name: " << person1.name << endl;
    cout << "Age: " << person1.age << endl;

    return 0;
}


