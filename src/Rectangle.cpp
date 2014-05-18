/*
 * Rectangle.cpp
 *
 *  Created on: May 14, 2014
 *      Author: dhia
 */

#include "Rectangle.h"

#include <iostream>
#include <cmath>
using namespace std;


Rectangle::Rectangle() : my_length(0) , my_width(0){
	my_vertex[0] = pos + Coordinates (my_length/2 , my_width/2);
	my_vertex[1] = pos + Coordinates (-my_length/2 , my_width/2);
	my_vertex[2] = pos + Coordinates (-my_length/2 , -my_width/2);
	my_vertex[3] = pos + Coordinates (my_length/2 , -my_width/2);
}


Rectangle::Rectangle(Coordinates v1, Coordinates v2) {
	my_vertex[0] = v1;
	my_vertex[1] = Coordinates(v1.getAbs() , v2.getOrd());
	my_vertex[2] = Coordinates(v2.getAbs() , v1.getOrd());
	my_vertex[3] = v2;

	my_length = v1.distance(my_vertex[1]);	//determining edge length
	my_width = v2.distance(my_vertex[2]);	//determining edge length

	if(my_length<my_width ){
		float temp;
		temp=my_length;
		my_length= my_width;
		my_width = temp;
	}
	pos = (v2+v1)/2;
}


Rectangle::Rectangle(Coordinates p ,float x, float y) : Shape(p)
{
		my_length = x;
		my_width = y;
		my_vertex[0] = pos + Coordinates (my_length/2 , my_width/2);
		my_vertex[1] = pos + Coordinates (-my_length/2 , my_width/2);
		my_vertex[2] = pos + Coordinates (-my_length/2 , -my_width/2);
		my_vertex[3] = pos + Coordinates (my_length/2 , -my_width/2);
}

void Rectangle::display(std::ostream & flux)
{
    Shape::display(flux);

    flux << " to be more specific I am a Rectangle with a length equal to " << my_length << " and a width equal to" << my_width<< endl;
}

void Rectangle::vertices()
{

    cout << " the coordinates of the vertices of the Rectangle are ";
    for (int i(0) ; i<4 ; i++)
        cout <<my_vertex[i].display()<< endl;

}

void Rectangle::homothety(struct Coordinates p,float k)
{
    Shape::homothety(p,k);
    my_length=abs(k)*my_length;
    my_width=abs(k)*my_width;
}

void Rectangle::rotate(Coordinates origin, float alpha) {
	for (unsigned int i(0) ; i<3 ; i++){
		my_vertex[i].setAbs( (my_vertex[i].getAbs()-origin.getAbs()) * cos(alpha)  - 	(my_vertex[i].getOrd() - origin.getOrd()) * sin (alpha) + origin.getAbs());
		my_vertex[i].setOrd ((my_vertex[i].getAbs()-origin.getAbs()) * sin(alpha)  + 	(my_vertex[i].getOrd() - origin.getOrd()) * cos (alpha) + origin.getOrd());
	}
}

void Rectangle::rotate(float alpha) {
	this->rotate(pos, alpha);
}

float Rectangle::area()
{
    float areaa=my_length*my_width;
    return areaa;
    // cout << "I am a Rectangle with the surface equal to "<< A<<endl;
}

float Rectangle::perimetr()
{
    float p=2*(my_length+my_width);
    return p;
}

