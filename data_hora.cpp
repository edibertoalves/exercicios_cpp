#include <iostream>
#include <ctime>
#include <iomanip>

int main() {
    // Obtendo a data e hora atual
    std::time_t now = std::time(nullptr);
    std::tm* localTime = std::localtime(&now);

    // Imprimindo a data e hora
    std::cout << "Data e hora atual: " << std::put_time(localTime, "%d-%m-%Y %H:%M:%S") << std::endl;
    std::cout << "Fuso horário: " << std::put_time(localTime, "%Z") << std::endl;
    std::cout << "=======================================================================" << std::endl;

    std::cout << "Endereço de LocalTime: " << &localTime << std::endl; // endereço do ponteiro localTime

    return 0;
}