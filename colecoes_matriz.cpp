#include <iostream>

int main () {

    int matriz [2][2] = {
        {1, 2},
        {3, 4}
    };

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            // imprime 1, 2 e na linha de baixo 3, 4
            std::cout << matriz[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}