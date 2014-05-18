#ifndef SHAPE_H
#define SHAPE_H

#include "Coordinates.h"
#include <cmath>
#include <iostream>
#define PI M_PI

using namespace std;

class Shape
{
    protected:
        Coordinates pos ; // position of the geometrical shape
        float orientation; // the angle of the position (polar coordiantes)

    public :

        Shape(); //constructor
        virtual ~Shape(); //destructor
        Shape(Coordinates); // creates a geometrical shape based on a given vertex
        Shape(Coordinates p, float orientation); //  creates a geometrical shape based on a given vertex and an angle
        virtual void display(std::ostream &flux);  // displays informations about the shape
        virtual void translate(Coordinates); // translates the shape besed on a given point "de type" coordinates (abs,ord)
        virtual void translate(float x , float y); // translates the shape based on (...) -_-
        virtual void homothety(Coordinates,float); //Homothtie  -_-
        virtual void homothety(float x, float y ,float k); //
        virtual void rotate (Coordinates origin, float alpha);
        virtual void rotate (float alpha);
        virtual float area() =0 ; // calculates the surface occupied by the geometrical shape //supposed to be pure virtual -_-
        virtual float perimetr()=0 ;

};


#endif // SHAPE_H
