#include "vector.h"
#include<iostream>
#include <vector>
int main() 
{
	//std::vector<int> v;
	//v.capacity(); //shows max capacity
	//v.reserve(6); //saves memory
	//v.resize(6); //grows vector
	//v.pushback(3);
	/*
	// lvalue-can be refenced or has an address that is accessible
	int num = 5;//5 is an rvalue
	int& num_ref = num;//right here accessible
	//rvalue-
	int a = 1, b = 5, c;
	c = a * b; //a*b is an rvalue
	//int& num_5 =5; cannot be accessed b/c 5 is an rvalue.
	int&& num_5 = 5; 
	*/
	//use_vector();
	//Vector v1(3);
	Vector v1 = get_vector();

	return 0;
}

