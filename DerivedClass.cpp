#include "DerivedClass.h"
using namespace std;

void DerivedClass::print()
{
	cout << "print DERIVED class by virtual method with field: "<< c << endl;
	
}

void DerivedClass::show()
{
	cout << "show derived class" << endl;
}

DerivedClass::DerivedClass()
{
	std::cout << "Construcrot DerivedClass()" << endl;
	this->c = 0;
}

DerivedClass::DerivedClass(int c)
{
	cout << "Constructor TestClass(" << c << ")" << endl;
	this->c = c;
}

DerivedClass::~DerivedClass()
{
	std::cout << "Destructor DerivedClass()" << endl;
}
