#include <iostream>
#include <string>
#include <vector>
#include <windows.h>
#include "CBookCard.h"

using namespace std;


//������� ���������� ������� ���� �� ���� ����������
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

	//�������� ���� �������� ����(�� �������)
	CBookCard Book1 = CBookCard("���������� �.�." , "����� 2033" , "������������ ���" , 2005 , "84�13");
	CBookCard Book2 = CBookCard("������ ������", "1984", "Secker and Warburg", 1949, "81�15");

	//������� ��������� ��� ���� ���� ����
	Book1.SetRate(-1);
	Book2.SetRate(4);

	//�������������� ���� ���������� � ������ � ������
	cout << "\t������ ����� : \n" << endl;
	Book1.ToString();
	cout << "\n\t ������ ����� : \n" << endl;
	Book2.ToString();


	int amount;

	cout << "\n������� ������ ������� : ";
	cin >>amount;

	//����������� �� ���� �� ����� 5 ��������(�� �������)
	while (!amount || amount < 0 || amount > 5)
	{
		cin.clear();
		cin.ignore();
		cout << "������������ ������ .���������� ��� ���(0 < x < 5)..."<<endl<<"����:";
		cin >> amount;
	}


	vector<CBookCard*> books;//������ ����

	//���������� �������
	for (int i = 0; i < amount; i++)
	{
		cout << "\t\n ������� ������ " << i + 1 << " �����:" << endl;
		books.push_back(new CBookCard());
	}

	cout << "\n\t������ �� ���������� : \n" << endl;

	//����� ������� �� ����������
	for (int i = 0; i < amount; i++)
	{
		books[i]->ToString();
		cout << endl;
	}
	
	//����������
	sortByYearOfPublication(books, amount);

	cout << "\n\t������ ����� ���������� : \n" << endl;

	//����� ������� ����� ����������
	for (int i = 0; i < amount; i++)
	{
		books[i]->ToString();
		cout << endl;
	}

	
	return 0;
	
}