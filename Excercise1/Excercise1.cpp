#define MODE 1
#include <iostream>

#ifndef MODE
#error "You need to define MODE"
#endif

int add(int a, int b)
{
	return a + b;
}

int main()
{
	setlocale(LC_ALL, "Russian");
#if (MODE == 0)
	std::cout << "Работаю в режиме тренировки" << std::endl;

#elif (MODE == 1)
	int a, b;
	std::cout << "Работаю в боевом режиме" << std::endl;
	std::cout << "Введите число 1: " << std::endl;
	std::cin >> a;
	std::cout << "Введите число 2: " << std::endl;
	std::cin >> b;
	std::cout << "Результат сложения: " << add(a, b) << std::endl;

#else 
{
	std::cout << "Неизвестный режим. Завершение работы" << std::endl;
	return EXIT_FAILURE;
}

#endif

return EXIT_SUCCESS;
}

