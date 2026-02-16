#include <iostream>
#include <clocale>
#include <windows.h>


int main() {
	setlocale(LC_ALL, "Russian"); // Для корректного отображения кириллицы  
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	std::string userWord;
	std::cout << "Введите слово:\n";
	std::cin >> userWord;
	std::cout << "Вы ввели: " << "\n" << userWord << "\n";

}
