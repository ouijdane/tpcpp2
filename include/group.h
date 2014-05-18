/*
 * group.h
 *
 * This file defines the object Group. It is an object that is able to contain many shapes
 * and use their common methods such as display(), area() perimetr() etc ..
 */

#ifndef GROUP_H
#define GROUP_H
#include <vector>
#include <shape.h>

using namespace std;

class Group
{
    private:
        vector<Shape*> shapes;		//The container that will contain the shapes of this group
    public:
        Group();
        virtual ~Group();
        void translate(Coordinates);		//translates all of the shapes within the group
        void homothety(Coordinates,float);	//does homothetical transformation to all the shapes within
        void display(std::ostream & flux);	//displays information about each shape contained
        float area();						//returns the sum of the areas of all the shapes
        float perimetr();					//returns the sum of the perimeters of all the shapes

        void addShape(Shape*);				//Adds a shape to the group
        int shapesCount();					//Displays how many shapes are in
        void deleteShape(int i);			//Removes a shape , where i is the index of the shape to be removed

};

#endif // GROUP_H
