#include "ServisFuns.hpp"

void GetLine(std::wstring& str)
{
	std::getline(std::wcin, str, L'\n');
}

bool IsNumber(const std::wstring& str)
{
	if (str.size() <= 0 || str.size() >= 10)
	{
		std::wcout << L"ошбика длины. Максимум 9 значное число\n\n";
		Sleep(1500);
		return false;
	}

	for (size_t i = 0; i < str.size(); i++)
	{
		if (!std::iswdigit(str[i]))
		{
			std::wcout << L"данные не являются числом\n\n";
			Sleep(1500);
			return false;
		}
	}

	return true;
}

bool IsNotSame(const std::wstring& str, std::wstring* nameArr, size_t arrSize)
{
	for (size_t i = 0; i < arrSize; i++)
	{
		if (nameArr[i] == str)
		{
			return false;
		}

		return true;
	}
}
