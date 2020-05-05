#include "vector.h"
#include <iostream>


template<typename T>
/*
Initialize nums to size dynamic array.
Initialize each array element to 0.
*/
Vector<T>::Vector()
	:size{0}, nums{nullptr}, space{0} // cant initialize int to 0
{
}
template<typename T>
Vector<T>::Vector(size_t sz)
	:size{sz}, nums{new T[sz]}, space{sz}
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
template<typename T>
Vector<T>::Vector(const Vector<T> & v)
	:size{v.size},nums{new T[v.size]}
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
template<typename T>
Vector<T> & Vector<T>::operator=(const Vector<T> & v)
{
	if (this == &v)//prevents self copy
	{
		return *this;
	}
	if (v.size <= space)
	{
		for (size_t i = 0; i < v.size; ++i)
		{
			nums[i] = v[i];
		}
		return *this;
	}

	T* temp = new T[v.size];

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
template<typename T>
Vector<T>::Vector<T>(Vector<T> && v)
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

template<typename T>
Vector<T> & Vector<T>::operator=(Vector<T> && v)
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
template<typename T>
void Vector<T>::Reserve(size_t new_allocation)
{
	if (new_allocation <= space)
	{
		return;
	}
	T* temp = new T[new_allocation];

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

/*
Reserve space
Initialize values beyond size to 0

*/
template<typename T>
void Vector<T>::Resize(size_t new_size)
{
	Reserve(new_size);

	for (size_t i = size; i < new_size; ++i)
	{
		nums[i] = 0;
	}

}
template<typename T>
void Vector<T>::Push_Back(T value)
{
	if (space == 0)
	{
		Reserve(RESERVE_DEFAULT_SIZE);
	}
	else if(size == space)
	{
		Reserve(space * RESERVE_DEFAULT_MULTIPLIER);
	}
	nums[size] = value;
	++size;
}

template<typename T>
Vector<T>::~Vector()
{
	std::cout << "\nrelease memory\n";
	delete[] nums;
}


void use_vector()
{
	Vector<int>* v1= new Vector<int>(3);
	delete v1;
	v1 = nullptr;
}
// does not belong to class
Vector<int> get_vector()
{
	Vector<int> v(3);
	return v;
}

//=================
//free function