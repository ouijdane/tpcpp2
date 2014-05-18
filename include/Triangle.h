#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "shape.h"
#include <math.h>


class Triangle : public Shape
{
    private:
        float my_side;
        Coordinates my_vertex[3];
    public:
        Triangle();
        virtual ~Triangle();
        Triangle(Coordinates, Coordinates);
        Triangle(Coordinates, float);

        void vertices();
        void display(std::ostream & flux);
        void homothety(Coordinates,float);
        void rotate (Coordinates origin, float alpha);
        void rotate (float alpha);
        float area() ;

};

#endif // TRIANGLE_H
