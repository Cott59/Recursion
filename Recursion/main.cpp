#include <iostream>


int factorial( int num) {
	if (num == 0)
		return 1;
	return factorial(num - 1) * num;
}
int fibonnacci(int num) {
	if (num <= 0)
		return 0;
	if (num == 1)
		return 1;
	return fibonnacci(num - 1) + fibonnacci(num - 2);
}



int main() {
	setlocale(LC_ALL, "Russian");
	int n;


	//Факториал с помощью рекурсии
	//std::cout << " Введите число -> ";
	//std::cin >> n;
	//std::cout << n << "! = " << factorial(n) << "\n\n";

	//задача 1 Числа Фибоначчи

	std::cout << " Задача 1 \n Введите номер числа Фибоначчи -> ";
	std::cin >> n;
	std::cout << " Число фибонначи номер " << n << ':' << fibonnacci(n) << "\n\n";
	std::cout << " Первые 13 чисел фибоначчи \n";
	for (int i = 0; i < 13; i++)
		std::cout << fibonnacci(i) << ' ';
	std::cout << "\n\n";



	return 0;
}