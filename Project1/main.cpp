#include <iostream>
#include "laptop.h"
using namespace std;

int main()
{
	laptop obj1("Asus", "Pink", 40000);
	obj1.Print();
	laptop obj2("Macbook", "Green", 80000);
	obj2.Print();
	laptop obj3("HP", "Silver", 60000);
	obj3.Print();
}