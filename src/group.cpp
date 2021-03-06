/*
 * group.cpp
 */
#include "group.h"

Group::Group()
{
//ctor
}

Group::~Group()
{
//dtor
}

void Group::display(std::ostream & stream)
{
    for (unsigned int i(0) ; i < shapes.size(); i++)
    {
        shapes[i]->display(stream);
    }

}

void Group::homothety(Coordinates p,float k)
{
    for (unsigned int i(0) ; i < shapes.size(); i++)
    {
        shapes[i]->homothety(p,k);
    }
}

void Group::translate(Coordinates p)
{
    for (unsigned int i(0) ; i < shapes.size(); i++)
    {
        shapes[i]->translate(p);
    }
}
float Group::area()
{
    float areaa= 0;
    for (unsigned int i(0) ; i < shapes.size(); i++)
    {
        areaa += shapes[i]->area();
    }
    return areaa;
}

float Group::perimetr()
{
    float p= 0;
    for (unsigned int i(0) ; i < shapes.size(); i++)
    {
        p += shapes[i]-> perimetr();
    }
    return p;

}


void Group::addShape(Shape* shape){
    shapes.push_back(shape);
}

void Group::deleteShape(int p){
    shapes.erase(shapes.begin()+p);
}

int Group::shapesCount(){
    return shapes.size();
}

