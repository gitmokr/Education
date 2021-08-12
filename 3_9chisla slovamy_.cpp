#include "../../Hello, World!/Hello, World!/std_lib_facilities.h"
int main()
{
	cout << "Please enter number of letters:\n";
	string a;
	cin >> a;
	if (a == "zero")
	{
		cout << "It is number 0";
	}
	else
	{
		if (a == "one")
		{
			cout << "It is number 1";
		}
		else
		{
			if (a == "two")
			{
				cout << "It is number 2";
			}
			else
			{
				if (a == "three")
				{
					cout << "It is number 3";
				}
				else
				{
					if (a == "four")
					{
						cout << "It is number 4";
					}
					else
					{
						cout << "I don't know this number.";
					}
				}
			}
		}
	}
}