#include <iostream>
#include <string>

int main() {
    std::string str = "12345";
    std::cout << "Valor em string: " << str << std::endl;

    int numeros = std::stoi(str); // converte string para int
    std::cout << "Valor em inteiro: " << numeros << std::endl;

    std::string valorParaDouble = "123.45";
    double pontoDuplo = std::stod(valorParaDouble); // converte string para double
    std::cout << "Valor em ponto duplo: " << pontoDuplo << std::endl;

    std::string valorParaFloat = "123.45";
    float pontoFlutuante = std::stof(valorParaFloat); // converte string para float
    std::cout << "Valor em ponto flutuante: " << pontoFlutuante << std::endl;

    std::string valorEmRealBrasileiroParaFloat = "R$ 123,45";
    valorEmRealBrasileiroParaFloat.erase(0, 2); // remove "R$ "
    float valorEmFloat = std::stof(valorEmRealBrasileiroParaFloat); // converte string para float
    std::cout << "Valor em ponto flutuante (real brasileiro): " << valorEmFloat << std::endl;

    return 0;
}