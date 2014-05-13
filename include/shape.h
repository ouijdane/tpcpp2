#ifndef SHAPE_H
#define SHAPE_H


#include <cmath>
#define PI M_PI

struct point
{
  float abs;
  float ord;
} ;

class Shape
{
    protected:
        point pos ; // position of the geometrical shape

    public :

        Shape(); //constructor
        virtual ~Shape(); //destructor
        Shape(point); // intialise the position pos of the geometrical shape
        virtual void display();  // displays informations about the shape
        virtual void translate(point); // translates the shape
        virtual void translate(float x , float y);
        virtual void homothety(point,float); //Homothtie -_-
        virtual void homothety(float x, float y ,float k);
        virtual float area() =0 ; // calculates the surface occupied by the geometrical shape //supposed to be pure virtual -_-
        //void rotation()
};


#endif // SHAPE_H
