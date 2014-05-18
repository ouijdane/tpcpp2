#ifndef GROUP_H
#define GROUP_H
#include <vector>
#include <shape.h>

using namespace std;

class Group : public Shape
{
    private:
        vector<Shape*> shapes;
    public:
        Group();
        virtual ~Group();
        void translate(Coordinates);
        void homothety(Coordinates,float);
        void display(std::ostream & flux);
        float area();
        float perimetr();

        void addShape(Shape*);
        int shapesCount();
        void deleteShape(int );

};

#endif // GROUP_H
