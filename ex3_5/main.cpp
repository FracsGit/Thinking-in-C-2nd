#include <iostream>
using namespace std;

int main()
{
	int a, x = 3, y = 7, z = 24;
	a = x + y - 2 / 2 + z;
	cout << a << endl;
	a = x + (y - 2) / (2 + z);
	cout << a << endl;

	system("Pause");
	return 0;
}