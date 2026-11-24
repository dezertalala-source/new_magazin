#include "ServisFuns.hpp"

void GetLine(std::wstring& str)
{
	std::getline(std::wcin, str, L'\n');
}

bool IsNotSame(const std::wstring& str, std::wstring* nameArr, size_t arrSize)
{

	for (size_t i = 0; i < arrSize; i++) {
		if (nameArr[i] == str) {
			return false;
		}
	}
	return true;
}
