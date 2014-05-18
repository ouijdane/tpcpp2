/*
 * square.cpp
 */
#include "square.h"
#include <iostream>
#include <cmath>

using namespace std;

Square::Square() {
	my_length = 0 ;
	my_vertex[0] = pos + Coordinates (my_length/2 , my_length/2);
	my_vertex[1] = pos + Coordinates (-my_length/2 , my_length/2);
	my_vertex[2] = pos + Coordinates (-my_length/2 , -my_length/2);
	my_vertex[3] = pos + Coordinates (my_length/2 , -my_length/2);
}


Square::Square(Coordinates v1, Coordinates v2) {
	my_vertex[0] = v1;
	my_vertex[1] = Coordinates(v1.getAbs() , v2.getOrd());
	my_vertex[2] = Coordinates(v2.getAbs() , v1.getOrd());
	my_vertex[3] = v2;

	my_length = v1.distance(my_vertex[1]);	//determining edge length
	pos = (v2+v1)/2;
}

Square::~Square()
{
    //dtor
}

Square::Square(Coordinates p ,float x) : Rectangle(p,x,x)
{

}

void Square::display(std::ostream & flux)
{
    Shape::display(flux);

    flux << " to be more specific I am a Square with an edge equal to " << my_length << endl ;
}

