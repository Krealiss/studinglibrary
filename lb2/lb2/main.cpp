#include <iostream>
#include <Windows.h>

using namespace std;


int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);



    string brand = "Mercedes ";
	string series = "G 63 AMG ";
    unsigned int price = 9999;
	unsigned short int year = 2022;
	float  mileage = 1.271;
	string color = "������";
	bool have_engine = true;
	string transmission = "�������";
	string fullname = brand + series;
	


	unsigned int totalMemoryInBytes =

		sizeof(brand) +
		sizeof(series) +
		sizeof(price) +
		sizeof(year) +
		sizeof(mileage) +
		sizeof(color) +
		sizeof(have_engine) +
		sizeof(fullname)+
		sizeof(transmission);



	cout << "����� ������:\t\t" << fullname << endl;
	cout << "ֳ��:\t\t\t" << price << endl;
	cout << "г�:\t\t\t" << year << endl;
	cout << "�����:\t\t\t" << mileage << endl;
	cout << "����:\t\t\t" << color << endl;
	cout << "� ������:\t\t" << ((have_engine) ? "���" : "ͳ") << endl;
	cout << "������� �������:\t" << transmission << endl;

	cout << "��������� ��'�� ������������ ���'��i (� ������):" <<

		totalMemoryInBytes << endl;












}