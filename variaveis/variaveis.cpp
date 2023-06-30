#include <iostream>

int main() {
	int x = 5;
	std::string nome1 = "Paulo";
	std::cout << "Valor de x:" << x << '\n';
	std::cout << "Valor da String: " << nome1 << '\n';

	// Tipo de inicialização 

	// Inicialização de Copia > Mais lenta

	// Inicialização Direta 

	// Inicialização Uniforme > por ponteiro (mais rapido)

	std::string nome2 {"Victor"};

	std::cout << "Valor da String: " << nome2 << '\n';


	return 0;
}