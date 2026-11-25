#include <io.h> // _setmod, _fileno
#include <fcntl.h> // _O_U16TEXT
#include "Auth.hpp"


int main() {
	_setmode(_fileno(stdin), _O_U16TEXT);
	_setmode(_fileno(stdout), _O_U16TEXT);


	Start();
	delete[] loginArr;
	delete[] passArr;
	delete[] statusArr;
	delete[] userIdArr;

	if (isStorageCreated)
	{
		delete[] idArr;
		delete[] nameArr;
		delete[] countArr;
		delete[] priceArr;
	}

	if (isListCreated)
	{
		delete[] listProduct;
		delete[] countProduct;
		delete[] priceProduct;
	}


	return 0;
}

// система авторизация и ЛК
// аккаунты: база данных + функции
// продажи: продажа товарова - формирование чеков и оплата
// склад: товары - редактирование наличия товаров на складе - изминение цены - редактирования самих товаров и их характиристик
// служебные: 
// 

