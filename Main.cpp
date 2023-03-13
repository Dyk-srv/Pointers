#include <iostream>

template <typename T>
void my_swap(T num1, T num2) {
	T tmp = num1;
	num1 = num2;
	num2 = tmp;
}

template <typename T>
void p_swap(T *num1, T *num2) {
	T tmp = *num1;
	*num1 = *num2;
	*num2 = tmp;
}

int main() {
	setlocale(LC_ALL, "Russian");
	int n = 10, m = 20;
	
	// Указатели на переменные
	/*std::cout << "n = " << n << '\n';	 // Вывод значения переменной
	std::cout << "&n = " << &n << '\n';	 // Вывод адреса переменной
	int* pn = &n; // Создание указателя, направленного на переменную n
	std::cout << "pn = " << pn << '\n';
	std::cout << "*pn = " << *pn << '\n';	// Разыменование указателя
	*pn = 15; // Обращение к переменной n через разыименование указателя pn
	std::cout << "Новая n = " << n << '\n';
	
	pn = &m; // Перенаправление указателя на переменную m
	std::cout << "&m = " << &m << '\n';
	std::cout << "pn = " << pn << '\n';

	int* pm = &m;
	std::cout << "pm = " << pm << '\n';
	*pm = 25;
	std::cout << "m = " << m << '\n';
	std::cout << "*pn = " << *pn << '\n';
	std::cout << "*pm = " << *pm << '\n';*/

	// Указатели и массивы
	/*const int size = 5;
	int arr[size]{ 5, 16, 60, 7, 34 };
	int* pa2 = &arr[2];
	std::cout << "*pa2 = " << *pa2 << '\n'; // 60
	pa2++;
	std::cout << "*pa2 = " << *pa2 << '\n'; // 7
	pa2 -= 2;
	std::cout << "*pa2 = " << *pa2 << '\n'; // 16
	pa2 = &arr[0];
	for (int i = 0; i < size; i++)
		std::cout << *(pa2 + i) << ' ';
	std::cout << '\n';

	std::cout << "arr = " << arr << '\n';
	std::cout << "pa2 = " << pa2 << '\n'; 
	int sum = 0;
	for (int i = 0; i < size; i++)
		sum += *(arr + i);
	std::cout << "Сумма: " << sum << '\n';
	//arr = &n;	//Ошибка!
	//arr++;	//Ошибка!
	//arr -= 2;	//Ошибка!*/

	// Указатели и функции
	n = 7; m = 15;
	std::cout << n << '\t' << m << '\n';
	my_swap(n, m); // не работает, т.к. параметры - это копии аргументов
	p_swap(&n, &m);
	std::cout << n << '\t' << m << '\n';

	return 0;
}
