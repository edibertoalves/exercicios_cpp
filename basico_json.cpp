// #include <nlohmann/json.hpp>
// caminho da bibioteca: E:\Estudos\cpp\nlohmann\single_include\nlohmann\json.hpp
#include "../nlohmann/single_include/nlohmann/json.hpp"
#include <iostream>

int main() {
    nlohmann::json j = {{"id", 1}, {"age", 30}, {"name", "John Doe"}};
    std::cout << j << std::endl;

    // saída formatada
    std::cout.width(4); // define a largura para 4 espaços
    std::cout << "saída formatada com espaços de indentação" << std::endl;
    std::cout << j.dump(4) << std::endl;
    return 0;
}