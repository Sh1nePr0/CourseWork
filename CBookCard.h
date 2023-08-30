#pragma once
#include <iostream>
#include <string>

using namespace std;

class CBookCard 
{
public:
	//Конструкторы и деструктор
	CBookCard();
	~CBookCard(){};

	CBookCard(string author , string title , string publisher , int yearOfPublication , string bbk);

	//Объявление геттеров и сетторов для каждого поля
	void SetAuthor(string author);
	string GetAuthor();


	void SetTitle(string title);
	string GetTitle();


	void SetPublisher(string publisher);
	string GetPublisher();


	void SetYearOfPublication(int yearOfPublication);
	int GetYearOfPublication();


	void SetBBK(string bbk);
	string GetBBK();


	void SetRate(int rate);
	int GetRate();


	void SetComment(string comment);
	string GetComment();

    //Объявление метода преобразования информации о книги в одну строку
	void ToString();

	//Метод задания всей информации о книге
	void SetNewBook();

	//Методы проверки на ввод каждого поля
	int CorrectInputYearOfPublication();
	int CorrectInputRate();
	string CorrectInputAuthor();
	string CorrectInputTitle();
	string CorrectInputPublisher();
	string CorrectInputBBK();
	string CorrectInputComment();

	//Метод проверки на ввод символа
	bool CheckOnSymbol(string str);

private:
	//Все поля класса
	string author;//автор
	string title;//название
	string publisher;//издатель
	int yearOfPublication;//год издания
	string bbk;//ББК
	int rate;//Рейтинг
	string comment;//Комментарий
};
