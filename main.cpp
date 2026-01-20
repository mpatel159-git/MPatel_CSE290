#include "Cube.h"
#include <iostream>
using namespace std;

int main()
{
	Cube c;
	c.setLength(3);
	c.setWidth(3);
	c.setFaces(6);
	double resultArea = 0;
	resultArea = c.calculateArea();
	cout << "The area of the cube is "<<resultArea << endl;


	return 0;
}