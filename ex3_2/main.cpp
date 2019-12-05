#include <iostream>
using namespace std;

int main()
{
	cout << "Enter the range which you want to search:" << endl;
	int range;
	cin >> range;
	while (range < 2)
	{
		cout << "The range is too small, please enter again!" << endl;
		cin >> range;
	}

	bool isPrimeNum = true;
	for (int i = 2; i <= range; i = i + 1)
	{
		isPrimeNum = true;
		for (int j = 2; (j * j <= i) && (isPrimeNum == true); j++)
		{
			if (i%j == 0)
				isPrimeNum = false;
		}
		if (isPrimeNum == true)
		{
			cout << i << " ";
		}
	}
	cout << endl;
	
	system("Pause");
	return 0;
}