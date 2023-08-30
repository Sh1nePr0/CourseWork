#pragma once

#include <string>

using namespace std;

class Shop {
protected:
	string shopName;
public:
	//Конструкторы
	Shop() {};
	Shop(string _shopName) {
		shopName = _shopName;
	}

	//Определение геттеров и сеттеров для всех полей
	void setShopName(string _shopName)
	{
		shopName = _shopName;
	}

	string getShopName()
	{
		return shopName;
	}

	//Деструктор
	~Shop() {};
};
