#include <iostream>
using namespace std;

int main()
{
	char c;
	while (true)
	{
		cout << "MAIN MENU" << endl;
		cout << "l: left, r: right, q: quit ->";
		cin >> c;
		if (c == 'q')
			break;	// Out of "while(true)"

		switch (c)
		{
		case 'l':	// L not one
			cout << "LEFT MENU:" << endl;
			cout << "select a or b: ";
			cin >> c;

			switch (c)
			{
			case 'a':
				cout << "you chose 'a'" << endl;
				break;
			case 'b':
				cout << "you chose 'b'" << endl;
				break;
			default:
				cout << "you didn't choose a or b!" << endl;
				break;
			}
			continue;	// Back to main menu
		case 'r':
			cout << "RIGHT MENU:" << endl;
			cout << "select c or d: ";
			cin >> c;

			switch (c)
			{
			case 'c':
				cout << "you chose 'c'" << endl;
				break;
			case 'd':
				cout << "you chose 'd'" << endl;
				break;
			default:
				cout << "you didn't choose c or d!" << endl;
				break;
			}
			continue;	// Back to main menu
		default:
			cout << "you must type l or r or q!" << endl;
			break;
		}
	}
	cout << "quitting menu..." << endl;

	system("Pause");
	return 0;
}