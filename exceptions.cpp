// Exceptions

#include <iostream>
#include <string>
#include <stdexcept>

using namespace std;

string soma(int valor1, int valor2)
{
	if (valor1 == 0)
	{
		throw std::runtime_error("Valor1 nao pode ser zero");
	}

	if (valor2 == 0)
	{
		throw std::runtime_error("Valor2 nao pode ser zero");
	}

	return std::to_string(valor1 + valor2);
}

int main()
{
	try
	{
		int resultado = std::stoi(soma(10, 0));
		cout << resultado << endl;
	}
	catch (const std::exception& resultException)
	{
		cout << "Ocorreu um erro: " << resultException.what() << endl;
	}
	return 0;
}
