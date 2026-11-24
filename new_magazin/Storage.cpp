#include "Storage.hpp"

#include "ServisFuns.hpp"


void ChangeStorage()
{
	std::wcout << L"";
}


void AddNewProduct()
{
	std::wstring chooseName, chooseCount, choosePrice, choose;
	size_t count = 0;
	double price = 0;

	while (true) {

		while (true) {
			system("cls");
			std::wcout << L"Введите название нового товара или exit для выхода : ";
			GetLine(chooseName);
			if (chooseName == L"exit" || L"Exit") {
				std::wcout << L"ОТмена создания товара\n\n";
				Sleep(1500);
				return;
			}

			if (chooseName.size() < 3 || chooseName.size() > 40) {
				std::wcout << L"Ошибка длины слшиком много или мало от3 до 40 символов\n\n\n ";
				Sleep(1500);
				continue;
			}

			if (IsNotSame(chooseName, nameArr, sizeSt)) {
				break;
			}
			else {
				std::wcout << L"такой товар уже есть\n";
				Sleep(1500);
			}
		}



		while (true) {
			system("cls");
			std::wcout << L"Введите кол-во нового товара или exit для выхода : ";
			GetLine(chooseCount);
			if (chooseCount == L"exit" || L"Exit") {
				std::wcout << L"ОТмена создания товара\n\n";
				Sleep(1500);
				return;
			}

			// ТУТ СКОПИРОВАТЬ ПРОВЕРКУ НАД КАУНТ
		}




		while (true) {
			system("cls");
			std::wcout << L"Введите цену нового товара или exit для выхода : ";
			GetLine(choosePrice);
			if (choosePrice == L"exit" || L"Exit") {
				std::wcout << L"ОТмена создания товара\n\n";
				Sleep(1500);
				return;
			}

			// ТУТ СКОПИРОВАТЬ ПРОВЕРКУ НАД ПРАйС
		}


		while (true) {
			system("cls");
			std::wcout << L"Новый товар " << chooseName << L"\n";
			std::wcout << L"Кол-во " << count << L"\n";
			std::wcout << L"цена " << price << L"\n";
			std::wcout << L"1. да\n2. Нет\nВыввод: ";
			GetLine(choose);

			std::wstring arrLoad[4]{L"\\", L"|", L"", L"/" };

			if (choose == L"1") {
				for (size_t i = 0; i < 3; i++) {
					for (size_t i = 0; i < 4; i++) {
						system("cls");
						std::wcout << L"Расшираение склада " << arrLoad[i];
						Sleep(377);
					}
				}
			}
			else if (choose == L"2") {
				std::wcout << L"ОТмена\n";
				Sleep(1500);
				break;
			}
			else {
				//err
			}
		}
	}
}
