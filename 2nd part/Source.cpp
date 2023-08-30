#include <iostream>
#include <conio.h>
#include "Shop.h"
#include "Fish.h"
#include "Drinks.h"
#include "Fruits.h"
#include "Bag.h"
#include "Product.h"
#include "windows.h"

using namespace std;


//Объявление функции добавления продукта в корзину
void AddNewProductInTheBag(Bag* myBag, string shopName);

//Функция описывающая меню в программе
void Menu()
{
	cout << "*************************************************" << endl;
	cout << "\t Магазин :                              |" << endl;
	cout << "1.Добавить продукт в корзину-                   |" << endl;
	cout << "2.Удалить конкретный элемент из корзины-        |" << endl;
	cout << "3.Просмотреть корзину-                          |" << endl;
	cout << "4.Рассчитать цену всех товаров-                 |" << endl;
	cout << "5.Рассчитать цену товаров конкретной категории- |" << endl;
	cout << "6.Закончить программу-                          |" << endl;
	cout << "*************************************************" << endl;
}

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	string shopName;
	bool checking = true;
	Bag* myBag = new Bag();
	cout << "Введите название магазина : ";
	cin >> shopName;
	
	//Реализация работы каждого пункта в меню выбора
	do
	{
		Menu();
		switch (_getch())
		{
		case '1'://Добавление продукта
			AddNewProductInTheBag(myBag , shopName);
			break;
		case '2'://Удаление определенного продукта
			myBag->DeleteCertainProduct();
			break;
		case '3'://Вывод информации о корзине
			myBag->printInfoBag();
			break;
		case '4'://Вывод информации о корзине с ценой всех продуктов
			myBag->printInfoWithTotalPriceBag();
			break;
		case '5'://Вывод информации и цены опрделенной категории продуктов
			myBag->printInfoAndTotalPriceOfCertainCategory();
			break;
		case '6'://Выход
			checking = false;
			break;
		default:
			break;
		}

	} while (checking == true);

	delete myBag;//Удаление корзины в конце программы
	return 0;
}


//Определение функции добавления продукта в корзину
void AddNewProductInTheBag(Bag* myBag, string shopName)
{
	string name;
	double price;
	int count;
	bool soda;
	bool bones;
	string color;
	string category;
	bool check = true;
	cout << "Выберите категорию из которой хотите добавить элемент : " << endl;
	cout << "1.Напитки-" << endl;
	cout << "2.Фрукты-" << endl;
	cout << "3.Рыба-" << endl;
	do
	{
		switch (_getch())
		{
		case '1':
			category = "Напитки";
			do
			{
				cout << "Выберите напиток : " << endl;
				cout << "1.Coca-Cola " << endl;
				cout << "2.Fanta " << endl;
				cout << "3.Сок " << endl;
				cout << "4.Вода(негазированная)" << endl;
				switch (_getch())
				{
				case '1':
					name = "Coca-Cola";
					price = 2.79;
					cout << "В каком количестве : ";
					cin >> count;
					soda = true;
					check = true;
				    myBag->addProduct(new Drinks(shopName, name, price, count,category, soda));
					break;
				case '2':
					name = "Fanta";
					price = 2.15;
					cout << "В каком количестве : ";
					cin >> count;
					soda = true;
					check = true;
					myBag->addProduct(new Drinks(shopName, name, price, count,category, soda));
					break;
				case '3':
					name = "Сок";
					price = 3.00;
					cout << "В каком количестве : ";
					cin >> count;
					soda = false;
					check = true;
					myBag->addProduct(new Drinks(shopName, name, price, count,category , soda));
					break;
				case '4':
					name = "Вода(негазированная)";
					price = 1.65;
					cout << "В каком количестве : ";
					cin >> count;
					soda = false;
					check = true;
					myBag->addProduct(new Drinks(shopName, name, price, count,category , soda));
					break;
				default:
					cout << "Неправильный ввод " << endl << "Ничего не добавлено" << endl;
					check = false;
				}
			} while (check == false);
			break;
		case'2':
			category = "Фрукты";
			do
			{
				cout << "Выберите фрукт : " << endl;
				cout << "1.Авокадо " << endl;
				cout << "2.Манго " << endl;
				cout << "3.Ананас " << endl;
				cout << "4.Помело" << endl;
				switch (_getch())
				{
				case '1':
					name = "Авокадо";
					price = 2.50;
					cout << "В каком количестве : ";
					cin >> count;
					bones = true;
					check = true;
					myBag->addProduct(new Fruits(shopName, name, price, count,category , bones));
					break;
				case '2':
					name = "Манго";
					price = 6.00;
					cout << "В каком количестве : ";
					cin >> count;
					bones = true;
					check = true;
					myBag->addProduct(new Fruits(shopName, name, price, count,category , bones));
					break;
				case '3':
					name = "Ананас";
					price = 10.00;
					cout << "В каком количестве : ";
					cin >> count;
					bones = false;
					check = true;
					myBag->addProduct(new Fruits(shopName, name, price, count,category , bones));
					break;
				case '4':
					name = "Помело";
					price = 10.00;
					cout << "В каком количестве : ";
					cin >> count;
					bones = false;
					check = true;
					myBag->addProduct(new Fruits(shopName, name, price, count,category , bones));
					break;
				default:
					cout << "Неправильный ввод " << endl << "Ничего не добавлено" << endl;
					check = false;
				}
			} while (check == false);
			break;
		case'3':
			category = "Рыба";
			do
			{
				cout << "Выберите рыбу : " << endl;
				cout << "1.Лосось " << endl;
				cout << "2.Тунец " << endl;
				cout << "3.Кальмар " << endl;
				cout << "4.Осьминог" << endl;
				switch (_getch())
				{
				case '1':
					name = "Лосось";
					price = 20.00;
					cout << "В каком количестве : ";
					cin >> count;
					color = "Оранжевый";
					check = true;
					myBag->addProduct(new Fish(shopName, name, price, count,category , color));
					break;
				case '2':
					name = "Тунец";
					price = 18.00;
					cout << "В каком количестве : ";
					cin >> count;
					color = "Красный";
					check = true;
					myBag->addProduct(new Fish(shopName, name, price, count,category , color));
					break;
				case '3':
					name = "Кальмар";
					price = 8.00;
					cout << "В каком количестве : ";
					cin >> count;
					color = "Молочный";
					check = true;
					myBag->addProduct(new Fish(shopName, name, price, count,category , color));
					break;
				case '4':
					name = "";
					price = 1.65;
					cout << "В каком количестве : ";
					cin >> count;
					color = "Белый";
					check = true;
					myBag->addProduct(new Fish(shopName, name, price, count,category , color));
					break;
				default:
					cout << "Неправильный ввод " << endl << "Ничего не добавлено" << endl;
					check = false;
				}
			} while (check == false);
			break;
		default:
			cout << "Неправильный ввод " << endl << "Ничего не добавлено" << endl;
			check = false;
			break;
		}
	} while (check == false);
}
