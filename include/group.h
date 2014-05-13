#ifndef GROUP_H
#define GROUP_H
#include <vector>
#include <shape.h>
//#include <square.h>
//#include <circle.h>

using namespace std;

class Group : public Shape
{
    private:
        vector<Shape*> shapes;
    public:
        Group();
        virtual ~Group();
        void translate(point);
        void homothety(point,float);
        void display();
        float area();

        void addShape(Shape*);
        int shapesCount();
        void deleteShape(int );

};

#endif // GROUP_H
