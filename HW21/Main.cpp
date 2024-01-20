#include <iostream>


int main() {
	setlocale(0, "");
	int x, y;

	//Задание 1.

	std::cout << "Задание 1.\n\n";
	std::cout << "Введите значение X -> ";
	std::cin >> x;
	std::cout << "Введите значение Y -> ";
	std::cin >> y;
	int* px = &x;
	int* py = &y;
	
	int temp = *px;
	*px = *py;
	*py = temp;
	std::cout << "X = " << x << std::endl;
	std::cout << "Y = " << y << std::endl;




	return 0;
}