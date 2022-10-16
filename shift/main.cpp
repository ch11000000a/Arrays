#include<iostream>
using namespace std;
void main() {
	setlocale(LC_ALL, "");
	const int n = 10;
	int arr[n] = { 1,2,3,4,5,6,7,8,9,10 };
	//Вывод исходного массива
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
	// Сдвиг массива

	for (int i = 0; i < n; i++)
	{
		/*if (i == 0) {
			arr[n - 1] = arr[0];
		}
		else {*/
			arr[i] = arr[(i + 1)];
		//}
		
	}
	cout << endl;

	//Вывод сдвинутого массива
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
