#include "dna.h"
/*
Write code for function get_gc_content that accepts
a const reference string parameter and returns a double.
Calculate GC content:
Iterate string count Gs and Cs, divide count by string length.
Return quotient.
*/


double get_gc_content(const string& dna)
{
	int count = 0;
	double gc_content= 0;
	double numofdna = dna.length();
	for (unsigned int i = 0; i < dna.length(); i++)
	{
		if (dna.at(i) == 'G')
		{
			count++;
		}
		else if (dna.at(i) == 'C')
		{
			count++;
		}

	}
	gc_content = (count / numofdna);
	
	return gc_content;
}

/*
Write code for function get_reverse_string that
accepts a string parameter and returns a string reversed.
*/
string get_reverse_string(string dna)
{
	string x;
	for ( int i = dna.length() - 1; i >= 0 ; --i)
	{
		x = x + dna[i];
	}
	return(x);
}




/*
Write prototype for function get_dna_complement that
accepts a string dna and returns a string.
Calculate dna complement:
a. call function get_reverse_string(dna), save results to a local string variable
b. iterate local string variable and
    replace A with T, T with A, C with G and G with C
c. return string

*/

string get_dna_complement(string dna)
{
	return string();
}
