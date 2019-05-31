#pragma once
#include <iostream>
#include <string>
#include <locale>

using namespace std;

class Child
{
private:
	string name;
	string secondname;
	int years;

public:
	void setChild()
	{
		cout << " Child with name  " << this->name << "  secondname  " << this->secondname << "  age  " << this->years;
	}
	Child()
	{
		cout << "Enter name: ";
		cin >> this->name;
		cout << "Enter second name: ";
		cin >> this->secondname;
		cout << "Enter age: ";
		cin >> this->years;
		cout << endl;
	}
	Child(const Child&copy) {};

	Child(string na, string sur, int a)
	{
		name = na;
		secondname = sur;
		years = a;
	}
	~Child()
	{
		cout << "Destruction ";
	}
};