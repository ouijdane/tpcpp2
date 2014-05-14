#ifndef SHAPE_H
#define SHAPE_H

#include "Coordinates.h"
#include <cmath>
#define PI M_PI

class Shape
{
    protected:
        Coordinates pos ; // position of the geometrical shape
        float orientation;

    public :

        Shape(); //constructor
        virtual ~Shape(); //destructor
        Shape(Coordinates); // intialise the position pos of the geometrical shape
        Shape(Coordinates p, float orientation);
        virtual void display(std::ostream &flux);  // displays informations about the shape
        virtual void translate(Coordinates); // translates the shape
        virtual void translate(float x , float y);
        virtual void homothety(Coordinates,float); //Homothtie -_-
        virtual void homothety(float x, float y ,float k);
        virtual void rotate (Coordinates origin, float alpha);
        virtual void rotate (float alpha);
        virtual float area() =0 ; // calculates the surface occupied by the geometrical shape //supposed to be pure virtual -_-

};


#endif // SHAPE_H
