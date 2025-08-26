#include <iostream>
using namespace std;

class Animal {
    protected:
        string nome;

    public:
        Animal(string nome) : nome(nome) {};
        virtual ~Animal() {}; // Destrutor virtual para garantir limpeza de memória
        virtual void fazerSom() = 0; // Método virtual puro
};

class Cachorro : public Animal {
    public:
        Cachorro(string nome): Animal(nome) {
            nome = nome;
        }
        void fazerSom() override { // pol
            cout << "Au Au" << endl;
        }

        ~Cachorro() {
            cout << "Destrutor de Cachorro chamado" << endl;
        }
};

class Gato : public Animal {
    public:
        Gato(string nome): Animal(nome) {
            nome = nome;
        }
        void fazerSom() override {
            cout << "Miau" << endl;
        }

        ~Gato() {
            cout << "Destrutor de Gato chamado" << endl;
        }
};

int main() {
    Cachorro cachorro = Cachorro("Rex");
    Gato gato = Gato("Mia");

    cachorro.fazerSom();
    gato.fazerSom();

    delete &cachorro; // Limpeza de memória, se necessário
    delete &gato; // Limpeza de memória, se necessário

    cout << "Fim do programa" << endl;
    // Note: In this case, delete is not necessary since we are not using dynamic memory allocation.
    // If we had used 'new', we would need to delete the objects to avoid memory leaks.

    return 0;
}