#include <iostream>

int main() {
		
	setlocale(LC_ALL, "portuguese");
	
	// Convers�o Implicita

	double valorI = 3.14;
	int numeroI = valorI;
	char letraI = 'a';
		

	std::cout << "O valor de 'valor' �: " << valorI << '\n';
	std::cout << "O valor de 'numero' �: " << numeroI << '\n';
	std::cout << "O valor de 'letra' �: " << letraI << '\n';

	numeroI = letraI;
	std::cout << "O valor de 'numero' �: " << numeroI << '\n';

	// Convers�o Explicita

	double valorE = 3.14;
	int numeroE = (int)valorE;
	char letraE = 'a';

	std::cout << "O valor de 'valor' �: " << valorE << '\n';
	std::cout << "O valor de 'numero' �: " << numeroE << '\n';
	std::cout << "O valor de 'letra' �: " << letraE << '\n';

	numeroE = int(letraE);
	std::cout << "O valor de 'numero' �: " << numeroE << '\n';

	return 0;
}