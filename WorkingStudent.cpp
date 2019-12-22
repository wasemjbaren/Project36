#include <iostream>
#include "Student.h"
#include "Employee.h"
#include "WorkingStudent.h"


using namespace std;


WorkingStudent::WorkingStudent() { }



WorkingStudent::WorkingStudent(char* name, long id, int age, int average, string institute, float salary, bool samei) : Student(name, id, age, average, institute)  {


	same_institute = samei;


}


void WorkingStudent::SSame(bool same) {
	same_institute = same;
}



bool WorkingStudent::GSam() {
	return same_institute;
}



void WorkingStudent::print()const
{

	Student::Print();
	Employee::Print();
	cout << "this is same institute: " << same_institute;

}

