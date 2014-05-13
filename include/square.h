#ifndef SQUARE_H
#define SQUARE_H

#include <shape.h>


class Square : public Shape
{
private:
    float a;//edge

public:
    Square();
    virtual ~Square();
    Square(Coordinates, float); //initializes the square
    void display();  //displays informations about the square
    void vertices(); //displays the coordinates of each vertex of the square
    void homothety(Coordinates, float); //Homothtie -_-

    float area(); //calculates the area of the Square
};


#endif // Square_H



