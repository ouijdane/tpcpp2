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
        Circle (float x, float y , float r); // intitializes the Circle
        void display(std::ostream & flux);  //displays informations about the Circle
        void homothety(Coordinates, float); //Homothtie -_-
        float area(); // calculate the area of the Circle
        float perimetr();
};

#endif // CIRCLE_H
