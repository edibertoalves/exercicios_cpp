#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> numeros = {1, 2, 3};
    numeros.push_back(4);

    for (int n : numeros)
        cout << n << " ";

    return 0;
}