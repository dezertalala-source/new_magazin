#include "Storage.hpp"

#include "ServisFuns.hpp"


size_t sizeSt = 0;
size_t* idArr = nullptr;
std::wstring* nameArr;
size_t* countArr = nullptr;
double* priceArr = nullptr;
bool isStorageCreated = false;
size_t maxStorageSize = 7000;
size_t currentStorageSize = 0;
double maxPrice = 1500000;

void CreateStorage(int mode)
{
	if (mode == 0 && !isStorageCreated)
	{
		const size_t staticSize = 10;
		sizeSt = staticSize;

		size_t idArrStatic[staticSize]{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

		std::wstring nameArrStatic[staticSize]
		{
			L"Навоз конский", L"Навоз свиннки пепы",
			L"куриный помет (Насвай)", L"Навоз святой коровы", L"Навоз кошачий - моча 50%",
			L"Навоз собачий - моча 30%", L"Навоз козий",
			L"Навоз лосиный", L"Навоз лисы", L" VIP - какашки человека - "
		};

		size_t countArrStatic[staticSize]{ 120, 150, 200, 60, 75, 35, 10, 170, 110, 65 };
		double priceArrStatic[staticSize]{ 15050, 10000, 12000, 9300, 8500, 8300, 11000, 13000, 13300, 25000, };

		idArr = new size_t[sizeSt];
		nameArr = new std::wstring[sizeSt];
		countArr = new size_t[sizeSt];
		priceArr = new double[sizeSt];

		FillArray(idArr, idArrStatic, sizeSt);
		FillArray(nameArr, nameArrStatic, sizeSt);
		FillArray(countArr, countArrStatic, sizeSt);
		FillArray(priceArr, priceArrStatic, sizeSt);

		for (size_t i = 0; i < sizeSt; i++)
		{
			currentStorageSize += countArr[i];
		}

		isStorageCreated = true;
	}
	else if (mode == 1)
	{

	}
	else
	{
		std::wcout << L"Склад уже создан\n\n";
		Sleep(1500);
	}
}

void ShowStorage(int mode)
{
	if (mode == 0)
	{
		system("cls");
		std::wcout << L"\n\n\t\t\t\tТовары \"Вкус лепешки\"\n\n";

		std::wcout << L"ID\t" << std::fixed << std::left << std::setw(40) << L" Название товаров\t\t"
			<< L"Кол-во\t" << L"Цена\n\n";

		for (size_t i = 0; i < sizeSt; i++)
		{
			std::wcout << idArr[i] << L"\t" << std::fixed << std::left << std::setw(39) << nameArr[i]
				<< L"\t\t" << countArr[i] << L"\t" << std::setprecision(2) << priceArr[i] << L"\n";
		}

		std::wcout << L"\n\n";
		system("pause");
	}
	else if (mode == 1)
	{
		system("cls");
		std::wcout << L"\n\n\t\t\t\tПополнения товаров \"Вкус лепешки\"\n\n";

		std::wcout << L"ID\t" << std::fixed << std::left << std::setw(40) << L" Название товаров\t\t"
			<< L"Кол-во\n\n";

		for (size_t i = 0; i < sizeSt; i++)
		{
			std::wcout << idArr[i] << L"\t" << std::fixed << std::left << std::setw(39) << nameArr[i]
				<< L"\t\t" << countArr[i] << L"\t" << L"\n";
		}

		std::wcout << L"\n\n";
		std::wcout << L"Занято на складе " << currentStorageSize << L" из " << maxStorageSize << L" мест\n\n";
	}
	else if (mode == 2)
	{
		system("cls");
		std::wcout << L"\n\n\t\t\t\tСписание товаров \"Вкус лепешки\"\n\n";

		std::wcout << L"ID\t" << std::fixed << std::left << std::setw(40) << L" Название товаров\t\t"
			<< L"Кол-во\n\n";

		for (size_t i = 0; i < sizeSt; i++)
		{
			std::wcout << idArr[i] << L"\t" << std::fixed << std::left << std::setw(39) << nameArr[i]
				<< L"\t\t" << countArr[i] << L"\t" << L"\n";
		}

		std::wcout << L"\n\n";
		std::wcout << L"Занято на складе " << currentStorageSize << L" из " << maxStorageSize << L" мест\n\n";
	}
	else if (mode == 3)
	{
		system("cls");
		std::wcout << L"\n\n\t\t\t\tИзменение цен \"Вкус лепешки\"\n\n";

		std::wcout << L"ID\t" << std::fixed << std::left << std::setw(40) << L" Название товаров\t\t" << L"Цена\n\n";

		for (size_t i = 0; i < sizeSt; i++)
		{
			std::wcout << idArr[i] << L"\t" << std::fixed << std::left << std::setw(39) << nameArr[i]
				<< L"\t\t" << std::setprecision(2) << priceArr[i] << L"\n";
		}

		std::wcout << L"\n\n";
	}
	else if (mode == 4) {
		system("cls");
		std::wcout << L"\n\n\t\t\t\tпереименование товаров \"Вкус лепешки\"\n\n";

		std::wcout << L"ID\t" << std::fixed << std::left << std::setw(40) << L" Название товаров\t\t"
			<< L"Кол-во\n\n";

		for (size_t i = 0; i < sizeSt; i++)
		{
			std::wcout << idArr[i] << L"\t" << std::fixed << std::left << std::setw(39) << nameArr[i]
				<< L"\t\t" << countArr[i] << L"\t" << L"\n";
		}

		std::wcout << L"\n\n";
	}
	else if (mode == 5) {
		system("cls");
		std::wcout << L"\n\n\t\t\t\tУдаление товаров \"Вкус лепешки\"\n\n";

		std::wcout << L"ID\t" << std::fixed << std::left << std::setw(40) << L" Название товаров\t\t"
			<< L"Кол-во\n\n";

		for (size_t i = 0; i < sizeSt; i++)
		{
			std::wcout << idArr[i] << L"\t" << std::fixed << std::left << std::setw(39) << nameArr[i]
				<< L"\t\t" << countArr[i] << L"\t" << L"\n";
		}

		std::wcout << L"\n\n";
	}
}

void AddProduct()
{
	std::wstring chooseId, chooseCount, choose;

	while (true)
	{
		ShowStorage(1);

		std::wcout << L"Введите ID товара или \"exit\" для выхода: ";
		GetLine(chooseId);

		if (chooseId == L"exit" || chooseId == L"Exit")
		{
			std::wcout << L"Завершения пополнения товара";
			Sleep(1500);
			return;
		}
		else if (IsNumber(chooseId))
		{
			int id = std::stoi(chooseId) - 1;

			if (id < 0 || id > sizeSt - 1)
			{
				Err();
			}
			else
			{
				std::wcout << L"введите количество товаров для пополнения: ";
				GetLine(chooseCount);

				if (IsNumber(chooseCount))
				{
					size_t count = std::stoull(chooseCount);

					if (count < 0 || count > maxStorageSize - currentStorageSize)
					{
						std::wcout << L"Некоректное количество! на складе осталось " << maxStorageSize - currentStorageSize << L" свободных мест";
						Sleep(1500);
					}
					else if (countProduct[id] == 0)
					{
						std::wcout << L"Товара нет у поставщика!\n\n";
						Sleep(1500);
						break;
					}
					else if (countProduct[id] < count)
					{
						std::wcout << L"Не хватает товара у поставщика!\n\n";
						std::wcout << L"У поставщика осталось " << countProduct[id] << " " << listProduct[id] << "\n\n";
						Sleep(1500);
						break;
					}
					else
					{
						while (true)
						{
							system("cls");
							std::wcout << nameArr[id] << L"\t" << countArr[id] << L" ------> " << countArr[id] + count << L"\n\n";
							std::wcout << L"Подтвердить?\n1 - да\n2 - нет\n\nВвод: ";
							GetLine(choose);
							if (choose == L"1")
							{
								std::wcout << L"Товар успешно пополнен!\n\n";
								countArr[id] += count;
								currentStorageSize += count;
								countProduct[id] -= count;
								std::wcout << L"У поставщика осталось " << countProduct[id] << " " << listProduct[id] << "\n\n";
								Sleep(1500);
								break;
							}
							else if (choose == L"2")
							{
								std::wcout << L"Отмена пополнения " << nameArr[id] << L"\n";
								Sleep(1500);
								break;
							}
							else
							{
								Err();
							}
						}
					}
				}
			}
		}
	}
}

void RemoveProduct()
{
	std::wstring chooseId, chooseCount, choose;

	while (true)
	{
		ShowStorage(2);

		std::wcout << L"Введите ID товара или \"exit\" для выхода: ";
		GetLine(chooseId);

		if (chooseId == L"exit" || chooseId == L"Exit")
		{
			std::wcout << L"Завершения списания товара";
			Sleep(1500);
			return;
		}
		else if (IsNumber(chooseId))
		{
			int id = std::stoi(chooseId) - 1;

			if (id < 0 || id > sizeSt - 1)
			{
				Err();
			}
			else
			{
				std::wcout << L"введите количество товаров для списания: ";
				GetLine(chooseCount);

				if (IsNumber(chooseCount))
				{
					size_t count = std::stoull(chooseCount);
					if (count < 0 || count > countArr[id])
					{
						std::wcout << L"Некоректное количество! на складе осталось " << countArr[id] << L"штук";
						Sleep(1500);
					}
					else
					{
						while (true)
						{
							system("cls");
							std::wcout << nameArr[id] << L"\t" << countArr[id] << L" ------> " << countArr[id] - count << L"\n\n";
							std::wcout << L"Подтвердить?\n1 - да\n2 - нет\n\nВвод: ";
							GetLine(choose);
							if (choose == L"1")
							{
								std::wcout << L"Товар успешно списан!\n\n";
								countArr[id] -= count;
								currentStorageSize -= count;
								Sleep(1500);
								break;
							}
							else if (choose == L"2")
							{
								std::wcout << L"Отмена списания " << nameArr[id] << L"\n";
								Sleep(1500);
								break;
							}
							else
							{
								Err();
							}
						}
					}
				}
			}
		}
	}
}

void ChangePrice()
{
	std::wstring chooseId, choosePrice, choose;

	while (true)
	{
		ShowStorage(3);

		std::wcout << L"Введите ID товара или \"exit\" для выхода: ";
		GetLine(chooseId);

		if (chooseId == L"exit" || chooseId == L"Exit")
		{
			std::wcout << L"Завершения изменения цены\n\n";
			Sleep(1500);
			return;
		}
		else if (IsNumber(chooseId))
		{
			int id = std::stoi(chooseId) - 1;

			if (id < 0 || id > sizeSt - 1)
			{
				Err();
			}
			else
			{
				std::wcout << L"введите новую стоимость товара: ";
				GetLine(choosePrice);

				if (IsNumber(choosePrice))
				{
					double price = std::stod(choosePrice);

					if (price < 0 || price > maxPrice)
					{
						std::wcout << L"Некоректная стоимость! Максимально возможная цена: " << maxPrice << L" рублей\n\n";
						Sleep(1500);
					}
					else
					{
						while (true)
						{
							system("cls");

							std::wcout << nameArr[id] << L"\t" << priceArr[id] << L" ------> " << price << L"\n\n";
							std::wcout << L"Подтвердить?\n1 - да\n2 - нет\n\nВвод: ";

							GetLine(choose);

							if (choose == L"1")
							{
								std::wcout << L"Успешное изменение стоимости!\n\n";
								priceArr[id] = price;
								Sleep(1500);
								break;
							}
							else if (choose == L"2")
							{
								std::wcout << L"Отмена измения стоимости " << nameArr[id] << L"\n";
								Sleep(1500);
								break;
							}
							else
							{
								Err();
							}
						}
					}
				}
			}
		}
	}
}

void ChangeStorage()
{
	std::wstring choose;

	while (true)
	{
		system("cls");

		std::wcout << L"\n\n\t\t\t\tРедактировать склад \"Сырный мастер\"\n\n";
		std::wcout << L"1 - Добавить новый товар\n";
		std::wcout << L"2 - Изменить названия товара\n";
		std::wcout << L"3 - Удалить товары\n";
		std::wcout << L"4 - Изменить лимиты склада\n";
		std::wcout << L"0 - Выход\n\n";
		std::wcout << L"Ввод: ";

		GetLine(choose);

		if (choose == L"1")
		{
			AddNewProduct();
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
		else if (choose == L"0")
		{
			std::wcout << L"Выход из редактора склада\n";
			Sleep(15000);
			break;
		}
		else
		{
			Err();
		}
	}
}

void AddNewProduct()
{
	std::wstring chooseName, chooseCount, choosePrice, choose;
	size_t count = 0;
	double price = 0;

	while (true)
	{
		while (true)
		{
			system("cls");

			std::wcout << L"Введите название товара или \"exit\" для выхода: ";

			GetLine(chooseName);

			if (chooseName == L"exit" || chooseName == L"Exit")
			{
				std::wcout << L"Отмена созадния нового товара";
				Sleep(1500);
				return;
			}

			if (chooseName.size() < 3 || chooseName.size() > 40)
			{
				std::wcout << L"Ошибка длины названия товара\n Допустимое значение от 3 до 40 символов\n\n";
				Sleep(1500);
				continue;
			}

			if (IsNotSame(chooseName, nameArr, sizeSt))
			{
				break;
			}
			else
			{
				std::wcout << L"Такой товар уже есть на складе";
				Sleep(1500);
			}
		}

		while (true)
		{
			system("cls");

			std::wcout << L"Введите количество нового товара или \"exit\" для выхода: ";

			GetLine(chooseCount);

			if (chooseCount == L"exit" || chooseCount == L"Exit")
			{
				std::wcout << L"Отмена созадния нового товара";
				Sleep(1500);
				return;
			}

			if (IsNumber(chooseCount))
			{
				count = std::stoull(chooseCount);

				if (count < 0 || count > maxStorageSize - currentStorageSize)
				{
					std::wcout << L"Некоректное количество! на складе осталось " << maxStorageSize - currentStorageSize << L" свободных мест";
					Sleep(1500);
				}
				else
				{
					break;
				}
			}
		}

		while (true)
		{
			system("cls");

			std::wcout << L"Введите стоимость нового товара или \"exit\" для выхода: ";

			GetLine(choosePrice);

			if (choosePrice == L"exit" || choosePrice == L"Exit")
			{
				std::wcout << L"Отмена измения стоимости товара";
				Sleep(1500);
				return;
			}

			if (IsNumber(choosePrice))
			{
				price = std::stod(choosePrice);

				if (price < 0 || price > maxPrice)
				{
					std::wcout << L"Некорректная стоимость! максимально возможная цена: " << maxPrice << L" рублей\n\n";
					Sleep(1500);
				}
				else
				{
					break;
				}
			}
		}

		while (true)
		{
			system("cls");
			std::wcout << chooseName << L" - новый товар\n";
			std::wcout << chooseCount << L" - количество\n";
			std::wcout << choosePrice << L" - цена\n";

			std::wcout << L"Подтвердить?\n1 - да\n2 - нет\n\nВвод: ";

			GetLine(choose);

			if (choose == L"1")
			{
				std::wcout << L"Расширение склада";

				for (size_t i = 0; i < 5; i++)
				{
					Sleep(500);
					std::wcout << L" .";
				}

				Sleep(500);

				ArrPushBack(idArr, sizeSt);
				ArrPushBack(nameArr, sizeSt);
				ArrPushBack(countArr, sizeSt);
				ArrPushBack(priceArr, sizeSt);

				sizeSt++;

				idArr[sizeSt - 1] = sizeSt;
				nameArr[sizeSt - 1] = chooseName;
				countArr[sizeSt - 1] = count;
				priceArr[sizeSt - 1] = price;
				currentStorageSize += count;

				std::wcout << L"\n\nТовар успешно добавлен\n\n";

				break;
			}
			else if (choose == L"2")
			{
				std::wcout << L"Отмена\n";
				Sleep(1500);
				break;
			}
			else
			{
				Err();
			}
		}
	}
}








void ChangeProductName() {
	std::wstring chooseId, chooseName, choose;

	while (true)
	{
		ShowStorage(4);

		std::wcout << L"Введите ID товара или \"exit\" для выхода: ";
		GetLine(chooseId);

		if (chooseId == L"exit" || chooseId == L"Exit")
		{
			std::wcout << L"Завершения переименовании товара";
			Sleep(1500);
			return;
		}
		else if (IsNumber(chooseId))
		{
			int id = std::stoi(chooseId) - 1;

			if (id < 0 || id > sizeSt - 1)
			{
				Err();
			}
			else
			{
				std::wcout << L"введите новое название для товара: ";
				GetLine(chooseName);

				if (chooseName.size() < 3 || chooseName.size() > 40)
				{
					std::wcout << L"Ошибка длины названия товара\n Допустимое значение от 3 до 40 символов\n\n";
					Sleep(1500);
					continue;
				}

				if (!IsNotSame(chooseName, nameArr, sizeSt))
				{
					std::wcout << L"Такой товар уже есть на складе";
					Sleep(1500);
				}
				else
				{
					while (true)
					{
						system("cls");
						std::wcout << nameArr[id] << L"\t" << countArr[id] << L" ------> " << chooseName << L"\n\n";
						std::wcout << L"Подтвердить?\n1 - да\n2 - нет\n\nВвод: ";
						GetLine(choose);
						if (choose == L"1")
						{
							std::wcout << L"Товар успешно пополнен!\n\n";
							nameArr[id] = chooseName;
							Sleep(1500);
							break;
						}
						else if (choose == L"2")
						{
							std::wcout << L"Отмена пополнения " << nameArr[id] << L"\n";
							Sleep(1500);
							break;
						}
						else
						{
							Err();
						}

					}
				}
			}
		}
	}
}



// добавть дуаление продукта