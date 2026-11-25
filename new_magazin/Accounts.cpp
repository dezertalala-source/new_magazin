#include "Accounts.hpp"

size_t userSize = 3;
size_t currentId = 0;
std::wstring currentStatus;


std::wstring* loginArr = new std::wstring[userSize]{ L"admin", L"moderator", L"user" };
std::wstring* passArr = new std::wstring[userSize]{ L"admin", L"moderator", L"user" };
std::wstring* statusArr = new std::wstring[userSize]{ L"SuperAdmin", L"Moderator", L"Client" };
size_t* userIdArr = new size_t[userSize]{ 0,1,2 };

void ChangeAccounts()
{
	std::wstring choose;

	while (true)
	{
		system("cls");

		std::wcout << L"\n\n\t\t\t\tРедактировать Учетных записей \"Вкус лепешки\"\n\n";
		std::wcout << L"1 - создать новый аккаунт\n";
		std::wcout << L"2 - показать всех сотрудников\n";
		std::wcout << L"3 - изменить пароль\n";
		std::wcout << L"4 - изменить уровни доступа\n";
		std::wcout << L"5 - редактировать премии и штрафы сотрудников\n";
		std::wcout << L"6 - удалить аккаунт\n";
		std::wcout << L"0 - Выход\n\n";
		std::wcout << L"Ввод: ";

		GetLine(choose);

		if (choose == L"1")
		{
			
		}
		else if (choose == L"2")
		{
		}
		else if (choose == L"3")
		{

		}
		else if (choose == L"4")
		{

		}
		else if (choose == L"5")
		{

		}
		else if (choose == L"6")
		{

		}
		else if (choose == L"0")
		{
			std::wcout << L"Выход из редактора склада\n";
			Sleep(1000);
			break;
		}
		else
		{
			Err();
		}
	}
}
