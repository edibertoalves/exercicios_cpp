#include <iostream>
using namespace std;

string nomes[5] = {"Pierre", "Paul", "Jacques", "Louis", "Maria"};

int main(){
    // for (int i = 0; i < 3; i++) {
    //     cout << "Nome " << i + 1 << ": " << nomes[i] << endl;
    // }

    // Imprimindo os nomes em ordem reversa
    for (int i = 4; i >= 0; i--) {
        cout << "Nome " << i + 1 << ": " << nomes[i] << endl;
    }

    return 0;
}

