#include "Auth.hpp"


void Start()
{
	while (true)
	{
		if (Login())
		{
			if (currentStatus == L"SuperAdmin")
			{
				CreateStorage();
				CreateListsSuplier();
				SuperAdminMenu();
			}
			else if (currentStatus == L"Admin")
			{
				//todo
			}
			else if (currentStatus == L"User")
			{
				//todo
			}
			else
			{
				std::wcerr << L"\n\nCURRENT_STAUTS_LOGIN_ERROR\n\n";
			}
		}
		else
		{

		}
	}
}

bool Login()
{
	std::wstring login, password;
	while (true)
	{
		system("cls");

		std::wcout << L"\n\n\n\t\t\tДобро пожаловать!";
		std::wcout << L"\n\n\n\t\t\t вкус лепешки";
		std::wcout << L"\n\nВведите логин или \"exit\"";

		GetLine(login);

		if (login == L"exit" || login == L"Exit")
			return false;

		std::wcout << L"Введите пароль";
		GetLine(password);

		for (size_t i = 0; i < userSize; i++)
		{
			if (login == loginArr[i] && password == passArr[i])
			{
				std::wcout << L"Добро пожаловать " << loginArr[i] << L"\n";
				std::wcout << L"Ваш уровень доступа " << statusArr[i] << L"\n";
				Sleep(1500);
				currentId = userIdArr[i];
				currentStatus = statusArr[i];
				return true;
			}
		}

		std::wcout << L"Неверный логин или пароль. Повторите попытку\n\n";
		Sleep(1500);
	}

	return false;
}

void SuperAdminMenu()
{
	std::wstring choose;

	while (true)
	{
		system("cls");
		std::wcout << L"1 - Начать продажу\n";
		std::wcout << L"2 - Показать склад\n";
		std::wcout << L"3 - Пополнить товары\n";
		std::wcout << L"4 - Списать товары\n";
		std::wcout << L"5 - Изменить цены\n";
		std::wcout << L"6 - Редактировать склад\n";
		std::wcout << L"7 - Редактировать сотрудников\n";
		std::wcout << L"8 - Показать прибыль\n";
		std::wcout << L"9 - Посмотреть склад поставщика\n";
		std::wcout << L"0 - Выход\n\n";
		std::wcout << L"Ввод: ";
		GetLine(choose);

		if (choose == L"1")
		{

		}
		else if (choose == L"2")
		{
			ShowStorage();
		}
		else if (choose == L"3")
		{
			AddProduct();
		}
		else if (choose == L"4")
		{
			RemoveProduct();
		}
		else if (choose == L"5")
		{
			ChangePrice();
		}
		else if (choose == L"6")
		{
			ChangeStorage();
		}
		else if (choose == L"7")
		{

		}
		else if (choose == L"8")
		{

		}
		else if (choose == L"9")
		{
			ShowListSuplier();
		}
		else if (choose == L"0")
		{

		}
		else
		{
			Err();
		}
	}
}