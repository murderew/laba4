#include <iostream>
#include "child.h"
#include "complex.h"
#include "tiles.h"
#include "vector.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	Child child1;
	Child child2;
	Tiles tiles1;
	Tiles tiles2;
	Vector ve_1;
	Vector ve_2;
	Complex com_1;
	Complex com_2;

	cout << "-------------Child-------------" << endl;
	child1.setChild();
	cout << endl;
	child2.setChild();
	cout << endl;
	cout << "-------------Tiles-------------" << endl;
	tiles1.GetData();
	cout << endl;
	tiles2.GetData();
	cout << endl;
	cout << "-------------Vectors-----------" << endl;
	ve_1.module();
	ve_1.Vecplus();
	cout << endl;
	ve_2.module();
	ve_2.Vecplus();
	cout << endl;
	cout << "-------------Complex's---------------" << endl;
	com_1.setcomplex();
	com_1.setcomplex();
	cout << endl;
	com_2.setcomplex();
	com_2.setcomplex();
	cout << endl;



	system("pause");
	return 0;
}