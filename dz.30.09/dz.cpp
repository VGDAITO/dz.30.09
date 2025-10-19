#include <iostream>


int main() 
{
	setlocale(LC_ALL, "ru");

	const int size = 12;
	int arr[size];
	int min = 0;
	int max = 0;
	int diapoz = 0;
	int sum = 0;
	int diapoz1 = 0;
	double profit[size];
	int start = 0;
	int end = 0;
	double minProfit = 0;
	double maxProfit = 0;

	std::cout << "Задание 1\n";

	for (size_t i = 0; i < size; i++)
	{
		arr[i] = rand() % 10 + 1;
		std::cout << arr[i] << " ";
		
	}
	std::cout << "\n";

	min = arr[0];
	for (size_t i = 0; i < size; i++)
	{
		if (arr[i] < min)
		{
			min = arr[i];

		}
		
	}
	std::cout << "Минимальное число: " << min << "\n";;

	max = arr[0];
	for (size_t i = 0; i < size; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];

		}

	}
	std::cout << "Максимальное число: " << max << "\n";
	
	std::cout << "Задание 2 \n";


	for (size_t i = 0; i < size; i++)
	{
		arr[i] = rand() % 10 + 1;
		std::cout << arr[i] << " ";

	}
	std::cout << "\n";

	std::cout << "Введите диапазон: "; std::cin >> diapoz;

	for (size_t i = 0; i < size; i++)
	{
		if (arr[i] < diapoz)
		{
			sum += arr[i];

		}
	}
	std::cout << sum << "\n";

	std::cout << "Задание 3 \n";

	std::cout << "Введите прибыль в каждый месяц(12 чисел): \n";
	for (size_t i = 0; i < size; i++)
	{
		std::cout << "Месяц " << i + 1 << ": ";
		std::cin >> profit[i];
	}
	std::cout << "Введите диапозон месяцев(начало и конец): "; std::cin >> start >> end;
	
	minProfit = profit[start - 1];

		for (size_t i = start - 1; i < end; i++)
		{
			if (profit[i] < minProfit)
			{
				minProfit = profit[i];
			}
		}
		
		maxProfit = profit[start - 1];

		for (size_t i = start - 1; i < end; i++)
		{
			if (profit[i] > maxProfit)
			{
				maxProfit = profit[i];
			}
		}

		std::cout << "Максимальная прибыль: " << maxProfit << "\n";
		std::cout << "Минимальная прибыль: "  << minProfit;
	return 0;
}


