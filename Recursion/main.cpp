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


	//��������� � ������� ��������
	//std::cout << " ������� ����� -> ";
	//std::cin >> n;
	//std::cout << n << "! = " << factorial(n) << "\n\n";

	//������ 1 ����� ���������

	std::cout << " ������ 1 \n ������� ����� ����� ��������� -> ";
	std::cin >> n;
	std::cout << " ����� ��������� ����� " << n << ':' << fibonnacci(n) << "\n\n";
	std::cout << " ������ 13 ����� ��������� \n";
	for (int i = 0; i < 13; i++)
		std::cout << fibonnacci(i) << ' ';
	std::cout << "\n\n";



	return 0;
}