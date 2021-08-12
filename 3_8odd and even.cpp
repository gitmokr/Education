#include "../../Hello, World!/Hello, World!/std_lib_facilities.h"
int main()
{
	cout << "Please enter integer:\n";
	int a;
	int b = 2;
	int n;
	cin >> a;
	// Любе число ділю на 2, якщо остача 1 то це непарне, якщо 0 то парне.
	n = a % b;
	if (n == 1)
		cout << a << " it is an odd number";
	else
		cout << a << " it is an even number";
}