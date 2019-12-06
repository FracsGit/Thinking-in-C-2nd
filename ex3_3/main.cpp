#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
	ifstream in("main.cpp");
	string word;
	int state = 0;

	while (true)
	{
		cout << "Enter one or two or quit:" << endl;
		in >> word;
		if (word == "quit")
			break;	// Out of "while(true)"
		if (word == "one")
			state = 1;
		else if (word == "two")
			state = 2;
		else
			state = 0;

		switch (state)
		{
		case 1:
			cout << "you enter one!" << endl;
			break;
		case 2:
			cout << "you enter two!" << endl;
			break;
		default:
			cout << "you must enter one or two or quit! Not '" << word << "'!" << endl;
			break;
		}
	}
	cout << " quit " << endl;

	system("Pause");
	return 0;
}