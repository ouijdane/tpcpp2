/*
 * Triangle.cpp
 */
#include <iostream>
#include "Triangle.h"

using namespace std;
Triangle::Triangle(): my_side(0)
{
        my_vertex[0]= Coordinates( pos.getAbs()           , pos.getOrd()+(sqrt(3)/3)*my_side);
        my_vertex[1]= Coordinates( pos.getAbs()+my_side/2 , pos.getOrd()-(sqrt(3)/6)*my_side);
        my_vertex[2]= Coordinates( pos.getAbs()-my_side/2 , pos.getOrd()-(sqrt(3)/6)*my_side);
}

Triangle::Triangle(Coordinates v1, Coordinates v2)
{
    my_side = v1.distance(v2);
    Coordinates mid = (v1+v2)/2;
    pos =Coordinates((sqrt(3)/3)*my_side + mid.getAbs() , (sqrt(3)/3)*my_side +mid.getOrd());

    my_vertex[0]=v1;
    my_vertex[1]=v2;
    //my_vertex[2]= Coordinates( , ) ;

}

Triangle::Triangle(Coordinates v, float x)
{
    pos=v;
    my_side=x;
    my_vertex[0] = Coordinates(v.getAbs()            , v.getOrd()+(sqrt(3)/3)*my_side) ;
    my_vertex[1] = Coordinates(v.getAbs()+ my_side/2 , v.getOrd()-(sqrt(3)/6)*my_side) ;
    my_vertex[2] = Coordinates(v.getAbs()- my_side/2 , v.getOrd()-(sqrt(3)/6)*my_side) ;
}



void Triangle::display(std::ostream & flux)
{
    Shape::display(flux);

    flux << " to be more specific I am a triangle with a side equal to " << my_side << endl;
}

void Triangle::vertices()
{
    cout << " The coordinates of the vertices of the Triangle are " << endl;
    for (int i(0) ; i<3 ; i++)
        cout << my_vertex[i].display()<< endl;
}


void Triangle::homothety(Coordinates p,float k)
{
    Shape::homothety(p,k);
    my_side=abs(k)*my_side;
}

void Triangle::rotate(Coordinates origin, float alpha) {
	for (unsigned int i(0) ; i<2 ; i++){
		my_vertex[i].setAbs( (my_vertex[i].getAbs()-origin.getAbs()) * cos(alpha)  -(my_vertex[i].getOrd() - origin.getOrd()) * sin (alpha) + origin.getAbs());
		my_vertex[i].setOrd ((my_vertex[i].getAbs()-origin.getAbs()) * sin(alpha)  + (my_vertex[i].getOrd() - origin.getOrd()) * cos (alpha) + origin.getOrd());
	}
}

void Triangle::rotate(float alpha) {
	this->rotate(pos, alpha);
}

float Triangle::area()
{
    float areaa = sqr(my_side)*sqrt(3)/4;
    return areaa;
}

Triangle::~Triangle()
{
}

float Triangle::perimetr()
{
    float p= 3*my_side;
    return p;
}
