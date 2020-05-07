//write code for for stack_array and display each element to screen
#include <iostream>
#include "arrays_mem.h"
void stack_array()
{
	const int SIZE = 5;
	int hours[SIZE];

	for (int i = 0; i < SIZE; ++i)
	{
		hours[i] = i * 10;
	}
	for (int i = 0; i < SIZE; ++i)
	{
		std::cout << hours[i] << "\n";
	}
	std::cout << "\n";
}

void stack_array_init()
{
	const int SIZE = 5;
	int hours[SIZE] = { 0,10,20,30,40 };

	for (int i = 0; i < SIZE; ++i)
	{
		std::cout << hours[i] << "\n";
	}
}
void stack_array_init_for_ranged()
{
	const int SIZE = 5;
	int hours[SIZE] = { 0,10,20,30,40 };

	for (auto hour:hours)
	{
		std::cout << hour << "\n";
	}
}
