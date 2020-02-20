//write include statements
#include "dna.h"
#include <string>
#include<iostream>
//write using statements
using std::string;
using std::cout;
using std::cin;

/*
Write code that prompts user to enter 1 for Get GC Content, 
or 2 for Get DNA Complement.  The program will prompt user for a 
DNA string and call either get gc content or get dna complement
function and display the result. Program runs as long as 
user enters a y or Y.
*/
int main() 
{
	int choice;
	char x;

	do
	{
		string dna;
		cout << "Enter 1 for GC Content or 2 for DNA complement: ";
		cin >> choice;
		switch (choice)
		{
		case 1:
			cout << "Enter DNA string: ";
			cin >> dna;
			cout << "DNA content is: " << get_gc_content(dna) << "\n";
			break;
		case 2:
			cout << "Enter DNA string: ";
			cin >> dna;
			cout << "DNA complement is: " << get_dna_complement(dna) << "\n";
			break;
		}
		cout << "continue? Y or N.";
		cin >> x;
	}while (x == 'Y'|| x == 'y');
	{
	}
	return 0;

}