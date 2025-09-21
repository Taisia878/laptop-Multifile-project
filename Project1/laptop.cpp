#include "laptop.h"
#include <iostream>
using namespace std;

laptop::laptop::laptop(const char* m, const char* c, int a)
{
	model = new char[strlen(m) + 1];
	strcpy_s(model, strlen(m) + 1, m);
	color = new char[strlen(c) + 1];
	strcpy_s(color, strlen(c) + 1, c);
	price = a;
}

laptop::laptop::~laptop()
{
	delete[] model;
	delete[] color;
}

void laptop::laptop::Print()
{
	cout << "Model: " << model << "\tColor: " << color << "\tPrice: " << price << endl;
}
