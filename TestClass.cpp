#include "TestClass.h"
using namespace std;

void TestClass::print()
{
	cout << "print test class by virtual method" << endl;
}

void TestClass::shared()
{
	cout << "print test class by virtual method with fields: " << a << b << endl;
}

void TestClass::show()
{
	cout << "show test class\n";
}

TestClass::TestClass()
{
	cout << "Constructor TestClass()" << endl;
	this->a = 0;
	this->b = 0;
}

TestClass::TestClass(int a)
{
	cout << "Constructor TestClass(" << a << ")" << endl;
	this->a = a;
	this->b = 0;
}

TestClass::TestClass(int a, int b)
{
	cout << "Constructor TestClass(" << a <<", " << b << ")" << endl;
	this->a = a;
	this->b = b;
}

TestClass::~TestClass()
{
	std::cout << "Destructor TestClass()" << endl;
}
