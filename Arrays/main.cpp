#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
		cout << "helo"<<endl;
		const int SIZE = 5;
		int arr[SIZE];
		//arr[2] = 123;
		cout << "������� �������� �������: ";
		for (size_t i = 0; i < SIZE; i++)
		{
			cin >> arr[i];
		}
		// ����� ��������� ������ � ������ �������
		for (size_t i = 0; i < SIZE; i++)
		{
			cout << arr[i]<<"\t";
		}
		cout << endl;
		// ����� ��������� ������ � �������� �������
		for (int i = SIZE-1; i >= 0; i--)
		{
			cout << arr[i] << "\t";
		}
		cout << endl;
	    // ����� ��������� ������
		int sum = 0;
		for (int i = 0; i <SIZE; i++)
		{
			sum += arr[i];
		}
		cout << "����� ��������� ���c���: " << sum << endl;
		cout << "������-��������������  ��������� ���c��� : " << (double)sum/SIZE << endl;
		}