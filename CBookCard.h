#pragma once
#include <iostream>
#include <string>

using namespace std;

class CBookCard 
{
public:
	//������������ � ����������
	CBookCard();
	~CBookCard(){};

	CBookCard(string author , string title , string publisher , int yearOfPublication , string bbk);

	//���������� �������� � �������� ��� ������� ����
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

    //���������� ������ �������������� ���������� � ����� � ���� ������
	void ToString();

	//����� ������� ���� ���������� � �����
	void SetNewBook();

	//������ �������� �� ���� ������� ����
	int CorrectInputYearOfPublication();
	int CorrectInputRate();
	string CorrectInputAuthor();
	string CorrectInputTitle();
	string CorrectInputPublisher();
	string CorrectInputBBK();
	string CorrectInputComment();

	//����� �������� �� ���� �������
	bool CheckOnSymbol(string str);

private:
	//��� ���� ������
	string author;//�����
	string title;//��������
	string publisher;//��������
	int yearOfPublication;//��� �������
	string bbk;//���
	int rate;//�������
	string comment;//�����������
};