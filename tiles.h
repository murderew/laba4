#pragma once
#include <iostream>
#include <string>
#include <locale>

using namespace std;
class Tiles
{
public:
	string brand;
	int size_h;
	int size_w;
	int price;
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
	Tiles(const Tiles&copy) {};
	Tiles(string bra,int sizh,int sizw,int pri)
	{
		brand = bra;
		size_h = sizh;
		size_w = sizw;
		price = pri;
	}
	~Tiles()
	{
		cout << "Destrcution";
	}

	void GetData()
	{

		cout << "Brand name: " << brand << " Parametrs: " << size_h << " large, " << size_w << " weight, " << " price " << price << "$.";
	}
};