#pragma once
#include <iostream>
class TestClass
{	
	private:
		int a;
		int b;
	public:
		virtual void print();
		virtual void shared();
		void show();

		TestClass();
		TestClass(int a);
		TestClass(int a, int b);
		~TestClass();

};

