#pragma once
#include <string>
#include <vector>

using namespace std;

class Bag {
private:
	//Поле класса в виде вектора продуктов в корзине
	vector <Product*> products;
public:

	//Метод добавления продукта в корзину
	void addProduct(Product* prod) {
		products.push_back(prod);
	}

	//Метод ,который расчитвает и возвращает всю цену
	double getTotalPrice() {
		double totalPrice = 0;
		for (auto prod : products) {
			totalPrice += (prod->getCount() * prod->getPrice());
		}
		return totalPrice;
	}

	//Метод, который выводит всю информацию и цену продуктов в корзине 
	void printInfoWithTotalPriceBag()
	{

		cout << "В корзине находится : " << endl;
		if (products.empty())
		{
			cout << "Корзина пуста !!!(Добавьте продукты)" << endl;
			cout << endl << "Общая цена : " << getTotalPrice() << "р." << endl;
		}
		else
		{
			for (Product* prod : products)
			{
				
				cout << prod->getName() << "-" << prod->getPrice() << "р." << " Количество : " 
					<< prod->getCount() << "x" << " Категория : " << prod->getCategory() << endl;
			}
			cout << endl << "Общая цена : " << getTotalPrice() << "р." << endl;
		}
	}

	//Метод,выводящий информации о продуктах в корзине
	void printInfoBag()
	{
		cout << " В корзине находится : " << endl;
		if (products.empty())
		{
			cout << "Корзина пуста !!!(Добавьте продукты)" << endl;
		}
		else
		{
			for (Product* prod : products)
			{
				cout << prod->getName() << "-" << prod->getPrice() << "р." << " Количество : " 
					<< prod->getCount() << "x" << " Категория : " << prod->getCategory() << endl;
			}
		}
	}

	//Метод, выводящий информации и цену продуктов 
	//определенной категории 
	//в корзине
	void printInfoAndTotalPriceOfCertainCategory()
	{
		if (!products.empty())
		{
			double totalPriceFromCertainCategory = 0;
			bool checker = true;
			cout << "Выберите категорию в которой хотите посчитать стоимость : " << endl;
			cout << "1.Напитки-" << endl;
			cout << "2.Фрукты-" << endl;
			cout << "3.Рыба-" << endl;
			switch (_getch())
			{
			case '1':
				cout << "В корзине из категории напитки находится : " << endl;
				for (Product* prod : products)
				{
					if (prod->getCategory() == "Напитки")
					{
						totalPriceFromCertainCategory += (prod->getCount() * prod->getPrice());
						cout << prod->getName() << "-" << prod->getPrice() << "р." << " Количество : " 
							<< prod->getCount() << "x" << " Категория : " << prod->getCategory() << endl;
						checker = false;
					}
				}
				if (checker == true)
				{
					cout << "Из данной категории в корзине ничего нет!!!" << endl;
				}
				else
				{
					cout << "Общая цена товаров из этой категории : " << totalPriceFromCertainCategory << endl;
				}
				break;
			case '2':
				cout << "В корзине из категории фруктов находится : " << endl;
				for (Product* prod : products)
				{
					if (prod->getCategory() == "Фрукты")
					{
						totalPriceFromCertainCategory += (prod->getCount() * prod->getPrice());
						cout << prod->getName() << "-" << prod->getPrice() << "р." << " Количество : " 
							<< prod->getCount() << "x" << " Категория : " << prod->getCategory() << endl;
						checker = false;
					}
				}
				if (checker == true)
				{
					cout << "Из данной категории в корзине ничего нет!!!" << endl;
				}
				else
				{
					cout << "Общая цена товаров из этой категории : " << totalPriceFromCertainCategory << endl;
				}
				break;
			case '3':
				cout << "В корзине из категории рыба находится : " << endl;
				for (Product* prod : products)
				{
					if (prod->getCategory() == "Рыба")
					{
						totalPriceFromCertainCategory += (prod->getCount() * prod->getPrice());
						cout << prod->getName() << "-" << prod->getPrice() << "р." << " Количество : " 
							<< prod->getCount() << "x" << " Категория : " << prod->getCategory() << endl;
						checker = false;
					}
				}
				if (checker == true)
				{
					cout << "Из данной категории в корзине ничего нет!!!" << endl;
				}
				else
				{
					cout << "Общая цена товаров из этой категории : " << totalPriceFromCertainCategory << endl;
				}
				break;
			default:
				cout << "Неверный ввод.Попробуйте еще раз" << endl;
				printInfoAndTotalPriceOfCertainCategory();
			}
		}
		else
		{
			cout << "Корзина пуста !!!(Добавьте продукты)" << endl;
		}
	}

	//Метод, удалящий определенный элемент
	void DeleteCertainProduct()
	{
		if (!products.empty())
		{
			int deleteProduct;
			cout << "Выберите продукт ,который хотите удалить : ";
			cin >> deleteProduct;
			if (deleteProduct > products.size() || deleteProduct < 1)
			{
				cout << "Выбранного элемента не существует в корзине" << endl;
			}
			else
			{
				products.erase(products.begin() + (deleteProduct - 1));
			}
		}
		else
		{
			cout << "Корзина пуста нечего удалять!!!(Добавьте продукты)" << endl;
		}
	}

	//Деструктор корзины
	~Bag()
	{
		for (Product* prod : products)
		{
			delete prod;
		}
	}
};
