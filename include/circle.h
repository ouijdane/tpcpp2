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
        Circle (point , float); // intitializes the Circle
        void display();  //displays informations about the Circle
        void homothety( point,float); //Homothtie -_-
        //void homothety(float x, float y ,float k)
        float area(); // calculate the area of the Circle

};

#endif // CIRCLE_H
