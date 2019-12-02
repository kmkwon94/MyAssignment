#include "MyComplex.h"
#include <math.h>

//Constructor
myComplex::myComplex(int real, int imag) {
	realPart = real;
	imaginaryPart = imag;
}

//Copy constructor
myComplex::myComplex(const myComplex& number) {
	realPart = number.realPart;
	imaginaryPart = number.imaginaryPart;
}

//Accessor functions
int myComplex::getRealPart() const {
	return realPart;
}

int myComplex::getImaginaryPart() const {
	return imaginaryPart;
}

//Mutator functions
void myComplex::setRealPart(int real) {
	realPart = real;
}
void myComplex::setImaginaryPart(int imag) {
	imaginaryPart = imag;
}
void myComplex::set(int real, int imag) {
	realPart = real;
	imaginaryPart = imag;
}

//Overloaded binary operators
myComplex myComplex::operator +(const myComplex& number) const {
	int newReal = realPart + number.realPart;
	int newImag = imaginaryPart + number.imaginaryPart;
	return myComplex(newReal, newImag);
}
myComplex myComplex::operator +(int value) const {
	return myComplex(value) + (*this);
}
myComplex operator +(int value, const myComplex& number) {
	return myComplex(number.realPart + value, number.imaginaryPart);
}
myComplex myComplex::operator -(const myComplex& number) const {
	int newReal = this->realPart - number.realPart;
	int newImag = this->imaginaryPart - number.imaginaryPart;
	return myComplex(newReal, newImag);
}
myComplex myComplex::operator -(int value) const {
	return (*this) - myComplex(value);
}
myComplex operator -(int value, const myComplex& number) {
	return myComplex(value - number.realPart, -number.imaginaryPart);
}


myComplex myComplex::operator *(const myComplex& number) const {
	int newReal = this->realPart * number.realPart - this->imaginaryPart * number.imaginaryPart;
	int newImag = this->realPart * number.imaginaryPart + this->imaginaryPart * number.realPart;
	return myComplex(newReal, newImag);
}
myComplex myComplex::operator *(int value) const {
	return  (*this) * myComplex(value);
}
myComplex operator *(int value, const myComplex& number) {

	return myComplex(number.realPart * value, number.imaginaryPart * value);
}
//Assignment operators
myComplex& myComplex::operator =(const myComplex& number) {
	this->realPart = number.realPart;
	this->imaginaryPart = number.imaginaryPart;
	return *this;
}

myComplex& myComplex::operator =(int value) {
	realPart = value;
	imaginaryPart = 0;
	return *this;
}
myComplex& myComplex::operator +=(const myComplex& number) {
	this->realPart = this->realPart + number.realPart;
	this->imaginaryPart = this->imaginaryPart + number.imaginaryPart;
	return *this;
}
myComplex& myComplex::operator +=(int value) {
	realPart = realPart + value;
	return *this;
}
myComplex& myComplex::operator -=(const myComplex& number) {
	this->realPart = this->realPart - number.realPart;
	this->imaginaryPart = this->imaginaryPart - number.imaginaryPart;
	return *this;
}
myComplex& myComplex::operator -=(int value) {
	realPart = realPart - value;
	return *this;
}
myComplex& myComplex::operator *=(const myComplex& number) {
	int tmp = this->realPart;
	this->realPart = this->realPart * number.realPart - this->imaginaryPart * number.imaginaryPart;
	this->imaginaryPart = tmp * number.imaginaryPart + this->imaginaryPart * number.realPart;
	return *this;
}
myComplex& myComplex::operator *=(int value) {
	this->realPart = this->realPart * value;
	this->imaginaryPart = this->imaginaryPart * value;
	return *this;
}
//Overloading comparison operators
bool myComplex::operator ==(const myComplex& number) const {
	return (realPart == number.realPart) && (imaginaryPart == number.imaginaryPart);
}

bool myComplex::operator >(const myComplex& number) const {
	return sqrt(norm()) > sqrt(number.norm());
}
bool myComplex::operator <(const myComplex& number) const {
	return sqrt(norm()) < sqrt(number.norm());
}
bool myComplex::operator !=(const myComplex& number) const {
	return (realPart != number.realPart) || (imaginaryPart != number.imaginaryPart);
}
bool myComplex::operator >=(const myComplex& number) const {
	return sqrt(norm()) >= sqrt(number.norm());
}
bool myComplex::operator <=(const myComplex& number) const {
	return sqrt(norm()) <= sqrt(number.norm());
}
//Overloaded unary operators
myComplex myComplex::operator -() {//unary minus
	return myComplex(-realPart, -imaginaryPart);
}
myComplex myComplex::operator --() {
	return myComplex(--realPart, imaginaryPart);
}
myComplex myComplex::operator --(int) {
	return myComplex(realPart--, imaginaryPart);
}
myComplex myComplex::operator ++() {
	return myComplex(++realPart, imaginaryPart);
}
myComplex myComplex::operator ++(int) {
	return myComplex(realPart++, imaginaryPart);
}
myComplex myComplex::operator ~() {
	return myComplex(realPart, -imaginaryPart);
}
//private function
int myComplex::norm() const {
	return realPart * realPart + imaginaryPart * imaginaryPart;
}

ostream &operator <<(ostream &outStream, const myComplex& number) {
	outStream << "(" << number.realPart << "," << number.imaginaryPart << ")";
	return outStream;
}

istream &operator >>(istream &inStream, myComplex& number) {
	inStream >> number.realPart >> number.imaginaryPart;
	return inStream;
}