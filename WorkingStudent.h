#pragma once
#include "Student.h"
#include "Employee.h"

class WorkingStudent: public Student , public Employee {

private:
	bool same_institute;


public:
	WorkingStudent();
	WorkingStudent(char* ,long ,int ,int ,string ,float ,bool);


	void SSame(bool);
	bool GSam();



	void print()const;



};
