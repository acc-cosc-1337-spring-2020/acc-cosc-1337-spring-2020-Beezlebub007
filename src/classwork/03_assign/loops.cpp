#include "loops.h"
#include <iostream>
using std::cin; using std::cout;
/*
WITH LOOP OF YOUR CHOICE:
Write code for function factorial that accepts an int num
and returns the num's factorial

factorial(5);
1*2*3*4*5

returns 120

DON'T FORGET TO WRITE TEST CASE.  See file loop_test.cpp
*/
int function_factorial(int num)
{
	int counter = 0;
	int num1 =1;
	while (num > counter)
	{
		num1 = num1 * (counter+1) ;
		counter = counter + 1;
	}

	return num1;
}
