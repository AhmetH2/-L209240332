#pragma once
#include<iostream>
class Student
{
public:
	void display();
	void set_value();
private:
	int num;
	char name[20];
	char sex;
};