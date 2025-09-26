#include <iostream>
using namespace std;

class Person {
public:
    string name;
    int age;

    // construtor
    Person() {
    }

    void introduce() {
        cout << "\nHello, my name is " << name << " and I am " << age << " years old." << endl;
    }

    void showAge() {
        cout << "A idade é " << age << " anos." << endl;
    }

    // destrutor
    ~Person() {
        cout << "Destrutor chamado para " << name << endl;
    }
};

int main() {
    Person person1;
    person1.name = "Maria";
    person1.age = 30;

    person1.introduce();
    person1.showAge();

    // delete &person1;

    return 0;
}

// Pergunta: Por que não se usa o destrutor nesse caso acima em main?
// Resposta: Porque o objeto person1 é alocado na pilha (stack) e não no heap.
// Objetos alocados na pilha são automaticamente destruídos quando saem do escopo,
// enquanto objetos alocados no heap precisam ser destruídos explicitamente.