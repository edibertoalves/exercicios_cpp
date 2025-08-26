#include <iostream>
#include <list>
using namespace std;

int main(){
    list<string> nomes;
    nomes.push_back("João");
    nomes.push_back("Maria");
    nomes.push_front("Carlos");

    for (const string& nome: nomes ) {
        cout << nome << " ";
    }
    cout << endl;
}