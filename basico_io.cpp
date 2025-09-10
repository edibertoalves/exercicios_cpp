#include <fstream>
#include <iostream>
#include <string>

int main () {
    // mensagem avisando a criação de arquivo texto
    std::cout << "Criando um arquivo texto..." << std::endl;

    std::string filename = "arquivo.txt";
    {
        std::ofstream ostrm(filename, std::ios::binary);
        std::string s = "Linha 1";
        // escreve a primeira linha, o c_str() é necessário para converter a string em um ponteiro para char, o size() é necessário para obter o tamanho da string
        ostrm.write(s.c_str(), s.size());

        ostrm.close();
    }

    std::cout << "Arquvo texto criado com sucesso!" << std::endl;

    return 0;

}