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
	~Child()
	{
		cout << "Destruction ";
	}

	void setChild()
	{
		cout << " Child with name  " << this->name << "  secondname  " << this->secondname << "  age  " << this->years;
	}
};