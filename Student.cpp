#include <stdio.h>
#include "Student.h"
#include <iostream>
#include <string>
#include <vector>
#include <iomanip>

Student::Student(std::string fn, std::string ln, int y, Major m)
  : _first_name(fn), _last_name(ln), _grad_year(y), _major(m) {}

Student::~Student() {
	return;
}

float Student::getGpa() {
	float total = 0;
		int x;
		for(x=0;x<_grades.size();x++){
			total = _grades[x] + total;
		}
		return total / _grades.size();  
}

void Student::addGrade(float grade) {
		_grades.push_back(grade);
		return;}

std::string Student::majorString(Major m){
		switch(m) {
			case Major::EE:
				return "EE";
				break;
			case Major::ME:
				return "ME";
				break;
			case Major::CE:
				return "CE";
				break;
			case Major::CHE:
				return "CHE";
				break;
			case Major::BSE:
				return "BSE";
				break;
			case Major::ART:
				return "ART";
				break;
			case Major::ARCH:
				return "ARCH";
				break;
		}
	}

const std::string& Student::getLastName() {
  return _last_name;
}

void Student::printInfo() {
  using namespace std;
		using std::cout;
		using std::endl;
		using std::setprecision;
		cout << _first_name << ", " << _last_name << endl;
		cout << majorString(_major) << " " << _grad_year << endl;
		cout << "GPA: " << std::fixed << setprecision(2) << getGpa() << std::endl;
}
