#include <iostream>
#include <string>
using namespace std;

void f1(string* s)
{
	cout << "f1(): " << endl;
	cout << "s = " << s << endl;
	cout << "*s = " << *s << endl;
	*s = "string*";
	cout << "s = " << s << endl;
	cout << "*s = " << *s << endl;
}

void f2(string& s)
{
	cout << "f2(): " << endl;
	cout << "&s = " << &s << endl;
	cout << "s = " << s << endl;
	s = "string&";
	cout << "&s = " << &s << endl;
	cout << "s = " << s << endl;
}

int main()
{
	string s = "test";

	cout << "main: " << endl;
	cout << "s = " << s << endl;
	cout << "&s = " << &s << endl;
	f1(&s);
	cout << "main: " << endl;
	cout << "s = " << s << endl;
	cout << "&s = " << &s << endl;

	cout << "main: " << endl;
	cout << "s = " << s << endl;
	cout << "&s = " << &s << endl;
	f2(s);
	cout << "main: " << endl;
	cout << "s = " << s << endl;
	cout << "&s = " << &s << endl;

	
	system("Pause");
	return 0;
}
