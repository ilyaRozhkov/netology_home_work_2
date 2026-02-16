//﻿#include <iostream>
//#include <clocale>

#include <iostream>;
#include <clocale>;


int main() {
	setlocale(LC_ALL, "Russian"); // Для корректного отображения кириллицы  
	std::string userWord;
	std::cout << "Введите слово:\n";
	std::cin >> userWord;
	std::cout << "Вы ввели: " << "\n" << userWord << "\n";

}
