#include <iostream>
using namespace std;
#include <map>
using std::map;

int main() {{
    map<string, int> idade;
    idade["João"] = 30;
    idade["Maria"] = 25;
    idade["Pedro"] = 28;


    string nome1 = idade.begin()->first; // "João"
    string nome2 = (++idade.begin())->first; // "Maria"
    string nome3 = (++(++idade.begin()))->first; // "Pedro"


    cout << "Idade de " << nome1 << ": " << idade[nome1] << endl;
    cout << "Idade de " << nome2 << ": " << idade[nome2] << endl;
    cout << "Idade de " << nome3 << ": " << idade[nome3] << endl;

    return 0;
}}