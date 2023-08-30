#include <iostream>
#include <string>
#include <vector>
#include <windows.h>
#include "CBookCard.h"

using namespace std;


//Функция сортировки массива книг по году публикации
void sortByYearOfPublication(vector<CBookCard*> &books, int amount)
{
	for (int i = 0; i < amount ; i++)
	{
		for (int j = i + 1; j < amount ; j++)
		{
			if (books[i]->GetYearOfPublication() < books[j]->GetYearOfPublication())
			{
				CBookCard* temp = books[i];
				books[i] = books[j];
				books[j] = temp;
			}
		}

	}
}

int main(){
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	//Создание двух объектов явно(по заданию)
	CBookCard Book1 = CBookCard("Глуховский Д.А." , "Метро 2033" , "Издательство АСТ" , 2005 , "84ш13");
	CBookCard Book2 = CBookCard("Джордж Оруэлл", "1984", "Secker and Warburg", 1949, "81ш15");

	//Задание рейтингов для этих двух книг
	Book1.SetRate(-1);
	Book2.SetRate(4);

	//Преобразование всей информации о книгах в строки
	cout << "\tПервая книга : \n" << endl;
	Book1.ToString();
	cout << "\n\t Вторая книга : \n" << endl;
	Book2.ToString();


	int amount;

	cout << "\nВведите размер массива : ";
	cin >>amount;

	//Ограничение на ввод не более 5 объектов(по заданию)
	while (!amount || amount < 0 || amount > 5)
	{
		cin.clear();
		cin.ignore();
		cout << "Некорректный размер .Попробуйте еще раз(0 < x < 5)..."<<endl<<"Ввод:";
		cin >> amount;
	}


	vector<CBookCard*> books;//Вектор книг

	//Заполнение вектора
	for (int i = 0; i < amount; i++)
	{
		cout << "\t\n Введите данные " << i + 1 << " книги:" << endl;
		books.push_back(new CBookCard());
	}

	cout << "\n\tМассив до сортировки : \n" << endl;

	//Вывод массива до сортировки
	for (int i = 0; i < amount; i++)
	{
		books[i]->ToString();
		cout << endl;
	}
	
	//Сортировка
	sortByYearOfPublication(books, amount);

	cout << "\n\tМассив после сортировки : \n" << endl;

	//Вывод массива после сортировки
	for (int i = 0; i < amount; i++)
	{
		books[i]->ToString();
		cout << endl;
	}

	
	return 0;
	
}