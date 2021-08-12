#include "../../Hello, World!/Hello, World!/std_lib_facilities.h"
int main()
{
	cout << "Enter addressee's name :\n";
	string first_name;
	cin >> first_name;
	cout << "Dear " << first_name << ", how are you?\n"
		<< "And what are you doing?\n";
	cout << "Wait, what is the name of your friend who played chess with us last week?\n";
	string friend_name;
	cin >> friend_name;
	cout << "How long have you meet " << friend_name << "?\n";
	char friend_stat;
	friend_stat = 0;
	cout << "If your friend men enter 'm', and if your friend female enter 'f'\n";
	cin >> friend_stat;
	if (friend_stat == ('m'))
		cout << "Hello men\n";
	if (friend_stat == ('f'))
		cout << "Hello women\n";
	cout << "Please enter your age:\n";
	int age;
	cin >> age;
	/*if (age <= 0)
		simple_error("You are joking!\n");
	if (age >= 110)
		simple_error("You are joking!\n");
     Спочатку не знав про логічний оператор "ЧИ" "||" і писав два if, а їх можна обєднати.
    */
	if (age <= 0 || age >= 110)
		simple_error("You are joking!\n");
	cout << "I listening you have a birthday and you have " << age << " years old.\n";
	if (age <= 12)
		cout << "Next year you have " << ++age << " years old\n";
	if (age == 17)
		cout << "You will be able to vote!\n";
	if (age > 70)
		cout << "I hope you don't miss retirement!\n";
	cout << "Sincerely yours\n\nJohn McFly";
}