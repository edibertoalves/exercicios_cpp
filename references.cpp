#include <iostream>
using namespace std;

int main() {
    int x = 10;
    int &ref = x;

    cout << " O valor de ref é " << ref << endl;

    cout << " Acrescenta mais 5 a ref " << endl;
    ref += 5;
    cout << " O valor de ref agora é " << ref << endl;

    cout << "o endereço de ref é " << &ref << endl;

    return 0;
}

// o que são referências?
// referências são apelidos para variáveis já existentes
// uma referência deve ser inicializada quando declarada
// uma referência não pode ser alterada para referenciar outra variável
// referências são usadas para evitar cópias desnecessárias de variáveis, especialmente em funções
// referências são frequentemente usadas em funções para permitir que a função modifique o argumento original
// referências podem ser usadas para melhorar a eficiência, especialmente com objetos grandes
// referências são diferentes de ponteiros, embora ambos possam ser usados para referenciar variáveis
// referências não podem ser nulas, enquanto ponteiros podem ser nulos
// referências podem ser usadas para evitar copias desnecessárias de variáveis, especialmente em funções
// referências são frequentemente usadas em funções para permitir que a função modifique o argumento original
// referências podem ser usadas para melhorar a eficiência, especialmente com objetos grandes