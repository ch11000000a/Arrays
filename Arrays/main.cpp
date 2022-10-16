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
		for (size_t i = 0; i < SIZE; i++)
		{
			cin >> arr[i];
		}
		// вывод элементов масива в прямом парядке
		for (size_t i = 0; i < SIZE; i++)
		{
			cout << arr[i]<<"\t";
		}
		cout << endl;
		// вывод элементов масива в обратном парядке
		for (int i = SIZE-1; i >= 0; i--)
		{
			cout << arr[i] << "\t";
		}
		cout << endl;
	    // Сумма элементов масива
		int sum = 0;
		for (int i = 0; i <SIZE; i++)
		{
			sum += arr[i];
		}
		cout << "Сумма элементов масcива: " << sum << endl;
		cout << "Средне-арифметическое  элементов масcива : " << (double)sum/SIZE << endl;
		}