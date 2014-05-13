#include <iostream>
#include "shape.h"

using namespace std;

Shape::Shape()
{
    //ctor
}

Shape::~Shape()
{
    //dtor
}

Shape::Shape(point p)
{
    pos.abs=p.abs;
    pos.ord=p.ord;
}

void Shape::display()
{
    cout << "A geometrical shape at the position defined by  (" << pos.abs<<","<<pos.ord<<")" << endl;
}

void Shape::translate(point p)
{
    pos.abs+=p.abs;
    pos.ord+=p.ord;
    cout << "translation proceeded with sucess !! hallelujah " << endl ;
}

void Shape::translate(float x , float y){
    point p;
    p.abs = x ;
    p.ord = y;

    this->translate(p);
}

void Shape::homothety(point p ,float k)
{
    pos.abs=(pos.abs-p.abs)*k-p.abs;
    pos.ord=(pos.ord-p.ord)*k-p.ord;
    cout << " homothety proceeded with sucess !! :p " << endl ;
}

void Shape::homothety(float x, float y ,float k)
{
    point p;
    p.abs = x;
    p.ord = y;

    this->homothety(p,k);
}
