/*
 * Rectangle.h
 *
 * This object represents a Rectangle. It inherits from Shape
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
    Rectangle(Coordinates, float,float); 		//initializes the rectangle based on the coordinates of its center and the length and width of its edges
    Rectangle(Coordinates, Coordinates);		//initializes the rectangle based on the coordinates of its two corners

    virtual void display(std::ostream & flux);  //displays informations about the rectangle
    virtual void vertices(); 					//displays the coordinates of each vertex of the rectangle
    virtual void homothety(Coordinates, float); //Homothety
    virtual void rotate (Coordinates ,float alpha);	//Rotates the rectangle by alpha. where the first argument represents the center of the rotation
    virtual void rotate (float alpha);			//rotates the rectangle around itself by alpha degrees
    virtual float area(); 						//calculates the area of the rectangle
    virtual float perimetr();					//calculates the perimeter of the rectangle
};

#endif /* RECTANGLE_H_ */
