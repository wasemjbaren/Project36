# Project36
#pragma once
using namespace std;
#include <string>
#include <iostream>
class studint {
private :
	string	institute;
	int average;


public:

	studint(int a, string b) {
		average = a;
		institute = b;
	}
		virtual void print() {

			cout << "the average is " << average<<"\n";
			cout << "the institute  " << institute;



}

	








};
