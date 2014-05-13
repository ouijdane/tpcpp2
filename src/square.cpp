#include "square.h"
#include <iostream>
#include <cmath>

using namespace std;

Square::Square() : a(0) { }

Square::~Square()
{
    //dtor
}

Square::Square(Coordinates p ,float x) : Shape(p)
{
    a=x;
}

void Square::display()
{
    Shape::display();

    cout << " to be more specific I am a Square with an edge equal to " << a << endl ;
}

void Square::vertices()
{
    Coordinates vertice[4];
    vertice[0] = pos + Coordinates(a/2, a/2);
    vertice[1] = pos + Coordinates(-a/2, a/2);
    vertice[2] = pos + Coordinates(-a/2, -a/2);
    vertice[3] = pos + Coordinates(a/2, -a/2);

    cout << " the coordinates of the vertices of the Square are ";
    for (int i(0) ; i<4 ; i++)
        cout <<vertice[i].display()<< endl;

}

void Square::homothety(struct Coordinates p,float k)
{
    Shape::homothety(p,k);
    a=abs(k)*a;
}

float Square::area()
{
    float areaa=a*a;
    return areaa;
    // cout << "I am a Square with the surface equal to "<< A<<endl;
}


