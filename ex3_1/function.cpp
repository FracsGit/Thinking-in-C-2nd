#include "function.h"
#include <iostream>
using namespace std;

void fun1(...) 
{
	cout << "void func1(...)" << endl;
}

char fun2(...)
{
	cout << "char func2(...)" << endl;
	return 'a';
}

int fun3(...)
{
	cout << "int func3(...)" << endl;
	return 0;
}

float fun4(...)
{
	cout << "float func4(...)" << endl;
	return 0.1;
}