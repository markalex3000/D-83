// Read and write a first name

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

inline void keep_window_open() { char ch; cin >> ch; }

inline void simple_error(string s)	// write ``error: s and exit program
{
	cerr << "error: " << s << '\n';
	keep_window_open();		// for some Windows environments
	exit(1);
}

int main() {
	cout << "please enter the name of the person you want to write to (followed by 'enter'): \n";
	string first_name;
	cin >> first_name;

	string friend_name;
	cout << "\nPlease endter the name of a friend:\n";
	cin >> friend_name;

	char friend_sex = 0;
	cout << " Enter sex of friend ('m' for male and 'f' for female: ";
	cin >> friend_sex;
	cout << "\n";

	int age = 0;
	cout << "And how old is the recipient? ";
	cin >> age;
	if (age < 0 || age > 100) simple_error("your kidding!");

	cout << "Dear " << first_name << ",\n";
	cout << "\tHow are you?  I am fine.  Miss you.  ";
	cout << "Looking forward to the holidays, I know you must be as well.\n";
	cout << "Looks like we may get some snow, not sure about that though...\n";
	
	cout << "Have you seen " << friend_name << " lately?\n";

	if (friend_sex == 'm') cout << "If you see " << friend_name
		<< " please ask him to call me.\n";

	if (friend_sex == 'f') cout << "If you see " << friend_name
		<< " please ask her to call me.\n";

	cout << "I hear you had a birthday and are " << age << " years old!  ";
	if (age < 12)
	{
		cout << "Next year you will be " << age + 1 << " years old!\n";
	}
	if (age == 17)
	{
		cout << "Next year you will be able to vote!\n";
	}
	if (age > 70)
	{
		cout << "I Hope you are enjoying retirement!\n";
	}
	keep_window_open();
	return(0);
}
