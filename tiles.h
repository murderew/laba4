#include "pch.h"
#include <iostream>
#include <string>
#include <locale>

using namespace std;
class Tiles
{
private:
	string brand;
	int size_h;
	int size_w;
	int price;
public:

	Tiles()
	{
		cout << "Enter brand name: ";
		cin >> this->brand;
		cout << "Enter hight: ";
		cin >> this->size_h;
		cout << "Enter weight: ";
		cin >> this->size_w;
		cout << "Enter price: ";
		cin >> this->price;
		cout << endl;
	}
	~Tiles()
	{
		cout << "Destrcution with" << this->brand;
	}

	void GetData()
	{
	/*	cout << "������� �������� ������: ";
		cin >> brand;
		cout << "�����: ";
		cin >> size_h;
		cout << "���: ";
		cin >> size_w;
		cout << "����:";
		cin >> price;*/
		cout << "Brand name: " << brand << " Parametrs: " << size_h << "large, " << size_w << " weight, " << " price " << price << "$.";
	}
};