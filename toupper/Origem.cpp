#include <iostream>

int main() {

	char caracter{ 'a' };
	std::cout << "O valor de a �: " << caracter << '\n';

	std::cout << "O valor direto para MAI�SCULO DE a �: " << toupper(caracter) << '\n';
	
	//toupper funciona apenas no tipo Char, n�o utilizar no tipo String

	caracter = toupper(caracter);
	std::cout << "O valor de a �: " << caracter << '\n';

	return 0;
}