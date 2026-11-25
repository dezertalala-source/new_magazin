#ifndef _SUPLIER_HPP_
#define _SUPLIER_HPP_

#include "ServisFuns.hpp"
#include "Storage.hpp"

extern std::wstring *listProduct;
extern double *priceProduct;
extern size_t *countProduct;
extern size_t sizeList;
extern double multiplier;

extern bool isListCreated;

void CreateListsSuplier();
void ShowListSuplier();

#endif // !_SUPLIER_HPP_#pragma once
