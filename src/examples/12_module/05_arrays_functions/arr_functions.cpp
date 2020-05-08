//
#include<iostream>
#include "arr_functions.h"
//define iterate_array and loop through with ++ increment

void iterate_array(int * hours, const int Size)
{
	for (int i = 0; i < Size; ++i)
	{
		std::cout << hours[i] << "\n";
	}
}
