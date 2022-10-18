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
	string color = "Чорний";
	bool have_engine = true;
	string transmission = "Автомат";
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



	cout << "Марка машини:\t\t" << fullname << endl;
	cout << "Ціна:\t\t\t" << price << endl;
	cout << "Рік:\t\t\t" << year << endl;
	cout << "Пробіг:\t\t\t" << mileage << endl;
	cout << "Колір:\t\t\t" << color << endl;
	cout << "Є двигун:\t\t" << ((have_engine) ? "Так" : "Ні") << endl;
	cout << "Коробка передач:\t" << transmission << endl;

	cout << "Загальний об'єм використанної пам'ятi (в байтах):" <<

		totalMemoryInBytes << endl;












}