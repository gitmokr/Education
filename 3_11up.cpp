#include "../../Hello, World!/Hello, World!/std_lib_facilities.h"
int main()
{
	cout << "How many one - cent coins do you have?\n";
	int a;
	cin >> a;
	cout << "How many five - cent coins do you have?\n";
	int b;
	cin >> b;
	cout << "How many ten - cent coins do you have?\n";
	int c;
	cin >> c;
	cout << "How many twenty - cent coins do you have?\n";
	int d;
	cin >> d;
	cout << "How many fifty - cent coins do you have?\n";
	int f;
	cin >> f;
	int m;
	int r;
	int y;
	if (a > 1)
	{
		cout << "You have " << a << " one - cent coins\n";
	}
	else
	{
		if (a == 1)
		{
			cout << "You have " << a << " one - cent coin\n";
		}
		else
		{
			if (a < 1)
			{
				cout << "You don't have a one - cent coins.\n";
			}
		}
	}
	if (b > 1)
	{
		cout << "You have " << b << " five - cent coins\n";
	}
	else
	{
		if (b == 1)
		{
			cout << "You have " << b << " five - cent coin\n";
		}
		else
		{
			if (b < 1)
			{
				cout << "You don't have a five - cent coins.\n";
			}
		}
	}
	if (c > 1)
	{
		cout << "You have " << c << " ten - cent coins\n";
	}
	else
	{
		if (c == 1)
		{
			cout << "You have " << c << " ten - cent coin\n";
		}
		else
		{
			if (c < 1)
			{
				cout << "You don't have a ten - cent coins.\n";
			}
		}
	}
	if (d > 1)
	{
		cout << "You have " << d << " twenty - cent coins\n";
	}
	else
	{
		if (d == 1)
		{
			cout << "You have " << d << " twenty - cent coin\n";
		}
		else
		{
			if (d < 1)
			{
				cout << "You don't have a twenty - cent coins.\n";
			}
		}
	}
	if (f > 1)
	{
		cout << "You have " << f << " fifty - cent coins\n";
	}
	else
	{
		if (f == 1)
		{
			cout << "You have " << f << " fifty - cent coin\n";
		}
		else
		{
			if (f < 1)
			{
				cout << "You don't have a fifty - cent coins.\n";
			}
		}
	}
	m = a + (b * 5) + (c * 10) + (d * 20) + (f * 50);
	r = m / 100;
	y = m % 100;
	cout << "You have " << r << " grivn " << y << " kopiok.";
}