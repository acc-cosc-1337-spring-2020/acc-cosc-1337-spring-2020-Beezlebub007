#include "arrays_dyn_ch.h"
#include<iostream>
void dynamic_array()
{
	const int s = 10;
	char* name = new char[s];//allocates
	std::cout << "enter name:";
	std::cin.getline(name, s);//captures from keyboard

	std::cout << name << "\n";

	delete[] name;
}
