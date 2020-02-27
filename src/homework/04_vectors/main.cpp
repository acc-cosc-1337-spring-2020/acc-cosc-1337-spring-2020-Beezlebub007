#include"vectors.h"
#include<iostream>
using std::cout; using std::cin;
/*
use a vector of int with values 8, 4, 20, 88, 66, 99

Prompt user for 1 for Get Max from vector and 2 for Get primes.
Prompt user for a number and return max value or list of primes
and display them to screen.
Program continues until user decides to exit.

*/
int main() 
{
	vector <int> num1;
	int choice;
	char x;
	int num;
	vector<int> max{ 8, 4, 20, 88, 66, 99};
	do
	{
		
		cout << "Enter 1 to get max from vector or 2 to get primes: ";
		cin >> choice;
		switch (choice)
		{
		case 1:
			
			cout << "Max from vector";
			for (int i = 0; i < max.size(); ++i)
			{
				cout << max[i] << ' ';
			}
			cout<< " is: " << get_max_from_vector(max) << "\n";
			break;
		case 2:
			cout << "Enter number: ";
			cin >> num;
			cout << "prime numbers for " << num << "are ";
			num1= vector_of_primes(num);
			for (int i = 0; i < num1.size(); ++i)
			{
				cout << num1[i] << ' ';
			}
			
			break;
		default:
			cout << "invalid input" << "\n";
		}
		cout << "continue? Y or N.";
		cin >> x;
	} while (x == 'Y' || x == 'y');
	{
	}
	return 0;
}