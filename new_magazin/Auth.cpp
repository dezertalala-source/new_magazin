#include "Auth.hpp"


void Start()
{
	while (true)
	{
		if (Login()) {
			std::wcout << L"ВХод в аккаунт выполнен ожидаем дольнейших действий ваш профиль - " << currentStatus;
		}
		else {
			std::wcout << L"пока ты вышел не захотел входить в ак";
		}
	}	
}




bool Login()
{
	std::wstring login, pass;
	while (true)
	{
		system("cls");

		std::wcout << L"\n\t\t\t>- добро пожаловать -<";
		std::wcout << L"\n\t\t\t  -- Вкус Лепёшки --";
		std::wcout << L"\n\t*У нас в асортименте есть много видов отборного навоза*\n\n";


		std::wcout << L"Введите логин или \"exit\" для выхода: ";
		GetLine(login);
		if (login == L"exit" || login == L"Exit") {
			return false;
		}
		else {
			std::wcout << L"Введите пароль или \"exit\" для выхода: ";
			GetLine(pass);
			if (login == L"exit" || login == L"Exit") {
				return false;
			}
			else {
				for (size_t i = 0; i < userSize; i++) {
					if (login == loginArr[i] && pass == passArr[i]) {
						currentId = userIdArr[i];
						currentStatus = statusArr[i];

						std::wcout << L"Вы вошли в аккаунт под логином " << loginArr[i];
						Sleep(1500);
						return true;
					}
				}
				std::wcout << L"Неверный логин или пароль";
				Sleep(1500);
			}

		}
	}
}
