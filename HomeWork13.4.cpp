/*
* Прощу прощения за долгое отсутствие,
* я был сильно занят подготовкой к ЕГЭ
* и последующей пересдачей одного из предметов
*/
#include <iostream>
#include <time.h>


int main()
{
	// Получения текущего дня(?)
	struct tm buf;
	time_t t = time(NULL);
	localtime_s(&buf, &t);
	int day = buf.tm_mday;

	const int N = 5; // Можно менять для изменения размера матрицы
	int array[N][N];
	int sum = 0;

	// Вывод матрицы
	for (int i = 0; i < N; i++) {

		for (int j = 0; j < N; j++) {

			array[i][j] = i + j;
			std::cout << (i + j) << " ";

		}

		std::cout << "\n";
	}

	std::cout << "\n";
	// Вывод Строки и суммы элементов (где простой sum(array)?((( )
	for (int j = 0; j < N; j++) {
		std::cout << array[day % N][j] << " ";
		sum+= array[day % N][j];
	}
	std::cout << "\n" << sum;
}

