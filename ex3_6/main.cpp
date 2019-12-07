#include <iostream>
using namespace std;

int dog, cat, bird, fish;
char c1, c2, c3, c4;
float f1, f2, f3, f4;
double d1, d2, d3, d4;

void f(int pet)
{
	cout << "pet id number: " << pet << endl;
}

int main()
{
	int i, j, k;
	char c5, c6, c7, c8;
	float f5, f6, f7, f8;
	double d5, d6, d7, d8;

	cout << "f(): " << (long)&f << endl;
	cout << "dog: " << (long)&dog << endl;
	cout << "cat: " << (long)&cat << endl;
	cout << "bird: " << (long)&bird << endl;
	cout << "fish: " << (long)&fish << endl;
	cout << "i: " << (long)&i << endl;
	cout << "j: " << (long)&j << endl;
	cout << "k: " << (long)&k << endl;
	cout << "c1: " << (long)&c1 << endl;
	cout << "c2: " << (long)&c2 << endl;
	cout << "c3: " << (long)&c3 << endl;
	cout << "c4: " << (long)&c4 << endl;
	cout << "c5: " << (long)&c5 << endl;
	cout << "c6: " << (long)&c6 << endl;
	cout << "c7: " << (long)&c7 << endl;
	cout << "c8: " << (long)&c8 << endl;
	cout << "f1: " << (long)&f1 << endl;
	cout << "f2: " << (long)&f2 << endl;
	cout << "f3: " << (long)&f3 << endl;
	cout << "f4: " << (long)&f4 << endl;
	cout << "f5: " << (long)&f5 << endl;
	cout << "f6: " << (long)&f6 << endl;
	cout << "f7: " << (long)&f7 << endl;
	cout << "f8: " << (long)&f8 << endl;
	cout << "d1: " << (long)&d1 << endl;
	cout << "d2: " << (long)&d2 << endl;
	cout << "d3: " << (long)&d3 << endl;
	cout << "d4: " << (long)&d4 << endl;
	cout << "d5: " << (long)&d5 << endl;
	cout << "d6: " << (long)&d6 << endl;
	cout << "d7: " << (long)&d7 << endl;
	cout << "d8: " << (long)&d8 << endl;


	system("Pause");
	return 0;
}