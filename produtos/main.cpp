#include <iostream>
#include "produto.h"

int produto(int, int);

int main() {
	
	int valor1, valor2;
	valor1 = 3;
	valor2 = 4;

	std::cout << "Valor1 + valor2 = " << produto(valor1, valor2) << '\n';
	std::cout << "Valor1 + valor2 = " << produto(8, 7) << '\n';


	return 0;
}