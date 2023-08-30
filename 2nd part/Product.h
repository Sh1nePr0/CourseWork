#pragma once
#include <string>


using namespace std;

//Абстрактный класс Product
class Product : public Shop {
protected:
	string name;
	string category;
	double price;
	int count;
public:
	//Конструктор и деструктор
	Product(string _shopName, string _name, double _price , int _count , string _category) : Shop(_shopName) {
		name = _name;
		price = _price;
		count = _count;
		category = _category;
	}
	~Product(){};
	//Чистые виртуальные функции(pure virtual functions)
	virtual string getName() = 0;
	virtual double getPrice() = 0;
	virtual int getCount() = 0;
	virtual string getCategory() = 0;
};
