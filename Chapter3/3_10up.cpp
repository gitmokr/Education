#include "../../Hello, World!/Hello, World!/std_lib_facilities.h"
int main()
{
	cout << "Please enter one symbol operation and two operand:\n";
	string operation;
	double a;
	double b;
	cin >> operation
	    >> a
	    >> b;
	if (operation == "+" || operation == "plus")
	{
		cout << a + b;
	}
	else
	{
		if (operation == "-" || operation == "minus")
		{
			cout << a - b;
		}
		else
		{
			if (operation == "*" || operation == "mul")
			{
				cout << a * b;
			}
			else
			{
				if (operation == "/" || operation == "div")
				{
					cout << a / b;
				}
				else
				{
					cout <<  "error";
				}
			}
		}	
	}
}