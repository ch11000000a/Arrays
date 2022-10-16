#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
		cout << "helo"<<endl;
		const int SIZE = 5;
		int arr[SIZE];
		//arr[2] = 123;
		cout << "Введите элементы массива: ";
		//Ввод элементов массива
		for (size_t i = 0; i < SIZE; i++)
		{
			cin >> arr[i];
		}
		// Вывод элементов массива в прямом парядке
		for (size_t i = 0; i < SIZE; i++)
		{
			cout << arr[i]<<"\t";
		}
		cout << endl;
		// Вывод элементов массива в обратном парядке
		for (int i = SIZE-1; i >= 0; i--)
		{
			cout << arr[i] << "\t";
		}
		cout << endl;
	    // Сумма элементов массива
		int sum = 0;
		for (int i = 0; i <SIZE; i++)
		{
			sum += arr[i];
		}
		cout << "Сумма элементов масcива: " << sum << endl;
		cout << "Средне-арифметическое элементов масcива: " << (double)sum/SIZE << endl;
		
		//Поиск минимального и максимального значения в массиве
		int max=arr[0];
		int min=arr[0];
		for (int i = 0; i < SIZE; i++)
		{
			if (arr[i] > max)
			{
				max = arr[i];
			}
			if (arr[i] < min)
			{
				min = arr[i];
			}
		}
		cout <<"Максимальное значение в массиве: " << max<<endl;
		cout <<"Минимальное значение в массиве: " << min<<endl;
}