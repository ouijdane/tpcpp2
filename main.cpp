#include <iostream>
#include <stdlib.h>
#include "shape.h"
#include "square.h"
#include "circle.h"
#include "group.h"

using namespace std;

int main()
{

    cout << "Hello world!" << endl;
    Coordinates M(2,3),H(5,2),K(0,0);

    Circle *c = new Circle(M,4);
    c->display ();
    c->area();
    c->homothety(H,3);
    c->display();
    c->translate(H);
    c->display();

    Square *S = new Square(K,3);
    S->translate(M);
    S->display();
    S->homothety(H,2);
    S->display();
    S->area();
    S->vertices();

    system("clear");

    Group G;
    G.addShape(S);
    G.addShape(c);
    G.area();
    G.display();
    G.homothety(M,2);
    G.display();

    delete S;
    delete c;

    return 0;


}

