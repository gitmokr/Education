#include "../../Hello, World!/Hello, World!/std_lib_facilities.h"
int main()
{
	cout << "Please enter two numbers:\n";
	double va11;
	double va12;
	cin >> va11;
	cin >> va12;
	if (va11 < va12)
	{
		// Дві операції виконуються коли va11 < va12
		cout << va12 << " Big number.\n";
		cout << va11 << " Small number.\n";
	}
	else 
	{
		// Обидві операції виконаються якщо va11 > va12
		cout << va11 << " Big number. \n";
		cout << va12 << " Small number. \n";
	}
	cout << "Summ: " << va11 + va12 << "\n";
	cout << "Difference: " << va11 - va12 << "\n";
	cout << "Product: " << va11 * va12 << "\n";
	cout << "Division: " << va11 / va12 << "\n";
}