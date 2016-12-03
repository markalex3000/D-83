// Read and write a first name

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

inline void keep_window_open() { char ch; cin >> ch; }

int main() {
	cout << "please enter the name of the person you want to write to (followed by 'enter'): \n";
	string first_name;
	cin >> first_name;
	cout << "Dear " << first_name << ",\n";
	cout << "\tHow are you?  I am fine.  Miss you.  ";
	cout << "Looking forward to the holidays, I know you must be as well.\n";
	cout << "Looks like we may get some snow, not sure about that though...\n";

	string friend_name;
	cout << "\nPlease endter the name of a friend:\n";
	cin >> friend_name;
	cout << "Have you seen " << friend_name << " lately?\n";


	keep_window_open();
	return(0);
}
