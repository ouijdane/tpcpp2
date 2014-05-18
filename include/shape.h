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
        Coordinates pos ;  // position of the geometrical shape
        float orientation; // the angle that the shape makes compared to its original orientation

    public :

        Shape(); //constructor
        virtual ~Shape(); //destructor
        Shape(Coordinates); 						// creates a geometrical shape based on a given vertex
        Shape(Coordinates p, float orientation); 	// creates a geometrical shape based on a given vertex and an angle
        virtual void display(std::ostream &flux);  	// displays informations about the shape
        virtual void translate(Coordinates); 		// translates the shape based on a given coordinates (abs,ord)
        virtual void translate(float x , float y); 	// translates the shape arguments are two floats representing the translation vector
        virtual void homothety(Coordinates,float); 	//	Homothetie
        virtual void homothety(float x, float y ,float k); //
        virtual void rotate (Coordinates origin, float alpha);	//Rotates the shape where origin is the center of rotation and alpha is the rotation angle
        virtual void rotate (float alpha);			//Rotates the shape around its center of alpha degrees
        virtual float area() =0 ; 					//calculates the surface occupied by the geometrical shape
        virtual float perimetr()=0 ;				//calculates the shape's perimeter

};


#endif // SHAPE_H
