#ifndef CIRCLE_H
#define CIRCLE_H

#include "shape.h"


class Circle : public Shape
{
    private:
        float r; //radius
    public:
        Circle(); //constructor
        virtual ~Circle(); //destructor
        Circle (Coordinates, float); // intitializes the Circle
        void display();  //displays informations about the Circle
        void homothety(Coordinates, float); //Homothtie -_-
        float area(); // calculate the area of the Circle

};

#endif // CIRCLE_H
