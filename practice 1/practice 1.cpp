#include <iostream>
#include <exception>
#include <string>
#include "Instructor.h"
using namespace std;

int main() {
	Instructor i1, i2;
	int x, y;
	string a;
	string b;

	// object 1
	cout << "Please type your first name" << endl;
	cin >> a;
	i1.set_firstName(a);
	cout << "Please type your last name" << endl;
	cin >> b;
	i1.set_lastName(b) ;
	cout << "Enter your Id" << endl;
	cin >> x;
	i1.set_id(x);
	cout << "Enter your Password" << endl;
	cin >> y;
	i1.set_password(y);

	// object 2
	cout << "Please type your first name" << endl;
	cin >> a;
	i2.set_firstName(a);
	cout << "Please type your last name" << endl;
	cin >> b;
	i2.set_lastName(b);
	cout << "Enter your Id" << endl;
	cin >> x;
	i2.set_id(x);
	cout << "Enter your Password" << endl;
	cin >> y;
	i2.set_password(y);
	cout << "================" << endl;
	i1.printInfo();
	cout << "================" << endl;
	i2.printInfo();
}