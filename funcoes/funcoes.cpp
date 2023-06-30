#include <iostream>

void soma1(int x, int y){
	std::cout << "O valor de x + y = " << x + y << '\n';
}

int soma2(int x, int y) {
	return x + y;
}

int main() {
	int x = 3, y = 6;
	soma1(x, y);
	std::cout << "O valor de x + y = " << soma2(x, y) << '\n';


	return 0;
}