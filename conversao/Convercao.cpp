#include <iostream>

int main() {
		
	setlocale(LC_ALL, "portuguese");
	
	// Conversão Implicita

	double valorI = 3.14;
	int numeroI = valorI;
	char letraI = 'a';
		

	std::cout << "O valor de 'valor' é: " << valorI << '\n';
	std::cout << "O valor de 'numero' é: " << numeroI << '\n';
	std::cout << "O valor de 'letra' é: " << letraI << '\n';

	numeroI = letraI;
	std::cout << "O valor de 'numero' é: " << numeroI << '\n';

	// Conversão Explicita

	double valorE = 3.14;
	int numeroE = (int)valorE;
	char letraE = 'a';

	std::cout << "O valor de 'valor' é: " << valorE << '\n';
	std::cout << "O valor de 'numero' é: " << numeroE << '\n';
	std::cout << "O valor de 'letra' é: " << letraE << '\n';

	numeroE = int(letraE);
	std::cout << "O valor de 'numero' é: " << numeroE << '\n';

	return 0;
}