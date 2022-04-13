#pragma once
#include <iostream>
#include <string>
#include <exception>
#include <vector>
using namespace std;

class Course
{
private:
	// Attributes
	string courseName;
	int id;
	string instructorName;
	//vector<string>students;

public:
	// Default const.
	 course() {
		courseName = "";
		id = 0;
		instructorName = "";
		//vector<string>students = {};
	}
	// Paramet. Const.
	 course(string courseName, int id, string instructorName) {
		this->courseName = courseName;
		this->id = id;
		this->instructorName = instructorName;
		//vector<string>students = { 2 };
	}
	// Setters
	void set_courseName(string courseName) {
		this->courseName = courseName;
	}
	void set_id(int id) {
		this->id = id;
	}
	void set_instructorName(string instructorName) {
		this->instructorName = instructorName;
	}


};

