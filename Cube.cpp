#include "Cube.h"

void Cube::setLength(double length)
{
	length_ = length; //setting member variable to my parameter

}

void Cube::setWidth(double width)
{
	width_ = width;

}

void Cube::setFaces(double face)
{
	faces_ = face;
}

double Cube::calculateArea()
{
	return (length_ * width_)*faces_;
}

