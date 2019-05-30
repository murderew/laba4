// laba3v2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <iostream>
#include "child.h"
#include "complex.h"
#include "tiles.h"
#include "vector.h"
#include "pch.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	Child child1;// = new Child();
	Child child2;// = new Child();
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
// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
