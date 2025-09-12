#include <iostream>

template <typename T> T MeuMaximo(T x, T y) {
	return ( x > y ) ? x : y;
}

int main () {

	std::cout << MeuMaximo<int>(3, 7) << std::endl;

	return 0;
}

// entendendo Templates em C++
// Templates em C++ permitem que vocês defina classes, interfaces e métodos com um parâmetro de tipo.
// Isso proporciona maior flexibilidade e reutilização de código, permitindo que você trabalhe com diferentes tipos de dados sem duplicar código.