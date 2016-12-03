// Read and write a first name

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

inline void keep_window_open() { char ch; cin >> ch; }

int main() {
	cout << "please enter your first name (followed by 'enter'): \n";
	string first_name;
	cin >> first_name;
	cout << "hello, " << first_name << "!\n";
	keep_window_open();
	return(0);
}
