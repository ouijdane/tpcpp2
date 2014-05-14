/*
 * Coordinates.h
 *
 *  Created on: May 13, 2014
 *      Author: Dhia - Ouijdane
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
	Coordinates(float abs, float ord);
	virtual ~Coordinates();
	float getAbs() const;
	void setAbs(float abs);
	float getOrd() const;
	void setOrd(float ord);
	std::string display();
	float distance(Coordinates c);

	void operator+= (Coordinates);
	Coordinates operator- (Coordinates );
	Coordinates operator+ (Coordinates );
	Coordinates operator* (float k);
	Coordinates operator/ (float k);
};

#endif /* COORDINATES_H_ */
