#include <iostream>

int main() {
	int x = 5;
	std::string nome1 = "Paulo";
	std::cout << "Valor de x:" << x << '\n';
	std::cout << "Valor da String: " << nome1 << '\n';

	// Tipo de inicializa��o 

	// Inicializa��o de Copia > Mais lenta

	// Inicializa��o Direta 

	// Inicializa��o Uniforme > por ponteiro (mais rapido)

	std::string nome2 {"Victor"};

	std::cout << "Valor da String: " << nome2 << '\n';


	return 0;
}