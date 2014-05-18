/*
 * Coordinates.h
 *
 *  Created on: May 13, 2014
 *      Author: Dhia - Ouijdane
 *
 *  Role :
 *  	This file defines the object Coordinates. It represents cartesian coordinates of a point in 2D space
 */
#include <iostream>
#include <cmath>
#define sqr(a) a*a


#ifndef COORDINATES_H_
#define COORDINATES_H_

class Coordinates {
private:
	float abs, ord;
public:
	Coordinates();
	Coordinates(float abs, float ord);	//Initializes the object with coordinates (abs,ord)
	virtual ~Coordinates();
	float getAbs() const;
	void setAbs(float abs);
	float getOrd() const;
	void setOrd(float ord);
	std::string display();				//Displays information about the coordinate
	float distance(Coordinates c);		//Calculates distance between two points

	//overriding operators
	void operator+= (Coordinates);
	Coordinates operator- (Coordinates );
	Coordinates operator+ (Coordinates );
	Coordinates operator* (float k);
	Coordinates operator/ (float k);
};

#endif /* COORDINATES_H_ */
