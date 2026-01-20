#pragma once

class Cube
{
public:
	double calculateArea();

	void setWidth(double);
	void setLength(double);
	void setFaces(double);
	

private:
	double length_; 
	double width_; 
	double faces_;


};