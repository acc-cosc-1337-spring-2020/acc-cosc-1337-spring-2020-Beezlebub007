#include "vector.h"
#include<iostream>

int main() 
{
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
	Vector v1 = get_vector();

	return 0;
}

