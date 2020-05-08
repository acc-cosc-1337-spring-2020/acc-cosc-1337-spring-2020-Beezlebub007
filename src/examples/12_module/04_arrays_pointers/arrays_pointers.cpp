//cpp
#include "arrays_pointers.h"
#
void array_pointer()
{
	const int SIZE = 5;
	int hours[SIZE] = { 0,10,20,30,40 };
	int * hours_ptr = hours;
	std::cout << *hours_ptr << "\n";
	*hours_ptr++;
	std::cout << *hours_ptr << "\n";
	*hours_ptr--;
	std::cout << *hours_ptr << "\n";
}

void array_pointer_loop()
{
	const int SIZE = 5;
	int hours[SIZE] = { 0,10,20,30,40 };
	int * hours_ptr = hours;

	for (int i = 0; i < SIZE; ++i)
	{
		std::cout << *hours_ptr << "\n";
		*hours_ptr++;
	}
	std::cout << "\n";

	for (int i = 0; i < SIZE; ++i)
	{
		*hours_ptr--;
		std::cout << *hours_ptr << "\n";
		
	}
}
