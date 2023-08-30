#pragma once
#include <string>
#include "Product.h"

using namespace std;

class Drinks : public Product {
private:
	bool soda;
public:
	//Конструктор
	Drinks(string _shopName, string _name, double _price,int _count ,string _category , bool _soda) : 
		Product(_shopName, _name, _price , _count , _category) {
		soda = _soda;
	}

	//Геттеры и сеттеры для полей
	void setPrice(double _price)
	{
		price = _price;
	}

	void setName(string _name)
	{
		name = _name;
	}

	void setSoda(bool soda)
	{
		this->soda = soda;
	}

	void setCount(int _count)
	{
		count = _count;
	}

	void setCategory()
	{
		category = "Drinks";
	}

	string getCategory()
	{
		return category;
	}

	bool getSoda()
	{
		return soda;
	}

	double getPrice() {
		return price;
	}

	string getName() {
		return name;
	}

	int getCount()
	{
		return count;
	}


};
