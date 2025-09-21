#pragma once
#include <iostream>
using namespace std;
class laptop
{
	char* model;
	char* color;
	double price;
public:
	laptop(const char* m, const char* c, int a);
	~laptop();
	void Print();
};

