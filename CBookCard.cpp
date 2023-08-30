#include "CBookCard.h"

//Определение всех методов из класса CBookCard
CBookCard::CBookCard(string author, string title, string publisher, int yearOfPublication, string bbk)
{
	this->author = author;
	this->title = title;
	this->publisher = publisher;
	this->yearOfPublication = yearOfPublication;
	this->bbk = bbk;
}

CBookCard::CBookCard()
{
	SetNewBook();
}

void CBookCard::SetAuthor(string author)
{
	this->author = author;
}

string CBookCard::GetAuthor()
{
	return author;
}

void CBookCard::SetTitle(string title)
{
	this->title = title;
}

string CBookCard::GetTitle()
{
	return title;
}

void CBookCard::SetPublisher(string publisher)
{
	this->publisher = publisher;
}

string CBookCard::GetPublisher()
{
	return publisher;
}

void CBookCard::SetYearOfPublication(int yearOfPublication)
{
	this->yearOfPublication = yearOfPublication;
}

int CBookCard::GetYearOfPublication()
{
	return yearOfPublication;
}

void CBookCard::SetBBK(string bbk)
{
	this->bbk = bbk;
}

string CBookCard::GetBBK()
{
	return bbk;
}

void CBookCard::SetRate(int rate)
{
	//Ограничение ввода рейтинга(не более 3 по заданию)
	//Если вводится < 0 , то присваивается 0 ,а если > 3, то 3
	if (rate < 0)
		this->rate = 0;
	else if (rate > 3)
		this->rate = 3;
	else
	 this->rate = rate;
}

int CBookCard::GetRate()
{
	return rate;
}

void CBookCard::SetComment(string comment)
{
	this->comment = comment;
}

string CBookCard::GetComment()
{
	return comment;
}


void CBookCard::ToString()
{
	cout<< " Author : " << author <<"\n" << " Title : " << title<<"\n"
		<< " Publisher : " << publisher<<"\n"
		<< " Year of publication : " << yearOfPublication<<"\n" << " ББК: " << bbk<<"\n"
		<< " Rate : " << rate <<endl;
}


bool CBookCard::CheckOnSymbol(string str)
{
	bool checker = true;
	for (char c : str)
	{
		if (c == ' ')
		{
			checker = false;
		}
		else
		{
			checker = true;
			break;
		}
	}

	return checker;
}


int CBookCard::CorrectInputYearOfPublication()
{
	int year;
	string inputString;
	string buff = "";
	getline(cin, inputString);
	while (inputString.empty())
	{
		cout << "Некорректный год публикации. Попробуйте еще раз..." << endl << "Введите год публикации : ";
		getline(cin, inputString);
	}
	for (char c : inputString)
	{
		if (isdigit(c))
		{
			buff.push_back(c);
		}
	}
	if (buff.empty())
	{
		cout << "Некорректный год публикации. Попробуйте еще раз..." << endl << "Введите год публикации : ";
		year = CorrectInputYearOfPublication();
	}
	else if (buff.size() != inputString.size())
	{
		cout << "Некорректный год публикации. Попробуйте еще раз..." << endl << "Введите год публикации : ";
		year = CorrectInputYearOfPublication();
	}
	else
	{
		year = atoi(buff.c_str());//Преобразование строки с годом в тип int
	}
	return year;
}


string CBookCard::CorrectInputAuthor()
{
	string buffer = "";
	string inputString;
	bool checking = true;
	getline(cin, inputString);
	while (checking)
	{
		for (unsigned char c : inputString)
		{

			if (CheckOnSymbol(inputString) == false)
			{
				cin.clear();
				cout << "Неправильный ввод автора!!! Попробуйте еще раз..." << endl << "Введите автора : ";
				buffer = "";
				getline(cin, inputString);
				checking = true;
				break;
			}
			if ((c >= '0' && c <= '9') || (c == ',') || (c == '/') || (c == ';') || (c == ':') || (c == '[') || (c == ']') || (c == '{') || (c == '}') || (c == '(') || (c == ')'))
			{
				cin.clear();
				cout << "Неправильный ввод автора!!! Попробуйте еще раз..." << endl << "Введите автора : ";
				buffer = "";
				getline(cin, inputString);
				checking = true;
				break;
			}
			else if (isspace(c) == 0)
			{
				buffer.push_back(c);
				checking = false;
			}
		}
		if (inputString.empty())
		{
			cin.clear();
			cout << "Неправильный ввод автора!!! Попробуйте еще раз..." << endl << "Введите автора : ";
			getline(cin, inputString);
			checking = true;
			continue;
		}

	}
	return inputString;
}

string CBookCard::CorrectInputTitle()
{
	string buffer = "";
	string inputString;
	bool checking = true;
	getline(cin, inputString);
	while (checking)
	{
		for (unsigned char c : inputString)
		{

			if (CheckOnSymbol(inputString) == false)
			{
				cin.clear();
				cout << "Неправильный ввод заглавия!!! Попробуйте еще раз..." << endl << "Введите заглавие : ";
				buffer = "";
				getline(cin, inputString);
				checking = true;
				break;
			}
			if (isspace(c) == 0)
			{
				buffer.push_back(c);
				checking = false;
			}
		}
		if (inputString.empty())
		{
			cin.clear();
			cout << "Неправильный ввод заглавия!!! Попробуйте еще раз..." << endl << "Введите заглавие : ";
			getline(cin, inputString);
			checking = true;
			continue;
		}

	}
	return inputString;
}

