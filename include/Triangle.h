/*
 * The object Triangle represents an equilateral triangle. It inherits from Shape
 */

#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "shape.h"
#include <math.h>


class Triangle : public Shape
{
    private:
        float my_side;				//The length of the side
        Coordinates my_vertex[3];	//The vertices positions
    public:
        Triangle();
        virtual ~Triangle();
        Triangle(Coordinates, Coordinates);	//Creates a triangle based on two points coordinates
        Triangle(Coordinates, float);		//Creates a triangle based on it's center coordinates and the length of its side

        void vertices();					// Displays the position of the vertices of the triangle
        void display(std::ostream & flux);	// Displays information about the triangle
        void homothety(Coordinates,float);	// Does homothetical transformation where coodinates is the homothety center and the second arg is the ratio
        void rotate (Coordinates origin, float alpha); //re-implementing inherited function
        void rotate (float alpha);			// overriding inherited function
        float area() ;						// overriding inherited function
        float perimetr();					// overriding inherited function

};

#endif // TRIANGLE_H
