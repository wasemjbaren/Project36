#pragma once
#include<iostream>
#include "Person.h"

class Employee :class Person
{
private:
	float solary;
	
public:
	void setsolary(float solary) 
	{
		this->solary = solary;
	};
	float getsolary() { return  solary; }
};

