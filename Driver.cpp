#include<iostream>>
#include <string.h>
#include "Employee.h"
#include "Student.h"
#include "Employee.h"
#include "WorkingStudent.h"

using namespace std;
int main() {
	int z, size, age,average, choice;
	char name[10];
	long id;
	string institute;
	float salary;
	bool same_institute = true;
	cout << "Enter Your size :" << endl;
	cin >> size;
	Person** arr = new Person * [size];

	for (int i = 0; i < size; i++) {
		cout << " choose number : 1-for Person " << endl;
		cout << " choose number: 2-for Student " << endl;
		cout << " Echoose number: 3-for Employee " << endl;
		cout << " choose number: 4-for Employee " << endl;
		cin >> choice;

		if (choice == 1) {


			cout << " Enter name , Enter ID ,enter  Age: " << endl;
			cin >> name >> id >> age;
			arr[i] = new Person(name, id, age);
		}

		else if (choice == 2) {
			cout << "Enter name : Enter ID : enter  Age : enter average : Enter institute: " << endl;
			cin >> name >> id >> age >> average >> institute;
			arr[i] = new Student(name, id, age, average, institute);
		}

		if (choice == 3) {
			cout << "Enter name : Enter ID : enter  Age : enter salary : " << endl;
			cin >> name >> id >> age >> salary;
			arr[i] = new Employee(name, id, age, salary);
		}

		else if (choice == 4) {
			cout << "Enter name : Enter ID : enter  Age : enter salary : Enter institute :" << endl;

			cin >> name >> id >> age >> salary;

			arr[i] = new WorkingStudent(name, id, age, average, institute, salary, same_institute);
		}

		else
			cout << " wrong choice " << endl;
	}

	for (int i = 0; i < size; i++) {
		arr[i]->Print();
	}
	cin >> z;
}
