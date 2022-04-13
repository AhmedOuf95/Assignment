#pragma once
#include <iostream>
#include <string>
#include <exception>
using namespace std;

class student
{
private:
	// Attributes
	string firstName;
	string lastName;
	int id;
	int password;
public:
	// Default const.
	student() {
		firstName = "";
		lastName = "";
		id = 0;
		password = 0;
	}
	// Paramet. Const.
	student(string firstName, string lastName, int id, int password) {
		this->firstName = firstName;
		this->lastName = lastName;
		this->id = id;
		this->password = password;
	}
	// Setters
	void set_firstName(string firstName) {
		this->firstName = firstName;
	}
	void set_lastName(string lastName) {
		this->lastName = lastName;
	}
	void set_id(int id) {
		this->id = id;
	}
	void set_password(int password) {
		this->password = password;
	}
	// Getters
	string get_firstName() {
		return firstName;
	}
	string get_lastName() {
		return lastName;
	}
	int get_id() {
		return id;
	}
	int get_password() {
		return password;
	}
	// Methods
	void printinfo() {
		cout << "Name is " << firstName << " " << lastName << endl;
		cout << "Id = " << id << endl;
		cout << "Password = " << password << endl;
	}
	// Destructor
	~student() {

	}
};

