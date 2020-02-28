//write include statemetns
#include"rectangle.h"
#include<vector>
#include<iostream>
using std::cout;
/*
Create a vector of rectangles
Add 3 Rectangle classes to the vector:
Width	Height		Area
  4		 5			  20
 10		10			 100
100		10			1000
Iterate the vector and display the Area for each Rectangle on one line and the total area for the
3 rectangles.
*/
int main()
{
	auto total{0};
	std::vector<Rect> width, height{ Rect(4, 5), Rect(10,10), Rect(100,10) };
	for (auto a : width, height)
	{
		cout << a.get_area() << "\n";
		total = a.get_area() + total;
	}
	cout << total;
	
	return 0;
}