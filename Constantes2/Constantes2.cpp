#include <iostream>
#include <string>
#define HELLO "Hello, constant!"


int main() {

	const std::string hello = "Hello constant, again!";

	// Sem código de escapes
	std::cout << "Constant Macro HELLO: " << HELLO << std::endl;
	std::cout << "Constant literal hello: " << hello << std::endl;

	//  \n
	std::cout << "Constant Macro HELLO: \n" << HELLO << std::endl;
	std::cout << "Constant literal hello: \n" << hello << std::endl;

	//  \r
	std::cout << "Constant Macro HELLO(com \\r): \r" << HELLO << std::endl;
	std::cout << "Constant literal hello(com \\r): \r" << hello << std::endl;

	//  \t
	std::cout << "Constant Macro HELLO(com \\t): \t" << HELLO << std::endl;
	std::cout << "Constant literal hello(com \\t): \t" << hello << std::endl;

	//  \v
	std::cout << "Constant Macro HELLO(com \\v): \v" << HELLO << std::endl;
	std::cout << "Constant literal hello(com \\v): \v" << hello << std::endl;

	//  \b
	std::cout << "Constant Macro HELLO(com \\b): \b" << HELLO << std::endl;
	std::cout << "Constant literal hello(com \\b): \b" << hello << std::endl;

	//  \f
	std::cout << "Constant Macro HELLO(com \\f): \f" << HELLO << std::endl;
	std::cout << "Constant literal hello(com \\f): \f" << hello << std::endl;

	//  \a
	std::cout << "Constant Macro HELLO(com \\a): \a" << HELLO << std::endl;
	std::cout << "Constant literal hello(com \\a): \a" << hello << std::endl;

	return 0;
}