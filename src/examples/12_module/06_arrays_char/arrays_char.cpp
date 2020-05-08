//cpp
#include<iostream>
void char_array()
{
	const int s = 5;
	char name[s] = "Mary";
	name[4]='\0';
	std::cout << name<< "\n""\n";
	for (int i = 0; name[i] != '\0'; ++i)
	{
		std::cout << name[i] << "\n";
	}

}
void char_array_no_size()
{
	
	char name[] = "Mary";
	
	std::cout << name << "\n""\n";

}