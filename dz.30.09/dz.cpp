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

	std::cout << "������� 1\n";

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
	std::cout << "����������� �����: " << min << "\n";;

	max = arr[0];
	for (size_t i = 0; i < size; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];

		}

	}
	std::cout << "������������ �����: " << max << "\n";
	
	std::cout << "������� 2 \n";


	for (size_t i = 0; i < size; i++)
	{
		arr[i] = rand() % 10 + 1;
		std::cout << arr[i] << " ";

	}
	std::cout << "\n";

	std::cout << "������� ��������: "; std::cin >> diapoz;

	for (size_t i = 0; i < size; i++)
	{
		if (arr[i] < diapoz)
		{
			sum += arr[i];

		}
	}
	std::cout << sum << "\n";

	std::cout << "������� 3 \n";

	std::cout << "������� ������� � ������ �����(12 �����): \n";
	for (size_t i = 0; i < size; i++)
	{
		std::cout << "����� " << i + 1 << ": ";
		std::cin >> profit[i];
	}
	std::cout << "������� �������� �������(������ � �����): "; std::cin >> start >> end;
	
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

		std::cout << "������������ �������: " << maxProfit << "\n";
		std::cout << "����������� �������: "  << minProfit;
	return 0;
}


