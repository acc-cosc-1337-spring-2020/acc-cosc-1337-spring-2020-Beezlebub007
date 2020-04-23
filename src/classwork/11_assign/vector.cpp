#include "vector.h"
#include <iostream>
/*
Initialize nums to size dynamic array.
Initialize each array element to 0.
*/
Vector::Vector(size_t sz)
	:size{sz}, nums{new int[sz]}
{
	for (size_t i = 0; i < sz; ++i)
	{
		nums[i] = 0;
	}
}

/*
Copy v.size to nbew class
Create new dunamic memory
Initialize array elements to v.nums array values
*/

Vector::Vector(const Vector & v)
	:size{v.size},nums{new int[v.size]}
{
	for (size_t i = 0; i < size; ++i)
	{
		nums[i] = v[i];
	}
}
/*
Release dynamic memory
Deallocate memmory
*/
Vector::~Vector()
{
	std::cout << "\nrelease memory\n";
	delete[] nums;
}

//=================
//free function
void use_vector()
{
	Vector* v1= new Vector(3);
	delete v1;
	v1 = nullptr;
}