#include <iostream>

void recebe_array(int arr[]) {
	std::cout << sizeof(arr) <<	'\n';
	std::cout << sizeof(arr[0]) << '\n';
	std::cout << "A quantidade de itens do array numeros[] �: " << sizeof(arr) / sizeof(arr[0]) << '\n';
}

void recebe_variavel(int n) {
	n = 12;
}

int main() {
	setlocale(LC_ALL, "portuguese");

	//Vetor
	int numeros[] = { 11, 22, 33, 44, 55 };

	std::cout << "O tamanho do array �: " << sizeof(numeros) << '\n';
	recebe_array(numeros);


	//int variavel{ 66 };
	//std::cout << "O valor da variavel ANTES �: " << variavel << '\n';
	//recebe_variavel( variavel );
	//std::cout << "O valor da variavel DEPOIS �: " << variavel << '\n';

	//Matriz
	//int multi[3][3] = {{1 , 2 , 3}, {4 , 5 , 6}, {7 , 8 , 9}};
	//std::cout << "O valor da posi��o 3 do Array ANTES �: " << numeros[3] << '\n';
	//recebe_array( numeros );
	//std::cout << "O valor da posi��o 3 do Array ANTES �: " << numeros[3] << '\n';


	return 0;
}