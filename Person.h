#ifndef PERSON
#define PERSON
#include<iostream>
#include<string>
using namespace std;

class Person {
 private:
	 string Name;
	 long ID;
	 int Age;

 public:
	 
	 void set(string a, long b,int c){
		 Name=a;
		 ID = b;
		 Age = c;
	 }
	 string GetName() { return Name;}
	 long GetID() { return ID;}
	 int GetAge() { return Age;}

	 virtual void print() {

		 cout << "\nName : \n" << GetName() << endl;
		 cout << "\nID : \n" << GetID() << endl;
		 cout << "\nAge : \n" << GetAge() << endl;
	 }
};
#endif