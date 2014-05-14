/*
 * Rectangle.h
 *
 *  Created on: May 14, 2014
 *      Author: dhia
 */

#ifndef RECTANGLE_H_
#define RECTANGLE_H_

#include <shape.h>

class Rectangle: public Shape {

protected:
    float my_length , my_width;
    Coordinates my_vertex[4];

public:
    Rectangle();
    Rectangle(Coordinates, float,float); //initializes the rectangle
    Rectangle(Coordinates, Coordinates);

    virtual void display(std::ostream & flux);  //displays informations about the rectangle
    virtual void vertices(); //displays the coordinates of each vertex of the rectangle
    virtual void homothety(Coordinates, float); //Homothtie -_-
    virtual void rotate (Coordinates ,float alpha);
    virtual void rotate (float alpha);
    virtual float area(); //calculates the area of the Square
};

#endif /* RECTANGLE_H_ */
