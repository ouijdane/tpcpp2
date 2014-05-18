/**
 * circle.h
 *
 * Role:
 * 		This object represents a circle. It inherits from Shape
 */

#ifndef CIRCLE_H
#define CIRCLE_H

#include "shape.h"


class Circle : public Shape
{
    private:
        float r; 	//radius
    public:
        Circle(); 			//constructor
        virtual ~Circle(); 	//destructor
        Circle (Coordinates, float); 			// intitializes the Circle based on the coordinates of its center and the length of its radius
        Circle (float x, float y , float r); 	// same as previous constructor but the center coordinates are specified as two floats
        void display(std::ostream & flux);  	// displays informations about the Circle
        void homothety(Coordinates, float); 	// Homothetical transformation
        float area(); 							// calculate the area of the Circle
        float perimetr();						// calculates the perimeter of the circle
};

#endif // CIRCLE_H
