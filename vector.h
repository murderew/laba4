#include <iostream>
#include <string>

using namespace std;

class Vector {

private:
	double x, y, x1, y1, r, x2, y2;
	char c;

public:
	Vector()
	{
		cout << "Enter coordinates " << endl;
		cin >> x >> y;
		cout << std::endl;

		cout << "Enter coordinates " << endl;
		cin >> x >> y;
		cout << endl;
		r = sqrt(pow(x, 2) + pow(y, 2));

		cout << "Enter fitst vector " << endl;
		cin >> x1 >> y1;
		cout << "Enter second vector " << endl;
		cin >> x2 >> y2;
		cout << " Enter operation : (+ , - )" << endl;
		cin >> c;

	}

	void module() 
	{
		cout << "The modulus of your vector is :" << r << endl;
		cout << "\n";
	}
	void Vecplus() 
	{
		switch (c) {
		case '+':
			x = x1 + x2;
			y = y1 + y2;
			break;
		case '-':
			x = x2 - x1;
			y = y2 - y1;
			break;
		default: cout << "Error ";

		}
		cout << " Vector = : " << "(" << x << "," << y << ")" << "\n";
	}
};