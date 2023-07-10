#include <iostream>

int main() {

	char caracter{ 'a' };
	std::cout << "O valor de a é: " << caracter << '\n';

	std::cout << "O valor direto para MAIÚSCULO DE a é: " << toupper(caracter) << '\n';
	
	//toupper funciona apenas no tipo Char, não utilizar no tipo String

	caracter = toupper(caracter);
	std::cout << "O valor de a é: " << caracter << '\n';

	return 0;
}