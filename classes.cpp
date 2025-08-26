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
        cout << "Hello, my name is " << name << " and I am " << age << " years old." << endl;
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

    delete &person1;

    return 0;
}
