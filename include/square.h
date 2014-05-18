/*
 * This object represents a square. It inherits from Rectangle
 */

#ifndef SQUARE_H
#define SQUARE_H

#include "Rectangle.h"


class Square : public Rectangle
{
private:

public:
    Square();
    virtual ~Square();
    Square(Coordinates, float); 		//initializes the square from the coordinates of its center and the size of its edge
    Square(Coordinates, Coordinates);	//initializes the square from two point's coordinates

    void display(std::ostream & flux);  //displays informations about the square

};


#endif // Square_H



