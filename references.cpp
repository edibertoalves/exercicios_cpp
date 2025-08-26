#include <iostream>
using namespace std;

int main() {
    int x = 10;
    int &ref = x;

    cout << " O valor de ref é " << ref << endl;

    cout << " Acrescenta mais 5 a ref " << endl;
    ref += 5;
    cout << " O valor de ref agora é " << ref << endl;

    return 0;
}