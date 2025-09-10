#include <iostream>

void HelloC() {
    std::cout << "Hello, C!" << std::endl;
};

/// @brief  exemplo de overload
/// @param HelloFirstName
void HelloC(std::string HelloFirstName) {
    std::cout << "Hello, " << HelloFirstName << "!" << std::endl;
};

int main() {
    HelloC(); // Chama a função sem parâmetros
    HelloC("Ediberto"); // Chama a função com um parâmetro

    return 0;
}

// O código acima demonstra a sobrecarga de funções em C++.
// A função HelloC é definida duas vezes: uma sem parâmetros e outra com um parâmetro do tipo string.
// Isso permite que você chame a mesma função com diferentes assinaturas, dependendo das necessidades do seu programa.