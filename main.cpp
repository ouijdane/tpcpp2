#include <iostream>
#include <stdlib.h>
#include "shape.h"
#include "square.h"
#include "circle.h"
#include "group.h"

using namespace std;


std::ostream & operator <<(std::ostream& stream , Shape & shape ) {
	shape.display(stream);
	return stream;
}

std::ostream & operator<<(std::ostream& stream , Group & group ) {
	group.display(stream);
	return stream;
}


int main()
{

    cout << "Hello world!" << endl;
    Coordinates M(2,3),H(5,2),K(0,0);

    Square squ (Coordinates(4,4) , Coordinates(2,2));
    cout <<squ;
    squ.vertices();
    squ.rotate(90);
    squ.vertices();
/*
    Circle *c = new Circle(M,4);
    cout << *c;
    c->area();
    c->homothety(H,3);
    cout <<*c ;
    c->translate(H);
    cout <<*c;

    Square *S = new Square(K,3);
    S->translate(M);
    cout << S;
    S->homothety(H,2);
    cout << S ;
    S->area();
    S->vertices();

    system("clear");

    Group G;
    G.addShape(S);
    G.addShape(c);
    G.area();
    cout << G;
    G.homothety(M,2);
    cout << G;

    delete S;
    delete c;*/

    return 0;


}

