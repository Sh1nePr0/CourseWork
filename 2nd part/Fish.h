#pragma once
#include <string>
#include "Product.h"

using namespace std;

class Fish : public Product {
private:
	string color;
public:
	//Конструктор
	Fish(string _shopName, string _name, double _price,int _count , string _category , string _color) : 
		Product(_shopName, _name, _price , _count , _category) {
		color = _color;
	}

	//Гетерры и сетттеры для полей
	void setPrice(double _price)
	{
		price = _price;
	}

	void setName(string _name)
	{
		name = _name;
	}

	void setColor(string color)
	{
		this->color = color;
	}

	void setCount(int _count)
	{
		count = _count;
	}

	void setCategory()
	{
		category = "Fish";
	}

	string getCategory()
	{
		return category;
	}

	string getColor()
	{
		return color;
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
