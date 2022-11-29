#include<iostream>
#include<string>
using namespace std;

extern void menu();
extern void show_menu();
extern void s_menu();



extern wstring** enter_email();
extern wstring** enter_your_name();

extern char** enter_password();
extern char** enter_phone_number();
extern char** enter_your_age();


extern char** enter_telegram_password();


extern wstring** enter_instagram_login();
extern char** enter_instagram_password();





int startupAuthoriz(int argsC,
	char* argsV[])

{
	int passwordLength = 0;
	for (int argumentIndex = 1;
		argumentIndex < argsC;
		argumentIndex++)
	{
		const char* argK = argsV[argumentIndex];
		const char* argV = argsV[argumentIndex + 1];
		if (strcmp(argK, "-login") == 0)
		{
			cout << "¬и пiдключились €к:\t" << argV << endl;
		}
		else
		{
			if (strcmp(argK, "-password") == 0)
			{
				passwordLength = strlen(argV);
				break;
			}
		}
	}



	return passwordLength;

}
int main(int argsC,
	char* argsV[],
	char* environmentParameters[]
)
{

	setlocale(LC_ALL, "");

	if (argsC > 1)
	{
		return startupAuthoriz(argsC, argsV);
	}
	else
	{
		menu();
	}

	cin.get();
	return 0;
}

#ifndef INPUT_MAIN_SAMPLE_H
#define INPUT_MAIN_SAMPLE_H

void show_menu()
{

	wcout << L"¬хiд на сервер:" << endl;
	wcout << L"1.) «ареЇструватись" << endl;
	wcout << L"2.) ¬вiйти" << endl;
	wcout << L"3.) ¬вiйти за домогою “елеграм аккаунта" << endl;
	wcout << L"4.) ¬вiйти за домогою Iнстаграм аккаунта" << endl;
	wcout << L"5.) ¬ихiд" << endl;

}
wstring** enter_email()
{
	wstring* email = new wstring();
	wcout << L"¬ведiть електронну пошту:" << endl;
	wcin.ignore();
	getline(wcin, *email);

	return &email;
}
wstring** enter_your_name()
{
	wstring* your_name = new wstring();
	wcout << L"¬ведiть Iм'€:" << endl;
	wcin.ignore();
	getline(wcin, *your_name);

	return &your_name;
}
wstring** enter_instagram_login()
{
	wstring* instagram_email = new wstring();
	wcout << L"¬ведiть логiн:" << endl;
	wcin.ignore();
	getline(wcin, *instagram_email);

	return &instagram_email;
}
char** enter_password()
{
	const short int MAX_PASSWORD_LENGTH = 13;
	char* password = new char[MAX_PASSWORD_LENGTH];

	wcout << L"¬ведiть пароль:" << endl;
	cin >> password;
	return &password;
}
char** enter_phone_number()
{
	const short int MAX_PASSWORD_LENGTH = 12;
	char* phone_number = new char[MAX_PASSWORD_LENGTH];

	wcout << L"¬ведiть номер телефону:" << endl;
	cin >> phone_number;
	return &phone_number;
}
char** enter_your_age()
{
	const short int MAX_PASSWORD_LENGTH = 3;
	char* your_age = new char[MAX_PASSWORD_LENGTH];

	wcout << L"¬ведiть вiк:" << endl;
	cin >> your_age;
	return &your_age;
}
char** enter_telegram_password()
{
	const short int MAX_PASSWORD_LENGTH = 13;
	char* telegram_password = new char[MAX_PASSWORD_LENGTH];

	wcout << L"¬ведiть пароль:" << endl;
	cin >> telegram_password;
	return &telegram_password;
}
char** enter_instagram_password()
{
	const short int MAX_PASSWORD_LENGTH = 13;
	char* instagram_password = new char[MAX_PASSWORD_LENGTH];

	wcout << L"¬ведiть пароль:" << endl;
	cin >> instagram_password;
	return &instagram_password;
}
void menu()
{
	short int selectedMenuItem = 1;
	wstring email = L"";
	wstring your_name = L"";
	wstring telegram_login = L"";
	wstring instagram_login = L"";
	char* password = nullptr;
	char* phone_number = nullptr;
	char* your_age = nullptr;
	char* telegram_password = nullptr;
	char* instagram_password = nullptr;

	show_menu();
	cin >> selectedMenuItem;
	switch (selectedMenuItem)
	{
	case 1:
		email = **enter_email();
		your_name = **enter_your_name();

		password = *enter_password();
		phone_number = *enter_phone_number();
		your_age = *enter_your_age();


		break;
	case 2:
		email = **enter_email();
		password = *enter_password();
		break;
	case 3:
		telegram_login = **enter_phone_number();
		telegram_password = *enter_telegram_password();
		break;
	case 4:
		instagram_login = **enter_instagram_login();
		instagram_password = *enter_instagram_password();
		break;
	case 5:
	default:

		exit(0);
	}

	if (!email.empty())
	{
		wcout << L"¬аша електронна пошта:\t" << email << endl;
	}
	if (!your_name.empty())
	{
		wcout << L"¬аше Iм'€:\t\t" << your_name << endl;
	}
	if (!telegram_login.empty())
	{
		wcout << L"¬аш номер телефону:\t\t\t" << telegram_login << endl;
	}
	if (!instagram_login.empty())
	{
		wcout << L"¬аш логiн:\t\t" << instagram_login << endl;
	}

	if (password != nullptr)
	{


		wcout << L"¬аш пароль:\t\t"

			<< password << endl;

		delete[] password;
	}

	if (phone_number != nullptr)
	{


		wcout << L"¬аш номер телефону:\t"

			<< phone_number << endl;

		delete[] phone_number;
	}
	if (your_age != nullptr)
	{


		wcout << L"¬аш вiк:\t\t"

			<< your_age << endl;

		delete[] your_age;
	}
	if (telegram_password != nullptr)
	{


		wcout << L"¬аш пароль:\t"

			<< telegram_password << endl;

		delete[] telegram_password;
	}
	if (instagram_password != nullptr)
	{


		wcout << L"¬аш пароль:\t"

			<< instagram_password << endl;

		delete[] instagram_password;
	}

}


#endif