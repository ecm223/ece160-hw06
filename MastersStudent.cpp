#include "MastersStudent.h"
#include <iostream>
#include <iomanip>

// Constructor Implementations
MastersStudent::MastersStudent(Student ug, int msy):
    Student(ug), _ms_grad_year(msy) {}
  
MastersStudent::MastersStudent(std::string fn, std::string ln,
    int ugy, int msy, Major m):
    Student(fn, ln, ugy, m), _ms_grad_year(msy) {}

// New methods specific to MastersStudent
float MastersStudent::getMsGpa() {
  float total = 0;
		int x;
		for(x=0;x<_ms_grades.size();x++){
			total = _ms_grades[x] + total;
		}
		return total / _ms_grades.size();  return 0.0;
  return 0.0;
}

void MastersStudent::addMsGrade(float grade) {
  _ms_grades.push_back(grade);
		return;
}

// Override Student's printInfo to include new fields
void MastersStudent::printInfo() {
  Student::printInfo();
  using namespace std;
  using std::cout;
  using std:: endl;
  using std::setprecision;
  	cout << "MS " << majorString(_major) << " : " << _ms_grad_year << endl;
  	cout << "MS " << "GPA: " << setprecision(2) << getMsGpa() << endl;
}
