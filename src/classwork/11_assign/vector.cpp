#include "vector.h"
#include <iostream>
/*
Initialize nums to size dynamic array.
Initialize each array element to 0.
*/
Vector::Vector(size_t sz)
	:size{sz}, nums{new int[sz]}, space{sz}
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
Allocate temporary dunamic array of size v(v1)
Copy v1 elements to temp array
Deallocate old v2 nums array
Points v2 nums array to temp array
Set v2 size to v1 size
return a slef copy of Vector
*/
Vector & Vector::operator=(const Vector & v)
{
	int* temp = new int[v.size];

	for (size_t i = 0; i < v.size; ++i)
	{
		temp[i] = v[i];
	}
	delete nums;

	nums = temp;
	size = v.size;

	return *this;
}

/*
Get thedynamic memory from v
Get the size from v
Point the v.nums to nullptr to take care of memory issues
takes data 
*/
Vector::Vector(Vector && v)
	: size{v.size}, nums{v.nums}
{
	v.size = 0;
	v.nums = nullptr;
}

/*
Deallocate original dynamic memory
Get the dynamic memory from v
Get the size from v
Pont v.nums to nullptr
Set size to 0
*/
Vector & Vector::operator=(Vector && v)
{
	delete nums;
	nums = v.nums;
	size = v.size;
	v.nums = nullptr;
	v.size = 0;

	return *this;
}


/*
Make sure new allocation is greater than space
Create temporary dynamic arrray of size new allocation
Copy values from old memory array to temporary arry
Delete the old memory array (nums)
Set nums to temporary memory array
Set space = new allocation
*/

void Vector::Reserve(size_t new_allocation)
{
	if (new_allocation <= space)
	{
		return;
	}
	int* temp = new int[new_allocation];

	for (size_t i = 0; i < size; ++i)
	{
		temp[i] = nums[i];
	}

	delete[] nums;
	nums = temp;

	space = new_allocation;
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


void use_vector()
{
	Vector* v1= new Vector(3);
	delete v1;
	v1 = nullptr;
}
// does not belong to class
Vector get_vector()
{
	Vector v(3);
	return v;
}

//=================
//free function