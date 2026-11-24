#ifndef _SERVISFUNS_HPP_
#define _SERVISFUNS_HPP_



#include <iostream>
#include <string>
#include <Windows.h>
#include <cwctype>

void GetLine(std::wstring& str);

bool IsNotSame(const std::wstring& str, std::wstring* nameArr, size_t arrSize);


template <class ArrayType>
void ArrPushBack(ArrType*& arr, size_t, arrSize) {
	arrSize++;
	ArrType* temp = new ArrType[arrSize]{};
	for (size_t i = 0; i < arrSize - 1; i++) {
		temp[i] = arr[i];
	}
	std::swap(arr, temp);
	delete[]temp;
};

#endif // !_SERVISFUNS_HPP_