/*
 * Coordinates.cpp
 *
 *  Created on: May 13, 2014
 *      Author: dhia
 */

#include "Coordinates.h"

Coordinates::Coordinates() : abs(0), ord(0) {
}

Coordinates::~Coordinates() {
	// TODO Auto-generated destructor stub
}

float Coordinates::getAbs() const {
	return abs;
}

void Coordinates::setAbs(float abs) {
	this->abs = abs;
}

float Coordinates::getOrd() const {
	return ord;
}

Coordinates::Coordinates(float abs, float ord) : abs(abs) , ord(ord){ }

void Coordinates::setOrd(float ord) {
	this->ord = ord;
}

std::string Coordinates::display() {
	std::string s= "( ";
	s += abs;
	s += " , ";
	s += ord ;
	s += " )";
 	return  s;
}

void Coordinates::operator +=(Coordinates  coordinates) {
	this->abs += coordinates.getAbs();
	this->ord += coordinates.getOrd();
}

Coordinates Coordinates::operator -(Coordinates  coordinates) {
	return Coordinates(this->abs - coordinates.getAbs(),this->ord - coordinates.getOrd());
}

Coordinates Coordinates::operator +(Coordinates  coordinates) {
	return Coordinates(this->abs + coordinates.getAbs(),this->ord + coordinates.getOrd());
}

Coordinates Coordinates::operator *(float k) {
	return Coordinates(this->abs*k,this->ord*k);
}