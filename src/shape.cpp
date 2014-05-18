/*
 * shape.cpp
 */
#include<iostream>
#include "shape.h"

using namespace std;

Shape::Shape()
{
    //ctor
	orientation = 0;
}

Shape::~Shape()
{
    //dtor
}

Shape::Shape(Coordinates p)
{
    pos = p;
    orientation = 0;
}

Shape::Shape(Coordinates p, float orientation)
{
    pos = p;
    this->orientation = orientation;
}

void Shape::display(std::ostream &flux)
{
    flux << "A geometrical shape at the position defined by  (" << pos.getAbs()<<","<<pos.getOrd()<<")" << endl;
}

void Shape::translate(Coordinates p)
{
    pos+=p;
    cout << "translation proceeded with sucess !! hallelujah " << endl ;
}

void Shape::translate(float x , float y){
    Coordinates p(x,y);

    this->translate(p);
}

void Shape::homothety(Coordinates p ,float k)
{
	pos = (pos-p)*k -p;
	cout << " homothety proceeded with sucess !! :p " << endl ;
}

void Shape::homothety(float x, float y ,float k)
{
    Coordinates p(x,y);

    this->homothety(p,k);
}

void Shape::rotate(Coordinates origin , float alpha) {
	orientation = alpha;
	pos = Coordinates(pos.distance(origin)*cos(alpha) , pos.distance(origin) * sin(alpha));
}

void Shape::rotate(float alpha) {
	orientation = alpha;
}
