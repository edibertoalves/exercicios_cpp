#include <iostream>

int main() {
    int a = 1, b = 2;

    int *p = &a;
    std::cout << "\n" << std::endl;
    std::cout << "valor de p = " << p << std::endl; // imprime endereço de a
    std::cout << "*p = " << *p << std::endl; // imprime 1


    p = &b; // agora aponta para b
    std::cout << "valor de p = " << p << std::endl; // imprime redirecionado endereço de b
    std::cout << "valor de *p = " << *p << std::endl; // imprime 2

    return 0;
}