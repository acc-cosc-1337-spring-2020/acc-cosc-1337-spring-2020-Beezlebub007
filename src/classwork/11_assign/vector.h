//
//TODO 7 add template


#ifndef MY_VECTOR_H
#define MY_VECTOR_H
#include<cstddef>			//allows use for Mac OS
#include<stddef.h>
/*
Rule of 3 -C++98
*/
class Vector
{
public:
	Vector(size_t sz);
	Vector(const Vector& v);  // copy constructor - Rule of 3 c++ 98
	Vector& operator=(const Vector& v); //copy assignment -Rule of 3 c++ 98
	Vector(Vector&& v);//move constructor Rule of 5 - c++ 11 and higher
	Vector&operator=(Vector&& v);//move assignment Rule of 5 - c++ 11 and higher
	size_t Size()const { return size; }
	//void set_size(size_t sz) { size = sz; }
	int& operator[](int i) { return nums[i]; }
	int& operator[](int i)const { return nums[i]; }
	~Vector();					//destructor - Rule of 3 c++ 98
	
private:
	size_t size;
	int* nums; // raw array
};


#endif //!1

// does not belong to class
//free function
void use_vector();
Vector get_vector();