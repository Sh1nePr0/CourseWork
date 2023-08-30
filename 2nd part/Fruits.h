#pragma once
#include <string>
#include "Product.h"

using namespace std;

class Fruits : public Product {
private:
	bool bones;
public:
	//Конструктор
	Fruits(string _shopName, string _name, double _price, int _count , string _category ,  bool _bones) : 
		Product(_shopName, _name, _price , _count , _category) {
		bones = _bones;
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
	
	void setBones(bool bones)
	{
		this->bones = bones;
	}

	void setCount(int _count)
	{
		count = _count;
	}

	void setCategory()
	{
		category = "Fruits";
	}

	string getCategory()
	{
		return category;
	}

	bool getBones()
	{
		return bones;
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
