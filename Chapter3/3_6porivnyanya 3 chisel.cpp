#include "../../Hello, World!/Hello, World!/std_lib_facilities.h"
int main() 
{
	cout << "Please enter three number:\n";
        // Для 7 завдання поміняти типи int на string
	int a;
	int b;
	int c;
	cin >> a;
	cin >> b;
	cin >> c;
	if (a > b)
	{
		if (a > c)
		{
			if (b > c)
			{
				cout << c << b << a;
			}
			else 
			{
				cout << b << c << a;
			}
		}
		else
		{
			cout << b << a << c;
		}
	}   
	else
	{
		if (b > c)
		{
			if (a > c)
			{
				cout << c << a << b;
			}
			else
			{
				cout << a << c << b;
			}

		}
		else
			cout << a << b << c;
	}
}