string CBookCard::CorrectInputPublisher()
{
	string buffer = "";
	string inputString;
	bool checking = true;
	getline(cin, inputString);
	while (checking)
	{
		for (unsigned char c : inputString)
		{

			if (CheckOnSymbol(inputString) == false)
			{
				cin.clear();
				cout << "Неправильный ввод издателя!!! Попробуйте еще раз..." << endl << "Введите издателя : ";
				buffer = "";
				getline(cin, inputString);
				checking = true;
				break;
			}
			if (isspace(c) == 0)
			{
				buffer.push_back(c);
				checking = false;
			}
		}
		if (inputString.empty())
		{
			cin.clear();
			cout << "Неправильный ввод издателя!!! Попробуйте еще раз..." << endl << "Введите издеталя : ";
			getline(cin, inputString);
			checking = true;
			continue;
		}

	}
	return inputString;
}


string CBookCard::CorrectInputBBK()
{
	string buffer = "";
	string inputString;
	bool checking = true;
	getline(cin, inputString);
	while (checking)
	{
		for (unsigned char c : inputString)
		{

			if (CheckOnSymbol(inputString) == false)
			{
				cin.clear();
				cout << "Неправильный ввод ББК!!! Попробуйте еще раз..." << endl << "Введите ББК : ";
				buffer = "";
				getline(cin, inputString);
				checking = true;
				break;
			}
			if ((c == ',') || (c == '/') || (c == ';') || (c == ':') || (c == '[') || (c == ']') || (c == '{') || (c == '}') || (c == '(') || (c == ')'))
			{
				cin.clear();
				cout << "Неправильный ввод ББК!!! Попробуйте еще раз..." << endl << "Введите ББК : ";
				buffer = "";
				getline(cin, inputString);
				checking = true;
				break;
			}
			if (isspace(c) == 0)
			{
				buffer.push_back(c);
				checking = false;
			}
		}
		if (inputString.empty())
		{
			cin.clear();
			cout << "Неправильный ввод ББК!!! Попробуйте еще раз..." << endl << "Введите ББК : ";
			getline(cin, inputString);
			checking = true;
			continue;
		}

	}
	return inputString;
}


string CBookCard::CorrectInputComment()
{
	string buffer = "";
	string inputString;
	bool checking = true;
	getline(cin, inputString);
	while (checking)
	{
		for (unsigned char c : inputString)
		{

			if (CheckOnSymbol(inputString) == false)
			{
				cin.clear();
				cout << "Неправильный ввод комментария!!! Попробуйте еще раз..." << endl << "Введите комментарий : ";
				buffer = "";
				getline(cin, inputString);
				checking = true;
				break;
			}
			if (isspace(c) == 0)
			{
				buffer.push_back(c);
				checking = false;
			}
		}
		if (inputString.empty())
		{
			cin.clear();
			cout << "Неправильный ввод комментария!!! Попробуйте еще раз..." << endl << "Введите комментарий : ";
			getline(cin, inputString);
			checking = true;
			continue;
		}

	}
	return inputString;
}

int CBookCard::CorrectInputRate()
{
	int rating;
	string inputString;
	string buff = "";
	getline(cin, inputString);
	while (inputString.empty())
	{
		cout << "Некорректный рейтинг. Попробуйте еще раз..." << endl << "Введите рейтинг : ";
		getline(cin, inputString);
	}
	for (unsigned char c : inputString)
	{
		if (isdigit(c))
		{
			buff.push_back(c);
		}
	}
	if (buff.empty())
	{
		cout << "Некорректный рейтинг. Попробуйте еще раз..." << endl << "Введите рейтинг : ";
		rating = CorrectInputRate();
	}
	else
	{
		rating = atoi(buff.c_str());//Преобразование строки рейтинга в тип int
	}
	return rating;
}

void CBookCard::SetNewBook()
{
	int i = 0;
	cout << "Введите автора : ";
	if (i == 0)
	{
		cin.ignore();
	}
	author = CorrectInputAuthor();
	cout << "Введите заглавие : ";
	title = CorrectInputTitle();
	cout << "Введите издателя : ";
	publisher = CorrectInputPublisher();
	cout << "Введите год публикации : ";
	yearOfPublication = CorrectInputYearOfPublication();
	while ((yearOfPublication < 1000) ||(yearOfPublication >2023) )
	{
		cin.clear();
		cout << "Некорректный год публикации. Попробуйте еще раз..." << endl << "Введите год публикации : ";
		yearOfPublication = CorrectInputYearOfPublication();
	}
	cout << "Введите ББК : ";
	bbk = CorrectInputBBK();
	cout << "Введите рейтинг : ";
	rate = CorrectInputRate();
	if (rate < 0)
		rate = 0;
	else if (rate > 3)
		rate = 3;
	else
		this->rate = rate;
	//cin.ignore();
	cout << "Введите комментарий : ";
	comment = CorrectInputComment();
	i++;
}
