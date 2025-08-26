#include <iostream>
using namespace std;

// tutorial de ensino de interfaces e classes em C++
class Interface {
    public:
        virtual ~Interface() {}
        virtual string show() = 0; // Método virtual puro
};

class Pessoa : public Interface {
    public:
        string Nome;

        string show() override {
            return Nome;
        }
};

int main() {
    Pessoa pessoa;
    pessoa.Nome = "João";

    cout << "Nome da pessoa: " << pessoa.show() << endl;

    return 0;
}