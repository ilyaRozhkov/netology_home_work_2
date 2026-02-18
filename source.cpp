#include <iostream>
#include <clocale>
#include <string>

int main() {
	setlocale(LC_ALL, "Russian"); // Для корректного отображения кириллицы  
	int userNumber;
	std::cout << "Введите число:\n";
	std::cin >> userNumber;
	std::cout <<"Вы ввели: " << "\n" << userNumber << "\n";

}
