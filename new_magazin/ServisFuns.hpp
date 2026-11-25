#ifndef _SERVISFUNS_HPP_
#define _SERVISFUNS_HPP_


#include <iostream>
#include <string>
#include <Windows.h>
#include <iomanip>
#include <cwctype>


void GetLine(std::wstring& str);

bool IsNumber(const std::wstring& str);

bool IsNotSame(const std::wstring& str, std::wstring* nameArr, size_t arrSize);

__forceinline void Err()
{
	std::wcout << L"Некорректный ввод";
	Sleep(1500);
}

template <class ArrType>
void FillArray(ArrType* dynamicArray, ArrType* staticArr, size_t commonSize)
{
	for (size_t i = 0; i < commonSize; i++)
	{
		dynamicArray[i] = staticArr[i];
	}
}

template <class ArrType>
void ArrPushBack(ArrType*& arr, size_t arrSize)
{
	arrSize++;
	ArrType* temp = new ArrType[arrSize]{};

	for (size_t i = 0; i < arrSize - 1; i++)
	{
		temp[i] = arr[i];
	}

	std::swap(arr, temp);
	delete[]temp;
}

template <class ArrType>
void arrDeleteByIndex(ArrType*& arr, size_t arrSize, size_t index) {
	arrSize--;
	ArrType* temp = new ArrType[arrSize];
	for (size_t i = 0, j = 0; i < arrSize; i++, j++) {
		if (j == index) {
			j++;
		}
		temp[i] = arr[j];

	}
	std::swap(arr, temp);
	delete[]temp;

}

#endif // !_SERVISFUNS_HPP_