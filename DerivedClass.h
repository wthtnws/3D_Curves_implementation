#pragma once
#include "TestClass.h"
class DerivedClass : public TestClass
{
	private:
		int c;
	public:
		void print();
		void show();

		DerivedClass();
		DerivedClass(int c);
		~DerivedClass();
};

