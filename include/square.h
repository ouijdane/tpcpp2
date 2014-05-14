#ifndef SQUARE_H
#define SQUARE_H

#include "Rectangle.h"


class Square : public Rectangle
{
private:

public:
    Square();
    virtual ~Square();
    Square(Coordinates, float); //initializes the square
    Square(Coordinates, Coordinates);

    void display(std::ostream & flux);  //displays informations about the square

};


#endif // Square_H



